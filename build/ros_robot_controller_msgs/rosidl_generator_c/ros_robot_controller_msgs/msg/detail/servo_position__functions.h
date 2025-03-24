// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_robot_controller_msgs:msg/ServoPosition.idl
// generated code does not contain a copyright notice

#ifndef ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__FUNCTIONS_H_
#define ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_robot_controller_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ros_robot_controller_msgs/msg/detail/servo_position__struct.h"

/// Initialize msg/ServoPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_robot_controller_msgs__msg__ServoPosition
 * )) before or use
 * ros_robot_controller_msgs__msg__ServoPosition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
bool
ros_robot_controller_msgs__msg__ServoPosition__init(ros_robot_controller_msgs__msg__ServoPosition * msg);

/// Finalize msg/ServoPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
void
ros_robot_controller_msgs__msg__ServoPosition__fini(ros_robot_controller_msgs__msg__ServoPosition * msg);

/// Create msg/ServoPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_robot_controller_msgs__msg__ServoPosition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
ros_robot_controller_msgs__msg__ServoPosition *
ros_robot_controller_msgs__msg__ServoPosition__create();

/// Destroy msg/ServoPosition message.
/**
 * It calls
 * ros_robot_controller_msgs__msg__ServoPosition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
void
ros_robot_controller_msgs__msg__ServoPosition__destroy(ros_robot_controller_msgs__msg__ServoPosition * msg);

/// Check for msg/ServoPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
bool
ros_robot_controller_msgs__msg__ServoPosition__are_equal(const ros_robot_controller_msgs__msg__ServoPosition * lhs, const ros_robot_controller_msgs__msg__ServoPosition * rhs);

/// Copy a msg/ServoPosition message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
bool
ros_robot_controller_msgs__msg__ServoPosition__copy(
  const ros_robot_controller_msgs__msg__ServoPosition * input,
  ros_robot_controller_msgs__msg__ServoPosition * output);

/// Initialize array of msg/ServoPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_robot_controller_msgs__msg__ServoPosition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
bool
ros_robot_controller_msgs__msg__ServoPosition__Sequence__init(ros_robot_controller_msgs__msg__ServoPosition__Sequence * array, size_t size);

/// Finalize array of msg/ServoPosition messages.
/**
 * It calls
 * ros_robot_controller_msgs__msg__ServoPosition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
void
ros_robot_controller_msgs__msg__ServoPosition__Sequence__fini(ros_robot_controller_msgs__msg__ServoPosition__Sequence * array);

/// Create array of msg/ServoPosition messages.
/**
 * It allocates the memory for the array and calls
 * ros_robot_controller_msgs__msg__ServoPosition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
ros_robot_controller_msgs__msg__ServoPosition__Sequence *
ros_robot_controller_msgs__msg__ServoPosition__Sequence__create(size_t size);

/// Destroy array of msg/ServoPosition messages.
/**
 * It calls
 * ros_robot_controller_msgs__msg__ServoPosition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
void
ros_robot_controller_msgs__msg__ServoPosition__Sequence__destroy(ros_robot_controller_msgs__msg__ServoPosition__Sequence * array);

/// Check for msg/ServoPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
bool
ros_robot_controller_msgs__msg__ServoPosition__Sequence__are_equal(const ros_robot_controller_msgs__msg__ServoPosition__Sequence * lhs, const ros_robot_controller_msgs__msg__ServoPosition__Sequence * rhs);

/// Copy an array of msg/ServoPosition messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_robot_controller_msgs
bool
ros_robot_controller_msgs__msg__ServoPosition__Sequence__copy(
  const ros_robot_controller_msgs__msg__ServoPosition__Sequence * input,
  ros_robot_controller_msgs__msg__ServoPosition__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__FUNCTIONS_H_
