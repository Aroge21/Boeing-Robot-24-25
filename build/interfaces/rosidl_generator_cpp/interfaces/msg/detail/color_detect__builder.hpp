// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ColorDetect.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__COLOR_DETECT__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__COLOR_DETECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/color_detect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ColorDetect_detect_type
{
public:
  explicit Init_ColorDetect_detect_type(::interfaces::msg::ColorDetect & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ColorDetect detect_type(::interfaces::msg::ColorDetect::_detect_type_type arg)
  {
    msg_.detect_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ColorDetect msg_;
};

class Init_ColorDetect_color_name
{
public:
  Init_ColorDetect_color_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorDetect_detect_type color_name(::interfaces::msg::ColorDetect::_color_name_type arg)
  {
    msg_.color_name = std::move(arg);
    return Init_ColorDetect_detect_type(msg_);
  }

private:
  ::interfaces::msg::ColorDetect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ColorDetect>()
{
  return interfaces::msg::builder::Init_ColorDetect_color_name();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__COLOR_DETECT__BUILDER_HPP_
