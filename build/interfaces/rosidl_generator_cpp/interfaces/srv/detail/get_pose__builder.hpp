// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/GetPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GET_POSE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__GET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/get_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::GetPose_Request>()
{
  return ::interfaces::srv::GetPose_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPose_Response_orientation
{
public:
  explicit Init_GetPose_Response_orientation(::interfaces::srv::GetPose_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::GetPose_Response orientation(::interfaces::srv::GetPose_Response::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::GetPose_Response msg_;
};

class Init_GetPose_Response_position
{
public:
  explicit Init_GetPose_Response_position(::interfaces::srv::GetPose_Response & msg)
  : msg_(msg)
  {}
  Init_GetPose_Response_orientation position(::interfaces::srv::GetPose_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GetPose_Response_orientation(msg_);
  }

private:
  ::interfaces::srv::GetPose_Response msg_;
};

class Init_GetPose_Response_success
{
public:
  Init_GetPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPose_Response_position success(::interfaces::srv::GetPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetPose_Response_position(msg_);
  }

private:
  ::interfaces::srv::GetPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::GetPose_Response>()
{
  return interfaces::srv::builder::Init_GetPose_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__GET_POSE__BUILDER_HPP_
