// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POINT2_D__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__POINT2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/point2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Point2D_y
{
public:
  explicit Init_Point2D_y(::interfaces::msg::Point2D & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Point2D y(::interfaces::msg::Point2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Point2D msg_;
};

class Init_Point2D_x
{
public:
  explicit Init_Point2D_x(::interfaces::msg::Point2D & msg)
  : msg_(msg)
  {}
  Init_Point2D_y x(::interfaces::msg::Point2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point2D_y(msg_);
  }

private:
  ::interfaces::msg::Point2D msg_;
};

class Init_Point2D_height
{
public:
  explicit Init_Point2D_height(::interfaces::msg::Point2D & msg)
  : msg_(msg)
  {}
  Init_Point2D_x height(::interfaces::msg::Point2D::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Point2D_x(msg_);
  }

private:
  ::interfaces::msg::Point2D msg_;
};

class Init_Point2D_width
{
public:
  Init_Point2D_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point2D_height width(::interfaces::msg::Point2D::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Point2D_height(msg_);
  }

private:
  ::interfaces::msg::Point2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Point2D>()
{
  return interfaces::msg::builder::Init_Point2D_width();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__POINT2_D__BUILDER_HPP_
