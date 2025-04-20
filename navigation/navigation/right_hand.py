import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8MultiArray, Bool
from geometry_msgs.msg import Twist
import signal
import time

class RightHandMazeSolver(Node):
    def __init__(self):
        super().__init__('right_hand')

        self.subscription = self.create_subscription(Int8MultiArray, 'ir_sensors', self.ir_callback, 10)
        self.mode_subscription = self.create_subscription(Bool, 'autonomous_mode', self.mode_callback, 10)
        self.publisher = self.create_publisher(Twist, '/controller/cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.publish_cmd)  # 10 Hz

        self.ir_values = [0, 0, 0, 0, 0]  # [Far Left, Left, ML, MR, Right]
        self.ir_counters = [0, 0, 0, 0, 0]
        self.autonomous_enabled = False

        self.FORWARD_SPEED = 0.3
        self.TURN_SPEED = 1.3

        self.last_twist = Twist()
        self.turning_until = 0.0
        self.sequence = []
        self.sequence_index = 0
        self.sequence_start_time = 0.0
        self.left_turning_until = 0.0

        signal.signal(signal.SIGINT, self.shutdown_handler)

    def ir_callback(self, msg):
        self.ir_values = msg.data
        self.ir_counters = [c + 1 if v else 0 for c, v in zip(self.ir_counters, msg.data)]

    def mode_callback(self, msg):
        self.autonomous_enabled = msg.data
        state = "ENABLED" if msg.data else "DISABLED"
        self.get_logger().info(f"Autonomous mode {state}")

    def publish_cmd(self):
        if not self.autonomous_enabled:
            return

        current_time = time.time()
        far_left, L, ML, MR, R = [int(c >= 3) for c in self.ir_counters]
        twist = Twist()

        # --- Handle ongoing simple left turn ---
        if current_time < self.left_turning_until:
            twist.linear.x = 0.0
            twist.angular.z = self.TURN_SPEED
            self.last_twist = twist
            self.publisher.publish(twist)
            return

        # --- Handle ongoing sequence (e.g., right turn) ---
        if self.sequence and current_time < self.turning_until:
            speed, angle, duration = self.sequence[self.sequence_index]
            if current_time - self.sequence_start_time > duration:
                self.sequence_index += 1
                if self.sequence_index >= len(self.sequence):
                    self.sequence.clear()
                    self.ir_counters = [0, 0, 0, 0, 0]  # reset counters
                    return
                self.sequence_start_time = current_time
                speed, angle, duration = self.sequence[self.sequence_index]
            twist.linear.x = speed
            twist.angular.z = angle
            self.last_twist = twist
            self.publisher.publish(twist)
            return

        # --- Top priority: trigger 5-second left turn ---
        if far_left:
            self.get_logger().info("Far left detected — turning left for 5s.")
            self.left_turning_until = current_time + 5.0
            twist.linear.x = 0.0
            twist.angular.z = self.TURN_SPEED
            self.last_twist = twist
            self.publisher.publish(twist)
            return

        # --- Right-hand turn sequence ---
        elif R and MR:
            self.get_logger().info("Initiating right-hand maneuver.")
            self.sequence = [
                (self.FORWARD_SPEED, 0.0, 2.0),
                (0.0, -self.TURN_SPEED, 5.0),
                (self.FORWARD_SPEED, 0.0, 4.0)
            ]
            self.sequence_index = 0
            self.sequence_start_time = current_time
            self.turning_until = current_time + sum(s[2] for s in self.sequence)
            return

        # --- Edge correction logic ---
        elif L and not ML and not MR:
            twist.linear.x = 0.0
            twist.angular.z = 0.5

        elif R and not ML and not MR:
            twist.linear.x = 0.0
            twist.angular.z = -0.5

        elif ML == 1 and MR == 0:
            #twist.linear.x = self.FORWARD_SPEED * 0.8
            twist.angular.z = self.TURN_SPEED * 0.6

        elif MR == 1 and ML == 0:
            #twist.linear.x = self.FORWARD_SPEED * 0.8
            twist.angular.z = -self.TURN_SPEED * 0.6

        elif ML == 0 and MR == 0:
            twist.linear.x = self.FORWARD_SPEED
            twist.angular.z = 0.0

        elif ML == 1 and MR == 1:
            twist.linear.x = -0.2
            twist.angular.z = 0.6

        else:
            twist.linear.x = 0.0
            twist.angular.z = 0.0

        self.last_twist = twist
        self.publisher.publish(twist)

    def shutdown_handler(self, signum, frame):
        self.get_logger().info("Shutdown requested — stopping robot.")
        self.publisher.publish(Twist())
        self.destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = RightHandMazeSolver()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("KeyboardInterrupt received — stopping robot.")
        node.publisher.publish(Twist())
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
