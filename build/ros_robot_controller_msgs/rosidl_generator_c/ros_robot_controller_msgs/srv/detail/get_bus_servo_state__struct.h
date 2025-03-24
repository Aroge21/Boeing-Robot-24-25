// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_robot_controller_msgs:srv/GetBusServoState.idl
// generated code does not contain a copyright notice

#ifndef ROS_ROBOT_CONTROLLER_MSGS__SRV__DETAIL__GET_BUS_SERVO_STATE__STRUCT_H_
#define ROS_ROBOT_CONTROLLER_MSGS__SRV__DETAIL__GET_BUS_SERVO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "ros_robot_controller_msgs/msg/detail/get_bus_servo_cmd__struct.h"

/// Struct defined in srv/GetBusServoState in the package ros_robot_controller_msgs.
typedef struct ros_robot_controller_msgs__srv__GetBusServoState_Request
{
  ros_robot_controller_msgs__msg__GetBusServoCmd__Sequence cmd;
} ros_robot_controller_msgs__srv__GetBusServoState_Request;

// Struct for a sequence of ros_robot_controller_msgs__srv__GetBusServoState_Request.
typedef struct ros_robot_controller_msgs__srv__GetBusServoState_Request__Sequence
{
  ros_robot_controller_msgs__srv__GetBusServoState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_robot_controller_msgs__srv__GetBusServoState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "ros_robot_controller_msgs/msg/detail/bus_servo_state__struct.h"

/// Struct defined in srv/GetBusServoState in the package ros_robot_controller_msgs.
typedef struct ros_robot_controller_msgs__srv__GetBusServoState_Response
{
  bool success;
  ros_robot_controller_msgs__msg__BusServoState__Sequence state;
} ros_robot_controller_msgs__srv__GetBusServoState_Response;

// Struct for a sequence of ros_robot_controller_msgs__srv__GetBusServoState_Response.
typedef struct ros_robot_controller_msgs__srv__GetBusServoState_Response__Sequence
{
  ros_robot_controller_msgs__srv__GetBusServoState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_robot_controller_msgs__srv__GetBusServoState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ROBOT_CONTROLLER_MSGS__SRV__DETAIL__GET_BUS_SERVO_STATE__STRUCT_H_
