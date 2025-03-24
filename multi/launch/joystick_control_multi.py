#!/usr/bin/env python3
# encoding: utf-8
import os
import math
import rclpy
from enum import Enum
from rclpy.node import Node
from sdk.common import val_map
from std_srvs.srv import Trigger
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist
from ros_robot_controller_msgs.msg import BuzzerState, SetPWMServoState, PWMServoState

AXES_MAP = 'lx', 'ly', 'rx', 'ry', 'r2', 'l2', 'hat_x', 'hat_y'
BUTTON_MAP = 'cross', 'circle', '', 'square', 'triangle', '', 'l1', 'r1', 'l2', 'r2', 'select', 'start', '', 'l3', 'r3', '', 'hat_xl', 'hat_xr', 'hat_yu', 'hat_yd', ''

class ButtonState(Enum):
    Normal = 0
    Pressed = 1
    Holding = 2
    Released = 3

class JoystickController(Node):
    def __init__(self, name, num_robots):
        rclpy.init()
        super().__init__(name)

        self.min_value = 0.1
        self.declare_parameter('max_linear', 0.7)
        self.declare_parameter('max_angular', 3.0)
        self.declare_parameter('disable_servo_control', True)

        self.max_linear = self.get_parameter('max_linear').value
        self.max_angular = self.get_parameter('max_angular').value
        self.disable_servo_control = self.get_parameter('disable_servo_control').value
        self.machine = os.environ.get('MACHINE_TYPE', 'MentorPi_Mecanum')
        self.get_logger().info('\033[1;32m%s\033[0m' % self.max_linear)

        # 动态创建机器人列表
        self.robots = []
        for i in range(1, num_robots + 1):
            robot_namespace = f'robot_{i}/'
            robot = {
                'servo_state_pub': self.create_publisher(SetPWMServoState, robot_namespace + 'ros_robot_controller/pwm_servo/set_state', 1),
                'buzzer_pub': self.create_publisher(BuzzerState, robot_namespace + 'ros_robot_controller/set_buzzer', 1),
                'mecanum_pub': self.create_publisher(Twist, robot_namespace + 'controller/cmd_vel', 1)
            }
            self.robots.append(robot)

        self.joy_sub = self.create_subscription(Joy, '/joy', self.joy_callback, 1)
        self.last_axes = dict(zip(AXES_MAP, [0.0, ] * len(AXES_MAP)))
        self.last_buttons = dict(zip(BUTTON_MAP, [0.0, ] * len(BUTTON_MAP)))
        self.get_logger().info('\033[1;32m%s\033[0m' % 'start')

    def axes_callback(self, axes):
        twist = Twist()
        if abs(axes['lx']) < self.min_value:
            axes['lx'] = 0
        if abs(axes['ly']) < self.min_value:
            axes['ly'] = 0
        if abs(axes['rx']) < self.min_value:
            axes['rx'] = 0
        if abs(axes['ry']) < self.min_value:
            axes['ry'] = 0

        if self.machine == 'MentorPi_Mecanum':
            twist.linear.y = val_map(axes['lx'], -1, 1, -self.max_linear, self.max_linear)
            twist.linear.x = val_map(axes['ly'], -1, 1, -self.max_linear, self.max_linear)
            twist.angular.z = val_map(axes['rx'], -1, 1, -self.max_angular, self.max_angular)
        elif self.machine == 'JetRover_Tank':
            twist.linear.x = val_map(axes['ly'], -1, 1, -self.max_linear, self.max_linear)
            twist.angular.z = val_map(axes['rx'], -1, 1, -self.max_angular, self.max_angular)
        elif self.machine == 'MentorPi_Acker':
            twist.linear.x = val_map(axes['ly'], -1, 1, -self.max_linear, self.max_linear)
            steering_angle = val_map(axes['rx'], -1, 1, -math.radians(322 / 2000 * 180), math.radians(322 / 2000 * 180))

            if steering_angle == 0:
                twist.angular.z = 0.0
                servo_state = PWMServoState()
                servo_state.id = [3]
                servo_state.position = [1500]  # 中立位置
                data = SetPWMServoState()
                data.state = [servo_state]
                data.duration = 0.02
                for robot in self.robots:
                    robot['servo_state_pub'].publish(data)
            else:
                R = 0.145 / math.tan(steering_angle)
                twist.angular.z = float(twist.linear.x / R)
                servo_state = PWMServoState()
                servo_state.id = [3]
                servo_state.position = [1500 + int(math.degrees(-steering_angle) / 180 * 2000)]
                data = SetPWMServoState()
                data.state = [servo_state]
                data.duration = 0.02
                for robot in self.robots:
                    robot['servo_state_pub'].publish(data)

        # 发布控制消息到所有机器人
        for robot in self.robots:
            robot['mecanum_pub'].publish(twist)

    def start_callback(self, new_state):
        if new_state == ButtonState.Pressed:
            msg = BuzzerState()
            msg.freq = 2500
            msg.on_time = 0.05
            msg.off_time = 0.01
            msg.repeat = 1
            # 同时控制所有机器人的蜂鸣器
            for robot in self.robots:
                robot['buzzer_pub'].publish(msg)

    def joy_callback(self, joy_msg):
        axes = dict(zip(AXES_MAP, joy_msg.axes))
        axes_changed = False
        hat_x, hat_y = axes['hat_x'], axes['hat_y']
        hat_xl, hat_xr = 1 if hat_x > 0.5 else 0, 1 if hat_x < -0.5 else 0
        hat_yu, hat_yd = 1 if hat_y > 0.5 else 0, 1 if hat_y < -0.5 else 0
        buttons = list(joy_msg.buttons)
        buttons.extend([hat_xl, hat_xr, hat_yu, hat_yd, 0])
        buttons = dict(zip(BUTTON_MAP, buttons))

        for key, value in axes.items(): 
            if self.last_axes[key] != value:
                axes_changed = True
        
        if axes_changed:
            try:
                self.axes_callback(axes)
            except Exception as e:
                self.get_logger().error(str(e))
        
        for key, value in buttons.items():
            if value != self.last_buttons[key]:
                new_state = ButtonState.Pressed if value > 0 else ButtonState.Released
            else:
                new_state = ButtonState.Holding if value > 0 else ButtonState.Normal
            callback = "".join([key, '_callback'])
            if new_state != ButtonState.Normal:
                self.get_logger().info(str(new_state))
                if hasattr(self, callback):
                    try:
                        getattr(self, callback)(new_state)
                    except Exception as e:
                        self.get_logger().error(str(e))
        
        self.last_buttons = buttons
        self.last_axes = axes


def main():
    # 指定机器人数量
    num_robots = 3
    node = JoystickController('joystick_control', num_robots)
    rclpy.spin(node)


if __name__ == "__main__":
    main()
