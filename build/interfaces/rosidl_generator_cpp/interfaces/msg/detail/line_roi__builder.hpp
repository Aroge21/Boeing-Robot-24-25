// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/LineROI.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LINE_ROI__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__LINE_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/line_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_LineROI_roi_down
{
public:
  explicit Init_LineROI_roi_down(::interfaces::msg::LineROI & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::LineROI roi_down(::interfaces::msg::LineROI::_roi_down_type arg)
  {
    msg_.roi_down = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::LineROI msg_;
};

class Init_LineROI_roi_center
{
public:
  explicit Init_LineROI_roi_center(::interfaces::msg::LineROI & msg)
  : msg_(msg)
  {}
  Init_LineROI_roi_down roi_center(::interfaces::msg::LineROI::_roi_center_type arg)
  {
    msg_.roi_center = std::move(arg);
    return Init_LineROI_roi_down(msg_);
  }

private:
  ::interfaces::msg::LineROI msg_;
};

class Init_LineROI_roi_up
{
public:
  Init_LineROI_roi_up()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineROI_roi_center roi_up(::interfaces::msg::LineROI::_roi_up_type arg)
  {
    msg_.roi_up = std::move(arg);
    return Init_LineROI_roi_center(msg_);
  }

private:
  ::interfaces::msg::LineROI msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::LineROI>()
{
  return interfaces::msg::builder::Init_LineROI_roi_up();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LINE_ROI__BUILDER_HPP_
