// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ColorInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__COLOR_INFO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__COLOR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/color_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ColorInfo_angle
{
public:
  explicit Init_ColorInfo_angle(::interfaces::msg::ColorInfo & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ColorInfo angle(::interfaces::msg::ColorInfo::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ColorInfo msg_;
};

class Init_ColorInfo_radius
{
public:
  explicit Init_ColorInfo_radius(::interfaces::msg::ColorInfo & msg)
  : msg_(msg)
  {}
  Init_ColorInfo_angle radius(::interfaces::msg::ColorInfo::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_ColorInfo_angle(msg_);
  }

private:
  ::interfaces::msg::ColorInfo msg_;
};

class Init_ColorInfo_y
{
public:
  explicit Init_ColorInfo_y(::interfaces::msg::ColorInfo & msg)
  : msg_(msg)
  {}
  Init_ColorInfo_radius y(::interfaces::msg::ColorInfo::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ColorInfo_radius(msg_);
  }

private:
  ::interfaces::msg::ColorInfo msg_;
};

class Init_ColorInfo_x
{
public:
  explicit Init_ColorInfo_x(::interfaces::msg::ColorInfo & msg)
  : msg_(msg)
  {}
  Init_ColorInfo_y x(::interfaces::msg::ColorInfo::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ColorInfo_y(msg_);
  }

private:
  ::interfaces::msg::ColorInfo msg_;
};

class Init_ColorInfo_height
{
public:
  explicit Init_ColorInfo_height(::interfaces::msg::ColorInfo & msg)
  : msg_(msg)
  {}
  Init_ColorInfo_x height(::interfaces::msg::ColorInfo::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_ColorInfo_x(msg_);
  }

private:
  ::interfaces::msg::ColorInfo msg_;
};

class Init_ColorInfo_width
{
public:
  explicit Init_ColorInfo_width(::interfaces::msg::ColorInfo & msg)
  : msg_(msg)
  {}
  Init_ColorInfo_height width(::interfaces::msg::ColorInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ColorInfo_height(msg_);
  }

private:
  ::interfaces::msg::ColorInfo msg_;
};

class Init_ColorInfo_color
{
public:
  Init_ColorInfo_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorInfo_width color(::interfaces::msg::ColorInfo::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_ColorInfo_width(msg_);
  }

private:
  ::interfaces::msg::ColorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ColorInfo>()
{
  return interfaces::msg::builder::Init_ColorInfo_color();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__COLOR_INFO__BUILDER_HPP_
