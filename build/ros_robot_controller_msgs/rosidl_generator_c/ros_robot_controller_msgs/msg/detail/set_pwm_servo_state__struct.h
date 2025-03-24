// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_robot_controller_msgs:msg/SetPWMServoState.idl
// generated code does not contain a copyright notice

#ifndef ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SET_PWM_SERVO_STATE__STRUCT_H_
#define ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SET_PWM_SERVO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "ros_robot_controller_msgs/msg/detail/pwm_servo_state__struct.h"

/// Struct defined in msg/SetPWMServoState in the package ros_robot_controller_msgs.
typedef struct ros_robot_controller_msgs__msg__SetPWMServoState
{
  ros_robot_controller_msgs__msg__PWMServoState__Sequence state;
  double duration;
} ros_robot_controller_msgs__msg__SetPWMServoState;

// Struct for a sequence of ros_robot_controller_msgs__msg__SetPWMServoState.
typedef struct ros_robot_controller_msgs__msg__SetPWMServoState__Sequence
{
  ros_robot_controller_msgs__msg__SetPWMServoState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_robot_controller_msgs__msg__SetPWMServoState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SET_PWM_SERVO_STATE__STRUCT_H_
