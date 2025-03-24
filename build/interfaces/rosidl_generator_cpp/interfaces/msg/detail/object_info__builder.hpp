// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__OBJECT_INFO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__OBJECT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/object_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectInfo_height
{
public:
  explicit Init_ObjectInfo_height(::interfaces::msg::ObjectInfo & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ObjectInfo height(::interfaces::msg::ObjectInfo::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ObjectInfo msg_;
};

class Init_ObjectInfo_width
{
public:
  explicit Init_ObjectInfo_width(::interfaces::msg::ObjectInfo & msg)
  : msg_(msg)
  {}
  Init_ObjectInfo_height width(::interfaces::msg::ObjectInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ObjectInfo_height(msg_);
  }

private:
  ::interfaces::msg::ObjectInfo msg_;
};

class Init_ObjectInfo_score
{
public:
  explicit Init_ObjectInfo_score(::interfaces::msg::ObjectInfo & msg)
  : msg_(msg)
  {}
  Init_ObjectInfo_width score(::interfaces::msg::ObjectInfo::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_ObjectInfo_width(msg_);
  }

private:
  ::interfaces::msg::ObjectInfo msg_;
};

class Init_ObjectInfo_box
{
public:
  explicit Init_ObjectInfo_box(::interfaces::msg::ObjectInfo & msg)
  : msg_(msg)
  {}
  Init_ObjectInfo_score box(::interfaces::msg::ObjectInfo::_box_type arg)
  {
    msg_.box = std::move(arg);
    return Init_ObjectInfo_score(msg_);
  }

private:
  ::interfaces::msg::ObjectInfo msg_;
};

class Init_ObjectInfo_class_name
{
public:
  Init_ObjectInfo_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectInfo_box class_name(::interfaces::msg::ObjectInfo::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_ObjectInfo_box(msg_);
  }

private:
  ::interfaces::msg::ObjectInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ObjectInfo>()
{
  return interfaces::msg::builder::Init_ObjectInfo_class_name();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__OBJECT_INFO__BUILDER_HPP_
