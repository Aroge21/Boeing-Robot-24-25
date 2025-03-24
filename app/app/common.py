#!/usr/bin/env python3
# encoding: utf-8
# 颜色拾取器及心跳包(color picker and heartbeat packet)
import cv2
import time
from std_srvs.srv import SetBool, Trigger

class ColorPicker:
    def __init__(self, point, repeat):
        self.point = point
        self.count = 0
        self.color = []
        self.rgb = []
        self.repeat = repeat
    
    def set_point(self, point):
        self.point = point
    
    def reset(self):
        self.count = 0
        self.color = []
        self.rgb = []

    def __call__(self, image, result_image):
        h, w = image.shape[:2]
        x, y = min(int(self.point.x * w), w - 1), min(int(self.point.y * h), h - 1)
        if y == 0:
           y = 1
        if y == h:
            y = h - 1
        if x == 0:
            x = 1
        if x == w:
            x = w - 1
        image_lab = cv2.cvtColor(image[y - 1:y + 1, x - 1:x + 1], cv2.COLOR_RGB2LAB)
        self.color.extend(image_lab.tolist())
        self.rgb.extend(image[y - 1:y + 1, x - 1:x + 1].tolist())
        self.count += 1
        l, a, b = 0, 0, 0
        r, g, b_ = 0, 0, 0
        for c in self.color:
            l, a, b = l + c[0][0] + c[1][0], a + c[0][1] + c[1][1], b + c[0][2] + c[1][2]
        for c in self.rgb:
            r, g, b_ = r + c[0][0] + c[1][0], g + c[0][1] + c[1][1], b_ + c[0][2] + c[1][2]
        l, a, b = int(l / (2*len(self.color))), int(a / (2*len(self.color))), int(b / (2*len(self.color)))
        r, g, b_ = int(r / (2*len(self.rgb))), int(g / (2*len(self.rgb))), int(b_ / (2*len(self.rgb)))
        if 0 <= x < w and 0 <= y < h:
            result_image = cv2.circle(result_image, (x, y), self.count, (r, g, b_), 2 * self.count)
            result_image = cv2.circle(result_image, (x, y), self.count, (255, 255, 0), 5)
        if len(self.color)/2 > self.repeat:
            self.color.remove(self.color[0]) 
            self.color.remove(self.color[0]) 
        if len(self.rgb)/2 > self.repeat:
            self.rgb.remove(self.rgb[0])
            self.rgb.remove(self.rgb[0])
        if self.count > self.repeat:
            self.count = self.repeat
        if self.count >= self.repeat:
            return ((l, a, b), (r, g, b_)), result_image
        else:
            return None, result_image

class Heart:
    def __init__(self, node, srv_name, timeout, callback):
        self.heartbeat_stamp = 0
        self.callback = callback
        self.timeout = timeout
        self.node = node
        self.node.create_timer(1, self.heartbeat_timeout_check)
        self.node.create_service(SetBool, srv_name, self.heartbeat_srv_callback)

    def heartbeat_srv_callback(self, request, response):
        self.node.get_logger().info('\033[1;32m%s\033[0m' % "♥'")
        if request.data:
            self.heartbeat_stamp = time.time() + self.timeout
        else:
            self.heartbeat_stamp = 0
        response.success = True
        response.message = "start"
        return response

    def heartbeat_timeout_check(self):
        if self.heartbeat_stamp != 0 and self.heartbeat_stamp < time.time():
            self.node.get_logger().info('\033[1;32m%s\033[0m' % "heartbeat timeout")
            self.heartbeat_stamp = 0
            self.callback(self)
