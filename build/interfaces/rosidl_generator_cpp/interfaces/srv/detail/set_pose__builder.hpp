// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_POSE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/set_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPose_Request_resolution
{
public:
  explicit Init_SetPose_Request_resolution(::interfaces::srv::SetPose_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetPose_Request resolution(::interfaces::srv::SetPose_Request::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetPose_Request msg_;
};

class Init_SetPose_Request_tolerance
{
public:
  explicit Init_SetPose_Request_tolerance(::interfaces::srv::SetPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetPose_Request_resolution tolerance(::interfaces::srv::SetPose_Request::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return Init_SetPose_Request_resolution(msg_);
  }

private:
  ::interfaces::srv::SetPose_Request msg_;
};

class Init_SetPose_Request_orientation
{
public:
  explicit Init_SetPose_Request_orientation(::interfaces::srv::SetPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetPose_Request_tolerance orientation(::interfaces::srv::SetPose_Request::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_SetPose_Request_tolerance(msg_);
  }

private:
  ::interfaces::srv::SetPose_Request msg_;
};

class Init_SetPose_Request_position
{
public:
  Init_SetPose_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPose_Request_orientation position(::interfaces::srv::SetPose_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SetPose_Request_orientation(msg_);
  }

private:
  ::interfaces::srv::SetPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetPose_Request>()
{
  return interfaces::srv::builder::Init_SetPose_Request_position();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPose_Response_current_pulse
{
public:
  explicit Init_SetPose_Response_current_pulse(::interfaces::srv::SetPose_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetPose_Response current_pulse(::interfaces::srv::SetPose_Response::_current_pulse_type arg)
  {
    msg_.current_pulse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetPose_Response msg_;
};

class Init_SetPose_Response_min_variation
{
public:
  explicit Init_SetPose_Response_min_variation(::interfaces::srv::SetPose_Response & msg)
  : msg_(msg)
  {}
  Init_SetPose_Response_current_pulse min_variation(::interfaces::srv::SetPose_Response::_min_variation_type arg)
  {
    msg_.min_variation = std::move(arg);
    return Init_SetPose_Response_current_pulse(msg_);
  }

private:
  ::interfaces::srv::SetPose_Response msg_;
};

class Init_SetPose_Response_pulse
{
public:
  explicit Init_SetPose_Response_pulse(::interfaces::srv::SetPose_Response & msg)
  : msg_(msg)
  {}
  Init_SetPose_Response_min_variation pulse(::interfaces::srv::SetPose_Response::_pulse_type arg)
  {
    msg_.pulse = std::move(arg);
    return Init_SetPose_Response_min_variation(msg_);
  }

private:
  ::interfaces::srv::SetPose_Response msg_;
};

class Init_SetPose_Response_success
{
public:
  Init_SetPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPose_Response_pulse success(::interfaces::srv::SetPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetPose_Response_pulse(msg_);
  }

private:
  ::interfaces::srv::SetPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetPose_Response>()
{
  return interfaces::srv::builder::Init_SetPose_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_POSE__BUILDER_HPP_
