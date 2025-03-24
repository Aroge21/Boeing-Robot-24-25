// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_robot_controller_msgs:msg/ServoPosition.idl
// generated code does not contain a copyright notice

#ifndef ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__TRAITS_HPP_
#define ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_robot_controller_msgs/msg/detail/servo_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_robot_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoPosition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros_robot_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_robot_controller_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_robot_controller_msgs::msg::ServoPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_robot_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_robot_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_robot_controller_msgs::msg::ServoPosition & msg)
{
  return ros_robot_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_robot_controller_msgs::msg::ServoPosition>()
{
  return "ros_robot_controller_msgs::msg::ServoPosition";
}

template<>
inline const char * name<ros_robot_controller_msgs::msg::ServoPosition>()
{
  return "ros_robot_controller_msgs/msg/ServoPosition";
}

template<>
struct has_fixed_size<ros_robot_controller_msgs::msg::ServoPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_robot_controller_msgs::msg::ServoPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_robot_controller_msgs::msg::ServoPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__TRAITS_HPP_
