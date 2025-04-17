#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8MultiArray
import RPi.GPIO as GPIO

class IRSensorNode(Node):
    def __init__(self):
        super().__init__('ir_sensor_node')

        # Define GPIO pins for each sensor
        self.pins = {
            'left': 17,
            'mid_left': 27,
            'mid_right': 22,
            'right': 23
        }

        # Setup GPIO
        GPIO.setmode(GPIO.BCM)
        for pin in self.pins.values():
            GPIO.setup(pin, GPIO.IN)

        # Publisher setup
        self.publisher = self.create_publisher(Int8MultiArray, 'ir_sensors', 10)
        self.timer = self.create_timer(0.1, self.read_and_publish)  # 10 Hz

    def read_and_publish(self):
        readings = [GPIO.input(self.pins[key]) for key in ['left', 'mid_left', 'mid_right', 'right']]
        msg = Int8MultiArray()
        msg.data = readings
        self.publisher.publish(msg)
        self.get_logger().info(f"IR Sensor Data: {readings}")

    def destroy_node(self):
        GPIO.cleanup()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = IRSensorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
