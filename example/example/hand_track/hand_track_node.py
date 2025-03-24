#!/usr/bin/env python3
# encoding: utf-8
# @data:2022/11/07
# @author:aiden
# 手跟随(hand following)
import time
import rclpy
import signal
import threading
import sdk.pid as pid
from rclpy.node import Node
from std_srvs.srv import Trigger
from interfaces.msg import Point2D
from geometry_msgs.msg import Twist
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from ros_robot_controller_msgs.msg import PWMServoState,SetPWMServoState

class HandTrackNode(Node):
    def __init__(self, name):
        rclpy.init()
        super().__init__(name)
        self.name = name
        self.image = None
        self.center = None
        self.running = True
        self.z_dis = 0.41
        self.y_dis = 500

        self.pid_z = pid.PID(0.1, 0.0002, 0.00001)
        self.pid_y = pid.PID(0.1, 0.0002, 0.00001)

        signal.signal(signal.SIGINT, self.shutdown)

        self.pwm_pub = self.create_publisher(SetPWMServoState,'ros_robot_controller/pwm_servo/set_state',10)
        self.mecanum_pub = self.create_publisher(Twist, '/controller/cmd_vel', 1)

        self.image_sub = self.create_subscription(Point2D, '/hand_detect/center', self.get_hand_callback, 1)
        timer_cb_group = ReentrantCallbackGroup()

        self.timer = self.create_timer(0.0, self.init_process, callback_group=timer_cb_group)
        
    def pwm_controller(self,position_data):
        pwm_list = []
        msg = SetPWMServoState()
        msg.duration = 0.2
        for i in range(len(position_data)):
            pos = PWMServoState()
            pos.id = [i+1]
            pos.position = [int(position_data[i])]
            pwm_list.append(pos)
        msg.state = pwm_list
        self.pwm_pub.publish(msg)

    def init_process(self):
        self.timer.cancel()

        self.init_action()

        threading.Thread(target=self.main, daemon=True).start()
        self.create_service(Trigger, '~/init_finish', self.get_node_state)
        self.get_logger().info('\033[1;32m%s\033[0m' % 'start')

    def get_node_state(self, request, response):
        response.success = True
        return response

    def shutdown(self, signum, frame):
        self.running = False

    def init_action(self):
        self.mecanum_pub.publish(Twist())
        self.pwm_controller([1500,1500])

    def send_request(self, client, msg):
        future = client.call_async(msg)
        while rclpy.ok():
            if future.done() and future.result():
                return future.result()

    def get_hand_callback(self, msg):
        if msg.width != 0:
            self.center = msg
        else:
            self.center = None

    def main(self):
        while self.running:
            if self.center is not None:
                t1 = time.time()
                self.pid_y.SetPoint = self.center.width / 2
                self.pid_y.update(self.center.width - self.center.x)
                self.y_dis += self.pid_y.output
                if self.y_dis < 800:
                    self.y_dis = 800
                if self.y_dis > 1900:
                    self.y_dis = 1900

                self.pid_z.SetPoint = self.center.height / 2
                self.pid_z.update(self.center.y)
                self.z_dis -= self.pid_z.output
                if self.z_dis > 1900:
                    self.z_dis = 1900
                if self.z_dis < 800:
                    self.z_dis = 800
                self.pwm_controller([self.z_dis, self.y_dis])
                t2 = time.time()
                t = t2 - t1
                if t < 0.02:
                    time.sleep(0.02 - t)
        
            else:
                time.sleep(0.01)

        self.init_action()
        rclpy.shutdown()

def main():
    node = HandTrackNode('hand_track')
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin()
    node.destroy_node()

if __name__ == "__main__":
    main()

