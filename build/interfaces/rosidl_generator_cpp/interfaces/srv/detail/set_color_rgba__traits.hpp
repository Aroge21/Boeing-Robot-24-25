// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/SetColorRGBA.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_COLOR_RGBA__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__SET_COLOR_RGBA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/set_color_rgba__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColorRGBA_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetColorRGBA_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetColorRGBA_Request & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::SetColorRGBA_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::SetColorRGBA_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::SetColorRGBA_Request>()
{
  return "interfaces::srv::SetColorRGBA_Request";
}

template<>
inline const char * name<interfaces::srv::SetColorRGBA_Request>()
{
  return "interfaces/srv/SetColorRGBA_Request";
}

template<>
struct has_fixed_size<interfaces::srv::SetColorRGBA_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct has_bounded_size<interfaces::srv::SetColorRGBA_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct is_message<interfaces::srv::SetColorRGBA_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColorRGBA_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetColorRGBA_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetColorRGBA_Response & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::SetColorRGBA_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::SetColorRGBA_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::SetColorRGBA_Response>()
{
  return "interfaces::srv::SetColorRGBA_Response";
}

template<>
inline const char * name<interfaces::srv::SetColorRGBA_Response>()
{
  return "interfaces/srv/SetColorRGBA_Response";
}

template<>
struct has_fixed_size<interfaces::srv::SetColorRGBA_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::SetColorRGBA_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::SetColorRGBA_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::SetColorRGBA>()
{
  return "interfaces::srv::SetColorRGBA";
}

template<>
inline const char * name<interfaces::srv::SetColorRGBA>()
{
  return "interfaces/srv/SetColorRGBA";
}

template<>
struct has_fixed_size<interfaces::srv::SetColorRGBA>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::SetColorRGBA_Request>::value &&
    has_fixed_size<interfaces::srv::SetColorRGBA_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::SetColorRGBA>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::SetColorRGBA_Request>::value &&
    has_bounded_size<interfaces::srv::SetColorRGBA_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::SetColorRGBA>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::SetColorRGBA_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::SetColorRGBA_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__SET_COLOR_RGBA__TRAITS_HPP_
