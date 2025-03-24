// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_robot_controller_msgs:srv/GetPWMServoState.idl
// generated code does not contain a copyright notice

#ifndef ROS_ROBOT_CONTROLLER_MSGS__SRV__DETAIL__GET_PWM_SERVO_STATE__TRAITS_HPP_
#define ROS_ROBOT_CONTROLLER_MSGS__SRV__DETAIL__GET_PWM_SERVO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cmd'
#include "ros_robot_controller_msgs/msg/detail/get_pwm_servo_cmd__traits.hpp"

namespace ros_robot_controller_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPWMServoState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd
  {
    if (msg.cmd.size() == 0) {
      out << "cmd: []";
    } else {
      out << "cmd: [";
      size_t pending_items = msg.cmd.size();
      for (auto item : msg.cmd) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPWMServoState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cmd.size() == 0) {
      out << "cmd: []\n";
    } else {
      out << "cmd:\n";
      for (auto item : msg.cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPWMServoState_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_robot_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_robot_controller_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_robot_controller_msgs::srv::GetPWMServoState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_robot_controller_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_robot_controller_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_robot_controller_msgs::srv::GetPWMServoState_Request & msg)
{
  return ros_robot_controller_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_robot_controller_msgs::srv::GetPWMServoState_Request>()
{
  return "ros_robot_controller_msgs::srv::GetPWMServoState_Request";
}

template<>
inline const char * name<ros_robot_controller_msgs::srv::GetPWMServoState_Request>()
{
  return "ros_robot_controller_msgs/srv/GetPWMServoState_Request";
}

template<>
struct has_fixed_size<ros_robot_controller_msgs::srv::GetPWMServoState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_robot_controller_msgs::srv::GetPWMServoState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_robot_controller_msgs::srv::GetPWMServoState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "ros_robot_controller_msgs/msg/detail/pwm_servo_state__traits.hpp"

namespace ros_robot_controller_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPWMServoState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPWMServoState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPWMServoState_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_robot_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_robot_controller_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_robot_controller_msgs::srv::GetPWMServoState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_robot_controller_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_robot_controller_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_robot_controller_msgs::srv::GetPWMServoState_Response & msg)
{
  return ros_robot_controller_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_robot_controller_msgs::srv::GetPWMServoState_Response>()
{
  return "ros_robot_controller_msgs::srv::GetPWMServoState_Response";
}

template<>
inline const char * name<ros_robot_controller_msgs::srv::GetPWMServoState_Response>()
{
  return "ros_robot_controller_msgs/srv/GetPWMServoState_Response";
}

template<>
struct has_fixed_size<ros_robot_controller_msgs::srv::GetPWMServoState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_robot_controller_msgs::srv::GetPWMServoState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_robot_controller_msgs::srv::GetPWMServoState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_robot_controller_msgs::srv::GetPWMServoState>()
{
  return "ros_robot_controller_msgs::srv::GetPWMServoState";
}

template<>
inline const char * name<ros_robot_controller_msgs::srv::GetPWMServoState>()
{
  return "ros_robot_controller_msgs/srv/GetPWMServoState";
}

template<>
struct has_fixed_size<ros_robot_controller_msgs::srv::GetPWMServoState>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_robot_controller_msgs::srv::GetPWMServoState_Request>::value &&
    has_fixed_size<ros_robot_controller_msgs::srv::GetPWMServoState_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_robot_controller_msgs::srv::GetPWMServoState>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_robot_controller_msgs::srv::GetPWMServoState_Request>::value &&
    has_bounded_size<ros_robot_controller_msgs::srv::GetPWMServoState_Response>::value
  >
{
};

template<>
struct is_service<ros_robot_controller_msgs::srv::GetPWMServoState>
  : std::true_type
{
};

template<>
struct is_service_request<ros_robot_controller_msgs::srv::GetPWMServoState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_robot_controller_msgs::srv::GetPWMServoState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_ROBOT_CONTROLLER_MSGS__SRV__DETAIL__GET_PWM_SERVO_STATE__TRAITS_HPP_
