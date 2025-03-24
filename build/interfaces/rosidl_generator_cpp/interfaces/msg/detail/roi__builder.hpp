// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ROI.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ROI__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ROI_scale
{
public:
  explicit Init_ROI_scale(::interfaces::msg::ROI & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ROI scale(::interfaces::msg::ROI::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ROI msg_;
};

class Init_ROI_x_max
{
public:
  explicit Init_ROI_x_max(::interfaces::msg::ROI & msg)
  : msg_(msg)
  {}
  Init_ROI_scale x_max(::interfaces::msg::ROI::_x_max_type arg)
  {
    msg_.x_max = std::move(arg);
    return Init_ROI_scale(msg_);
  }

private:
  ::interfaces::msg::ROI msg_;
};

class Init_ROI_x_min
{
public:
  explicit Init_ROI_x_min(::interfaces::msg::ROI & msg)
  : msg_(msg)
  {}
  Init_ROI_x_max x_min(::interfaces::msg::ROI::_x_min_type arg)
  {
    msg_.x_min = std::move(arg);
    return Init_ROI_x_max(msg_);
  }

private:
  ::interfaces::msg::ROI msg_;
};

class Init_ROI_y_max
{
public:
  explicit Init_ROI_y_max(::interfaces::msg::ROI & msg)
  : msg_(msg)
  {}
  Init_ROI_x_min y_max(::interfaces::msg::ROI::_y_max_type arg)
  {
    msg_.y_max = std::move(arg);
    return Init_ROI_x_min(msg_);
  }

private:
  ::interfaces::msg::ROI msg_;
};

class Init_ROI_y_min
{
public:
  Init_ROI_y_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ROI_y_max y_min(::interfaces::msg::ROI::_y_min_type arg)
  {
    msg_.y_min = std::move(arg);
    return Init_ROI_y_max(msg_);
  }

private:
  ::interfaces::msg::ROI msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ROI>()
{
  return interfaces::msg::builder::Init_ROI_y_min();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ROI__BUILDER_HPP_
