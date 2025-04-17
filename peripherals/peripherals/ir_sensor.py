import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Range
import RPi.GPIO as GPIO

class IRSensorNode(Node):
    def __init__(self):
        super().__init__('ir_sensor_node')

        # Define GPIO pins for 4 IR sensors
        self.ir_pins = [4, 17, 27, 22]  # Adjust pins as needed

        # Setup GPIO mode
        GPIO.setmode(GPIO.BCM)
        GPIO.setwarnings(False)

        # Initialize sensor pins as input
        for pin in self.ir_pins:
            GPIO.setup(pin, GPIO.IN)

        # Create publishers for each IR sensor
        self.publishers = [
            self.create_publisher(Range, f'ir_sensor_{i}', 10)
            for i in range(len(self.ir_pins))
        ]

        # Timer callback frequency
        self.create_timer(0.1, self.publish_ir_data)

    def publish_ir_data(self):
        for i, pin in enumerate(self.ir_pins):
            msg = Range()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = f'ir_sensor_{i}'

            # Read sensor value
            sensor_value = GPIO.input(pin)

            # Set the sensor range data (assuming binary state 0 or 1)
            msg.range = float(sensor_value)

            # Publish the sensor reading
            self.publishers[i].publish(msg)
            self.get_logger().info(f'Sensor {i}: {sensor_value}')


def main(args=None):
    rclpy.init(args=args)
    node = IRSensorNode()
    rclpy.spin(node)
    node.destroy_node()
    GPIO.cleanup()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
