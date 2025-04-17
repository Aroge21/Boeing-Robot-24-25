#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8MultiArray
from geometry_msgs.msg import Twist

class RightHandMazeSolver(Node):
    def __init__(self):
        super().__init__('right_hand')

        self.subscription = self.create_subscription(
            Int8MultiArray,
            'ir_sensors',
            self.ir_callback,
            10
        )

        self.publisher = self.create_publisher(Twist, '/control/cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.publish_cmd)  # 10 Hz

        self.ir_values = [0, 0, 0, 0]  # [L, ML, MR, R]

    def ir_callback(self, msg):
        self.ir_values = msg.data
        self.get_logger().debug(f"IR Sensor values: {self.ir_values}")

    def publish_cmd(self):
        twist = Twist()

        L, ML, MR, R = self.ir_values

        if R == 1:
            # Hard right turn
            twist.linear.x = 0.0
            twist.angular.z = -1.5
        elif L == 1:
            # Hard left turn
            twist.linear.x = 0.0
            twist.angular.z = 1.5
        elif ML == 1 and MR == 0:
            # Slight left correction
            twist.linear.x = 0.1
            twist.angular.z = 0.4
        elif MR == 1 and ML == 0:
            # Slight right correction
            twist.linear.x = 0.1
            twist.angular.z = -0.4
        elif ML == 1 and MR == 1:
            # Go straight
            twist.linear.x = 0.15
            twist.angular.z = 0.0
        else:
            # No tape detected — stop or reverse slightly
            twist.linear.x = 0.0
            twist.angular.z = 0.0

        self.publisher.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    node = RightHandMazeSolver()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()