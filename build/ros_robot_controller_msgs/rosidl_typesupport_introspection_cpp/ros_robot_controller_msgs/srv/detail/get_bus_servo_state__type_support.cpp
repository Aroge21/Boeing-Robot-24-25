// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_robot_controller_msgs:srv/GetBusServoState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_robot_controller_msgs/srv/detail/get_bus_servo_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_robot_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetBusServoState_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_robot_controller_msgs::srv::GetBusServoState_Request(_init);
}

void GetBusServoState_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_robot_controller_msgs::srv::GetBusServoState_Request *>(message_memory);
  typed_message->~GetBusServoState_Request();
}

size_t size_function__GetBusServoState_Request__cmd(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_robot_controller_msgs::msg::GetBusServoCmd> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetBusServoState_Request__cmd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_robot_controller_msgs::msg::GetBusServoCmd> *>(untyped_member);
  return &member[index];
}

void * get_function__GetBusServoState_Request__cmd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_robot_controller_msgs::msg::GetBusServoCmd> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetBusServoState_Request__cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_robot_controller_msgs::msg::GetBusServoCmd *>(
    get_const_function__GetBusServoState_Request__cmd(untyped_member, index));
  auto & value = *reinterpret_cast<ros_robot_controller_msgs::msg::GetBusServoCmd *>(untyped_value);
  value = item;
}

void assign_function__GetBusServoState_Request__cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_robot_controller_msgs::msg::GetBusServoCmd *>(
    get_function__GetBusServoState_Request__cmd(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_robot_controller_msgs::msg::GetBusServoCmd *>(untyped_value);
  item = value;
}

void resize_function__GetBusServoState_Request__cmd(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_robot_controller_msgs::msg::GetBusServoCmd> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetBusServoState_Request_message_member_array[1] = {
  {
    "cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_robot_controller_msgs::msg::GetBusServoCmd>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs::srv::GetBusServoState_Request, cmd),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetBusServoState_Request__cmd,  // size() function pointer
    get_const_function__GetBusServoState_Request__cmd,  // get_const(index) function pointer
    get_function__GetBusServoState_Request__cmd,  // get(index) function pointer
    fetch_function__GetBusServoState_Request__cmd,  // fetch(index, &value) function pointer
    assign_function__GetBusServoState_Request__cmd,  // assign(index, value) function pointer
    resize_function__GetBusServoState_Request__cmd  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetBusServoState_Request_message_members = {
  "ros_robot_controller_msgs::srv",  // message namespace
  "GetBusServoState_Request",  // message name
  1,  // number of fields
  sizeof(ros_robot_controller_msgs::srv::GetBusServoState_Request),
  GetBusServoState_Request_message_member_array,  // message members
  GetBusServoState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBusServoState_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetBusServoState_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetBusServoState_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ros_robot_controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_robot_controller_msgs::srv::GetBusServoState_Request>()
{
  return &::ros_robot_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetBusServoState_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_robot_controller_msgs, srv, GetBusServoState_Request)() {
  return &::ros_robot_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetBusServoState_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ros_robot_controller_msgs/srv/detail/get_bus_servo_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_robot_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetBusServoState_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_robot_controller_msgs::srv::GetBusServoState_Response(_init);
}

void GetBusServoState_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_robot_controller_msgs::srv::GetBusServoState_Response *>(message_memory);
  typed_message->~GetBusServoState_Response();
}

size_t size_function__GetBusServoState_Response__state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_robot_controller_msgs::msg::BusServoState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetBusServoState_Response__state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_robot_controller_msgs::msg::BusServoState> *>(untyped_member);
  return &member[index];
}

void * get_function__GetBusServoState_Response__state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_robot_controller_msgs::msg::BusServoState> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetBusServoState_Response__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_robot_controller_msgs::msg::BusServoState *>(
    get_const_function__GetBusServoState_Response__state(untyped_member, index));
  auto & value = *reinterpret_cast<ros_robot_controller_msgs::msg::BusServoState *>(untyped_value);
  value = item;
}

void assign_function__GetBusServoState_Response__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_robot_controller_msgs::msg::BusServoState *>(
    get_function__GetBusServoState_Response__state(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_robot_controller_msgs::msg::BusServoState *>(untyped_value);
  item = value;
}

void resize_function__GetBusServoState_Response__state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_robot_controller_msgs::msg::BusServoState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetBusServoState_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs::srv::GetBusServoState_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_robot_controller_msgs::msg::BusServoState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs::srv::GetBusServoState_Response, state),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetBusServoState_Response__state,  // size() function pointer
    get_const_function__GetBusServoState_Response__state,  // get_const(index) function pointer
    get_function__GetBusServoState_Response__state,  // get(index) function pointer
    fetch_function__GetBusServoState_Response__state,  // fetch(index, &value) function pointer
    assign_function__GetBusServoState_Response__state,  // assign(index, value) function pointer
    resize_function__GetBusServoState_Response__state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetBusServoState_Response_message_members = {
  "ros_robot_controller_msgs::srv",  // message namespace
  "GetBusServoState_Response",  // message name
  2,  // number of fields
  sizeof(ros_robot_controller_msgs::srv::GetBusServoState_Response),
  GetBusServoState_Response_message_member_array,  // message members
  GetBusServoState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBusServoState_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetBusServoState_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetBusServoState_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ros_robot_controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_robot_controller_msgs::srv::GetBusServoState_Response>()
{
  return &::ros_robot_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetBusServoState_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_robot_controller_msgs, srv, GetBusServoState_Response)() {
  return &::ros_robot_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetBusServoState_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ros_robot_controller_msgs/srv/detail/get_bus_servo_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ros_robot_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetBusServoState_service_members = {
  "ros_robot_controller_msgs::srv",  // service namespace
  "GetBusServoState",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ros_robot_controller_msgs::srv::GetBusServoState>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetBusServoState_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetBusServoState_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ros_robot_controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros_robot_controller_msgs::srv::GetBusServoState>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ros_robot_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetBusServoState_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ros_robot_controller_msgs::srv::GetBusServoState_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ros_robot_controller_msgs::srv::GetBusServoState_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_robot_controller_msgs, srv, GetBusServoState)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ros_robot_controller_msgs::srv::GetBusServoState>();
}

#ifdef __cplusplus
}
#endif
