// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/SetColorDetectParam.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/set_color_detect_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "interfaces/msg/detail/color_detect__traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColorDetectParam_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const SetColorDetectParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetColorDetectParam_Request & msg, bool use_flow_style = false)
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
  const interfaces::srv::SetColorDetectParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::SetColorDetectParam_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::SetColorDetectParam_Request>()
{
  return "interfaces::srv::SetColorDetectParam_Request";
}

template<>
inline const char * name<interfaces::srv::SetColorDetectParam_Request>()
{
  return "interfaces/srv/SetColorDetectParam_Request";
}

template<>
struct has_fixed_size<interfaces::srv::SetColorDetectParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::SetColorDetectParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::SetColorDetectParam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColorDetectParam_Response & msg,
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
  const SetColorDetectParam_Response & msg,
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

inline std::string to_yaml(const SetColorDetectParam_Response & msg, bool use_flow_style = false)
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
  const interfaces::srv::SetColorDetectParam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::SetColorDetectParam_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::SetColorDetectParam_Response>()
{
  return "interfaces::srv::SetColorDetectParam_Response";
}

template<>
inline const char * name<interfaces::srv::SetColorDetectParam_Response>()
{
  return "interfaces/srv/SetColorDetectParam_Response";
}

template<>
struct has_fixed_size<interfaces::srv::SetColorDetectParam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::SetColorDetectParam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::SetColorDetectParam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::SetColorDetectParam>()
{
  return "interfaces::srv::SetColorDetectParam";
}

template<>
inline const char * name<interfaces::srv::SetColorDetectParam>()
{
  return "interfaces/srv/SetColorDetectParam";
}

template<>
struct has_fixed_size<interfaces::srv::SetColorDetectParam>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::SetColorDetectParam_Request>::value &&
    has_fixed_size<interfaces::srv::SetColorDetectParam_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::SetColorDetectParam>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::SetColorDetectParam_Request>::value &&
    has_bounded_size<interfaces::srv::SetColorDetectParam_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::SetColorDetectParam>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::SetColorDetectParam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::SetColorDetectParam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__TRAITS_HPP_
