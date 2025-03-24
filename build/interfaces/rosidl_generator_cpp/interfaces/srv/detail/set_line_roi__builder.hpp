// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/SetLineROI.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_LINE_ROI__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SET_LINE_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/set_line_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLineROI_Request_data
{
public:
  Init_SetLineROI_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::SetLineROI_Request data(::interfaces::srv::SetLineROI_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetLineROI_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetLineROI_Request>()
{
  return interfaces::srv::builder::Init_SetLineROI_Request_data();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLineROI_Response_message
{
public:
  explicit Init_SetLineROI_Response_message(::interfaces::srv::SetLineROI_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetLineROI_Response message(::interfaces::srv::SetLineROI_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetLineROI_Response msg_;
};

class Init_SetLineROI_Response_success
{
public:
  Init_SetLineROI_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLineROI_Response_message success(::interfaces::srv::SetLineROI_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetLineROI_Response_message(msg_);
  }

private:
  ::interfaces::srv::SetLineROI_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetLineROI_Response>()
{
  return interfaces::srv::builder::Init_SetLineROI_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_LINE_ROI__BUILDER_HPP_
