// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_robot_controller_msgs:srv/GetBusServoState.idl
// generated code does not contain a copyright notice

#ifndef ROS_ROBOT_CONTROLLER_MSGS__SRV__DETAIL__GET_BUS_SERVO_STATE__BUILDER_HPP_
#define ROS_ROBOT_CONTROLLER_MSGS__SRV__DETAIL__GET_BUS_SERVO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_robot_controller_msgs/srv/detail/get_bus_servo_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_robot_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBusServoState_Request_cmd
{
public:
  Init_GetBusServoState_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_robot_controller_msgs::srv::GetBusServoState_Request cmd(::ros_robot_controller_msgs::srv::GetBusServoState_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_robot_controller_msgs::srv::GetBusServoState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_robot_controller_msgs::srv::GetBusServoState_Request>()
{
  return ros_robot_controller_msgs::srv::builder::Init_GetBusServoState_Request_cmd();
}

}  // namespace ros_robot_controller_msgs


namespace ros_robot_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBusServoState_Response_state
{
public:
  explicit Init_GetBusServoState_Response_state(::ros_robot_controller_msgs::srv::GetBusServoState_Response & msg)
  : msg_(msg)
  {}
  ::ros_robot_controller_msgs::srv::GetBusServoState_Response state(::ros_robot_controller_msgs::srv::GetBusServoState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_robot_controller_msgs::srv::GetBusServoState_Response msg_;
};

class Init_GetBusServoState_Response_success
{
public:
  Init_GetBusServoState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBusServoState_Response_state success(::ros_robot_controller_msgs::srv::GetBusServoState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetBusServoState_Response_state(msg_);
  }

private:
  ::ros_robot_controller_msgs::srv::GetBusServoState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_robot_controller_msgs::srv::GetBusServoState_Response>()
{
  return ros_robot_controller_msgs::srv::builder::Init_GetBusServoState_Response_success();
}

}  // namespace ros_robot_controller_msgs

#endif  // ROS_ROBOT_CONTROLLER_MSGS__SRV__DETAIL__GET_BUS_SERVO_STATE__BUILDER_HPP_
