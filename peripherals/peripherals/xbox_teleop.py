import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import pygame
import time

class XboxTeleop(Node):
    def __init__(self):
        super().__init__('xbox_teleop')
        self.publisher_ = self.create_publisher(Twist, '/controller/cmd_vel', 10)
        self.timer = self.create_timer(0.05, self.timer_callback)  # 20Hz
        self.reconnect_timer = self.create_timer(2.0, self.check_connection)  # Retry every 2 seconds if disconnected

        self.linear_scale = 0.7
        self.angular_scale = 2.8

        pygame.init()
        pygame.joystick.init()
        pygame.mixer.quit()  # disable audio to suppress ALSA underrun warnings

        self.joystick = None
        self.last_input_time = time.time()
        self.timeout = 0.1  # reduced timeout for quicker stop response
        self.axis_left_y = 0.0
        self.axis_left_x = 0.0
        self.enable = 0
        self.last_twist = Twist()
        self.try_connect()

    def try_connect(self):
        try:
            if pygame.joystick.get_count() > 0:
                self.joystick = pygame.joystick.Joystick(0)
                self.joystick.init()
                self.get_logger().info('Xbox controller connected.')
            else:
                self.joystick = None
        except Exception as e:
            self.get_logger().error(f'Error initializing controller: {e}')
            self.joystick = None

    def check_connection(self):
        if self.joystick is None or not self.joystick.get_init():
            self.try_connect()

    def timer_callback(self):
        pygame.event.pump()

        if self.joystick is None or not self.joystick.get_init():
            self.publish_stop()
            return

        try:
            self.axis_left_y = -self.joystick.get_axis(1)  # Left stick vertical = forward/back
            self.axis_left_x = self.joystick.get_axis(0)   # Left stick horizontal = left/right
            self.enable = self.joystick.get_button(4)      # LB button

            # Deadzone
            if abs(self.axis_left_y) < 0.1:
                self.axis_left_y = 0.0
            if abs(self.axis_left_x) < 0.1:
                self.axis_left_x = 0.0

            if self.enable and (self.axis_left_y != 0.0 or self.axis_left_x != 0.0):
                twist = Twist()
                twist.linear.x = self.axis_left_y * self.linear_scale
                twist.angular.z = self.axis_left_x * self.angular_scale
                self.publisher_.publish(twist)
                self.last_twist = twist
                self.last_input_time = time.time()
        except pygame.error:
            self.get_logger().warn('Lost controller connection.')
            self.joystick = None
            self.publish_stop()

        if time.time() - self.last_input_time > self.timeout:
            self.publish_stop()

    def publish_stop(self):
        stop = Twist()
        self.publisher_.publish(stop)
        self.last_twist = stop


def main(args=None):
    rclpy.init(args=args)
    node = XboxTeleop()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
