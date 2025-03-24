// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POSE2_D__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__POSE2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/pose2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Pose2D_yaw
{
public:
  explicit Init_Pose2D_yaw(::interfaces::msg::Pose2D & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Pose2D yaw(::interfaces::msg::Pose2D::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Pose2D msg_;
};

class Init_Pose2D_pitch
{
public:
  explicit Init_Pose2D_pitch(::interfaces::msg::Pose2D & msg)
  : msg_(msg)
  {}
  Init_Pose2D_yaw pitch(::interfaces::msg::Pose2D::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Pose2D_yaw(msg_);
  }

private:
  ::interfaces::msg::Pose2D msg_;
};

class Init_Pose2D_roll
{
public:
  explicit Init_Pose2D_roll(::interfaces::msg::Pose2D & msg)
  : msg_(msg)
  {}
  Init_Pose2D_pitch roll(::interfaces::msg::Pose2D::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Pose2D_pitch(msg_);
  }

private:
  ::interfaces::msg::Pose2D msg_;
};

class Init_Pose2D_y
{
public:
  explicit Init_Pose2D_y(::interfaces::msg::Pose2D & msg)
  : msg_(msg)
  {}
  Init_Pose2D_roll y(::interfaces::msg::Pose2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pose2D_roll(msg_);
  }

private:
  ::interfaces::msg::Pose2D msg_;
};

class Init_Pose2D_x
{
public:
  Init_Pose2D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose2D_y x(::interfaces::msg::Pose2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pose2D_y(msg_);
  }

private:
  ::interfaces::msg::Pose2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Pose2D>()
{
  return interfaces::msg::builder::Init_Pose2D_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__POSE2_D__BUILDER_HPP_
