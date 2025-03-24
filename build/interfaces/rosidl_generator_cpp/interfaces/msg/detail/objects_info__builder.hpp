// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ObjectsInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__OBJECTS_INFO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__OBJECTS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/objects_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectsInfo_objects
{
public:
  Init_ObjectsInfo_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::ObjectsInfo objects(::interfaces::msg::ObjectsInfo::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ObjectsInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ObjectsInfo>()
{
  return interfaces::msg::builder::Init_ObjectsInfo_objects();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__OBJECTS_INFO__BUILDER_HPP_
