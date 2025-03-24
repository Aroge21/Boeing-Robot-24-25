// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_robot_controller_msgs:msg/SetPWMServoState.idl
// generated code does not contain a copyright notice

#ifndef ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SET_PWM_SERVO_STATE__TRAITS_HPP_
#define ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SET_PWM_SERVO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_robot_controller_msgs/msg/detail/set_pwm_servo_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state'
#include "ros_robot_controller_msgs/msg/detail/pwm_servo_state__traits.hpp"

namespace ros_robot_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetPWMServoState & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    if (msg.state.size() == 0) {
      out << "state: []";
    } else {
      out << "state: [";
      size_t pending_items = msg.state.size();
      for (auto item : msg.state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPWMServoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPWMServoState & msg, bool use_flow_style = false)
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
  const ros_robot_controller_msgs::msg::SetPWMServoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_robot_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_robot_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_robot_controller_msgs::msg::SetPWMServoState & msg)
{
  return ros_robot_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_robot_controller_msgs::msg::SetPWMServoState>()
{
  return "ros_robot_controller_msgs::msg::SetPWMServoState";
}

template<>
inline const char * name<ros_robot_controller_msgs::msg::SetPWMServoState>()
{
  return "ros_robot_controller_msgs/msg/SetPWMServoState";
}

template<>
struct has_fixed_size<ros_robot_controller_msgs::msg::SetPWMServoState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_robot_controller_msgs::msg::SetPWMServoState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_robot_controller_msgs::msg::SetPWMServoState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__SET_PWM_SERVO_STATE__TRAITS_HPP_
