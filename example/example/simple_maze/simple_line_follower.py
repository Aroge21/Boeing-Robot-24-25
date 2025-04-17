import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Range

class SimpleLineFollower(Node):
    def __init__(self):
        super().__init__('simple_line_follower')

        self.ir_values = [0, 0, 0, 0]  # [left_most, left_middle, right_middle, right_most]
        self.sensor_counts = [0, 0, 0, 0]
        self.detection_threshold = 3  # number of consistent readings before reacting

        # Subscribers for IR sensors
        for i in range(4):
            self.create_subscription(
                Range,
                f'ir_sensor_{i}',
                lambda msg, idx=i: self.ir_callback(msg, idx),
                10)

        # Publisher for robot movement
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        self.timer = self.create_timer(0.1, self.follow_line)

        self.turning = False

    def ir_callback(self, msg, idx):
        detected = int(msg.range)
        if detected:
            self.sensor_counts[idx] += 1
        else:
            self.sensor_counts[idx] = 0

        self.ir_values[idx] = 1 if self.sensor_counts[idx] >= self.detection_threshold else 0

    def follow_line(self):
        twist = Twist()

        left_most, left_middle, right_middle, right_most = self.ir_values

        # Handling sharp turns first
        if left_most:
            self.get_logger().info("Left-most sensor active: preparing for left turn")
            self.turning = True
            twist.linear.x = 0.0
            twist.angular.z = 0.3  # Turn left
        elif right_most:
            self.get_logger().info("Right-most sensor active: preparing for right turn")
            self.turning = True
            twist.linear.x = 0.0
            twist.angular.z = -0.3  # Turn right

        # Wait until sensors no longer detect tape to complete 90-degree turn
        elif self.turning and not (left_most or right_most):
            self.get_logger().info("Completing sharp turn")
            twist.linear.x = 0.1
            twist.angular.z = 0.0
            self.turning = False

        # Normal line following behavior
        elif left_middle and right_middle:
            self.get_logger().info("On line, moving forward")
            twist.linear.x = 0.2
            twist.angular.z = 0.0

        elif left_middle and not right_middle:
            self.get_logger().info("Adjusting left")
            twist.linear.x = 0.15
            twist.angular.z = 0.2

        elif right_middle and not left_middle:
            self.get_logger().info("Adjusting right")
            twist.linear.x = 0.15
            twist.angular.z = -0.2

        else:
            self.get_logger().info("Line lost, stopping")
            twist.linear.x = 0.0
            twist.angular.z = 0.0

        self.cmd_pub.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    follower = SimpleLineFollower()
    rclpy.spin(follower)
    follower.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
