// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/LineROI.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LINE_ROI__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__LINE_ROI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/line_roi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'roi_up'
// Member 'roi_center'
// Member 'roi_down'
#include "interfaces/msg/detail/roi__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LineROI & msg,
  std::ostream & out)
{
  out << "{";
  // member: roi_up
  {
    out << "roi_up: ";
    to_flow_style_yaml(msg.roi_up, out);
    out << ", ";
  }

  // member: roi_center
  {
    out << "roi_center: ";
    to_flow_style_yaml(msg.roi_center, out);
    out << ", ";
  }

  // member: roi_down
  {
    out << "roi_down: ";
    to_flow_style_yaml(msg.roi_down, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LineROI & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roi_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi_up:\n";
    to_block_style_yaml(msg.roi_up, out, indentation + 2);
  }

  // member: roi_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi_center:\n";
    to_block_style_yaml(msg.roi_center, out, indentation + 2);
  }

  // member: roi_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi_down:\n";
    to_block_style_yaml(msg.roi_down, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LineROI & msg, bool use_flow_style = false)
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
  const interfaces::msg::LineROI & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::LineROI & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::LineROI>()
{
  return "interfaces::msg::LineROI";
}

template<>
inline const char * name<interfaces::msg::LineROI>()
{
  return "interfaces/msg/LineROI";
}

template<>
struct has_fixed_size<interfaces::msg::LineROI>
  : std::integral_constant<bool, has_fixed_size<interfaces::msg::ROI>::value> {};

template<>
struct has_bounded_size<interfaces::msg::LineROI>
  : std::integral_constant<bool, has_bounded_size<interfaces::msg::ROI>::value> {};

template<>
struct is_message<interfaces::msg::LineROI>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__LINE_ROI__TRAITS_HPP_
