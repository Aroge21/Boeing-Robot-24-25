// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/PixelPosition.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__PIXEL_POSITION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__PIXEL_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/pixel_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_PixelPosition_y
{
public:
  explicit Init_PixelPosition_y(::interfaces::msg::PixelPosition & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::PixelPosition y(::interfaces::msg::PixelPosition::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::PixelPosition msg_;
};

class Init_PixelPosition_x
{
public:
  Init_PixelPosition_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PixelPosition_y x(::interfaces::msg::PixelPosition::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PixelPosition_y(msg_);
  }

private:
  ::interfaces::msg::PixelPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::PixelPosition>()
{
  return interfaces::msg::builder::Init_PixelPosition_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__PIXEL_POSITION__BUILDER_HPP_
