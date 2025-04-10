#!/usr/bin/env python3
# Simplified self_driving.py for optical line following (bottom right of the screen)
import os
import cv2
import time
import queue
import rclpy
import threading
import numpy as np
import sdk.pid as pid
from rclpy.node import Node
import sdk.common as common
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
import signal

class SelfDrivingNode(Node):
    def __init__(self, name):
        rclpy.init()
        super().__init__(name)
        self.is_running = True
        self.pid = pid.PID(0.3, 0.0, 0.01)
        self.bridge = CvBridge()
        self.image_queue = queue.Queue(maxsize=2)

        self.mecanum_pub = self.create_publisher(Twist, '/controller/cmd_vel', 1)
        self.result_publisher = self.create_publisher(Image, '~/image_result', 1)

        self.create_subscription(Image, '/ascamera/camera_publisher/rgb0/image', self.image_callback, 1)
        signal.signal(signal.SIGINT, self.shutdown)
        threading.Thread(target=self.main, daemon=True).start()

    def image_callback(self, ros_image):
        cv_image = self.bridge.imgmsg_to_cv2(ros_image, "rgb8")
        if self.image_queue.full():
            self.image_queue.get()
        self.image_queue.put(cv_image)

    def main(self):
        while self.is_running:
            try:
                image = self.image_queue.get(timeout=1)
            except queue.Empty:
                continue

            h, w, _ = image.shape
            roi = image[int(h*0.5):h, int(w*0.5):w]  # bottom right quadrant
            gray = cv2.cvtColor(roi, cv2.COLOR_RGB2GRAY)
            _, binary_image = cv2.threshold(gray, 50, 255, cv2.THRESH_BINARY_INV)

            moments = cv2.moments(binary_image)
            cx = int(moments['m10']/moments['m00']) if moments['m00'] != 0 else (roi.shape[1] // 2)

            twist = Twist()
            twist.linear.x = 0.1

            self.pid.SetPoint = roi.shape[1] / 2
            self.pid.update(cx)
            twist.angular.z = common.set_range(self.pid.output, -0.3, 0.3)

            self.mecanum_pub.publish(twist)

            cv2.circle(roi, (cx, roi.shape[0] // 2), 5, (255, 0, 0), -1)
            bgr_image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)
            self.result_publisher.publish(self.bridge.cv2_to_imgmsg(bgr_image, "bgr8"))

            time.sleep(0.20)

        self.mecanum_pub.publish(Twist())
        rclpy.shutdown()

    def shutdown(self, signum, frame):
        self.get_logger().info("Shutting down...")
        self.is_running = False
        self.mecanum_pub.publish(Twist())  # Stop the motors

def main():
    node = SelfDrivingNode('self_driving')
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin()
    node.destroy_node()

if __name__ == "__main__":
    main()
