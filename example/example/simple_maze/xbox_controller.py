import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import pygame

class XboxTeleop(Node):
    def __init__(self):
        super().__init__('xbox_teleop')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.05, self.timer_callback)  # 20 Hz

        # Initialize pygame joystick
        pygame.init()
        pygame.joystick.init()
        if pygame.joystick.get_count() == 0:
            self.get_logger().error('No joystick detected!')
            return
        self.joystick = pygame.joystick.Joystick(0)
        self.joystick.init()
        self.get_logger().info(f'Initialized Joystick: {self.joystick.get_name()}')

    def timer_callback(self):
        pygame.event.pump()  # Process event queue

        # Read trigger values
        lt = self.joystick.get_axis(2)  # LT typically ranges from 1 (not pressed) to -1 (fully pressed)
        rt = self.joystick.get_axis(5)  # RT typically ranges from 1 (not pressed) to -1 (fully pressed)

        # Read D-Pad (hat) input for turning
        hat_x, _ = self.joystick.get_hat(0)  # left/right on D-pad

        # Scale values
        forward_speed = max(0.0, (1 - rt) / 2.0)  # Convert from 1..-1 to 0..1
        reverse_speed = max(0.0, (1 - lt) / 2.0)
        linear = forward_speed * 0.5 - reverse_speed * 0.5  # net linear speed

        angular = 0.0
        if hat_x == -1:
            angular = 0.8  # Turn left
        elif hat_x == 1:
            angular = -0.8  # Turn right

        twist = Twist()
        twist.linear.x = linear
        twist.angular.z = angular
        self.publisher_.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    node = XboxTeleop()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()
    pygame.quit()

if __name__ == '__main__':
    main()
