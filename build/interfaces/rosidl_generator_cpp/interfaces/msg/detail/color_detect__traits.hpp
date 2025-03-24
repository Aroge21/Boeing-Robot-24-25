// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/ColorDetect.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__COLOR_DETECT__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__COLOR_DETECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/color_detect__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ColorDetect & msg,
  std::ostream & out)
{
  out << "{";
  // member: color_name
  {
    out << "color_name: ";
    rosidl_generator_traits::value_to_yaml(msg.color_name, out);
    out << ", ";
  }

  // member: detect_type
  {
    out << "detect_type: ";
    rosidl_generator_traits::value_to_yaml(msg.detect_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ColorDetect & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_name: ";
    rosidl_generator_traits::value_to_yaml(msg.color_name, out);
    out << "\n";
  }

  // member: detect_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detect_type: ";
    rosidl_generator_traits::value_to_yaml(msg.detect_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ColorDetect & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::ColorDetect & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::ColorDetect & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::ColorDetect>()
{
  return "interfaces::msg::ColorDetect";
}

template<>
inline const char * name<interfaces::msg::ColorDetect>()
{
  return "interfaces/msg/ColorDetect";
}

template<>
struct has_fixed_size<interfaces::msg::ColorDetect>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::ColorDetect>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::ColorDetect>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__COLOR_DETECT__TRAITS_HPP_
