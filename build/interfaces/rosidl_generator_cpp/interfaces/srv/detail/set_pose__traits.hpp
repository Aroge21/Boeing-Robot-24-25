// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_POSE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__SET_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/set_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation
  {
    if (msg.orientation.size() == 0) {
      out << "orientation: []";
    } else {
      out << "orientation: [";
      size_t pending_items = msg.orientation.size();
      for (auto item : msg.orientation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tolerance
  {
    if (msg.tolerance.size() == 0) {
      out << "tolerance: []";
    } else {
      out << "tolerance: [";
      size_t pending_items = msg.tolerance.size();
      for (auto item : msg.tolerance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orientation.size() == 0) {
      out << "orientation: []\n";
    } else {
      out << "orientation:\n";
      for (auto item : msg.orientation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tolerance.size() == 0) {
      out << "tolerance: []\n";
    } else {
      out << "tolerance:\n";
      for (auto item : msg.tolerance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPose_Request & msg, bool use_flow_style = false)
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
  const interfaces::srv::SetPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::SetPose_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::SetPose_Request>()
{
  return "interfaces::srv::SetPose_Request";
}

template<>
inline const char * name<interfaces::srv::SetPose_Request>()
{
  return "interfaces/srv/SetPose_Request";
}

template<>
struct has_fixed_size<interfaces::srv::SetPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::SetPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::SetPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: pulse
  {
    if (msg.pulse.size() == 0) {
      out << "pulse: []";
    } else {
      out << "pulse: [";
      size_t pending_items = msg.pulse.size();
      for (auto item : msg.pulse) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: min_variation
  {
    out << "min_variation: ";
    rosidl_generator_traits::value_to_yaml(msg.min_variation, out);
    out << ", ";
  }

  // member: current_pulse
  {
    if (msg.current_pulse.size() == 0) {
      out << "current_pulse: []";
    } else {
      out << "current_pulse: [";
      size_t pending_items = msg.current_pulse.size();
      for (auto item : msg.current_pulse) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SetPose_Response & msg,
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

  // member: pulse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pulse.size() == 0) {
      out << "pulse: []\n";
    } else {
      out << "pulse:\n";
      for (auto item : msg.pulse) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: min_variation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_variation: ";
    rosidl_generator_traits::value_to_yaml(msg.min_variation, out);
    out << "\n";
  }

  // member: current_pulse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_pulse.size() == 0) {
      out << "current_pulse: []\n";
    } else {
      out << "current_pulse:\n";
      for (auto item : msg.current_pulse) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPose_Response & msg, bool use_flow_style = false)
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
  const interfaces::srv::SetPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::SetPose_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::SetPose_Response>()
{
  return "interfaces::srv::SetPose_Response";
}

template<>
inline const char * name<interfaces::srv::SetPose_Response>()
{
  return "interfaces/srv/SetPose_Response";
}

template<>
struct has_fixed_size<interfaces::srv::SetPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::SetPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::SetPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::SetPose>()
{
  return "interfaces::srv::SetPose";
}

template<>
inline const char * name<interfaces::srv::SetPose>()
{
  return "interfaces/srv/SetPose";
}

template<>
struct has_fixed_size<interfaces::srv::SetPose>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::SetPose_Request>::value &&
    has_fixed_size<interfaces::srv::SetPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::SetPose>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::SetPose_Request>::value &&
    has_bounded_size<interfaces::srv::SetPose_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::SetPose>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::SetPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::SetPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__SET_POSE__TRAITS_HPP_
