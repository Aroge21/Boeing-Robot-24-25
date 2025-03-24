// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_robot_controller_msgs:srv/GetPWMServoState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__rosidl_typesupport_introspection_c.h"
#include "ros_robot_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__functions.h"
#include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__struct.h"


// Include directives for member types
// Member `cmd`
#include "ros_robot_controller_msgs/msg/get_pwm_servo_cmd.h"
// Member `cmd`
#include "ros_robot_controller_msgs/msg/detail/get_pwm_servo_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_robot_controller_msgs__srv__GetPWMServoState_Request__init(message_memory);
}

void ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_fini_function(void * message_memory)
{
  ros_robot_controller_msgs__srv__GetPWMServoState_Request__fini(message_memory);
}

size_t ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__size_function__GetPWMServoState_Request__cmd(
  const void * untyped_member)
{
  const ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence * member =
    (const ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__get_const_function__GetPWMServoState_Request__cmd(
  const void * untyped_member, size_t index)
{
  const ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence * member =
    (const ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__get_function__GetPWMServoState_Request__cmd(
  void * untyped_member, size_t index)
{
  ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence * member =
    (ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__fetch_function__GetPWMServoState_Request__cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_robot_controller_msgs__msg__GetPWMServoCmd * item =
    ((const ros_robot_controller_msgs__msg__GetPWMServoCmd *)
    ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__get_const_function__GetPWMServoState_Request__cmd(untyped_member, index));
  ros_robot_controller_msgs__msg__GetPWMServoCmd * value =
    (ros_robot_controller_msgs__msg__GetPWMServoCmd *)(untyped_value);
  *value = *item;
}

void ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__assign_function__GetPWMServoState_Request__cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_robot_controller_msgs__msg__GetPWMServoCmd * item =
    ((ros_robot_controller_msgs__msg__GetPWMServoCmd *)
    ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__get_function__GetPWMServoState_Request__cmd(untyped_member, index));
  const ros_robot_controller_msgs__msg__GetPWMServoCmd * value =
    (const ros_robot_controller_msgs__msg__GetPWMServoCmd *)(untyped_value);
  *item = *value;
}

bool ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__resize_function__GetPWMServoState_Request__cmd(
  void * untyped_member, size_t size)
{
  ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence * member =
    (ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence *)(untyped_member);
  ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence__fini(member);
  return ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_member_array[1] = {
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs__srv__GetPWMServoState_Request, cmd),  // bytes offset in struct
    NULL,  // default value
    ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__size_function__GetPWMServoState_Request__cmd,  // size() function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__get_const_function__GetPWMServoState_Request__cmd,  // get_const(index) function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__get_function__GetPWMServoState_Request__cmd,  // get(index) function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__fetch_function__GetPWMServoState_Request__cmd,  // fetch(index, &value) function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__assign_function__GetPWMServoState_Request__cmd,  // assign(index, value) function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__resize_function__GetPWMServoState_Request__cmd  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_members = {
  "ros_robot_controller_msgs__srv",  // message namespace
  "GetPWMServoState_Request",  // message name
  1,  // number of fields
  sizeof(ros_robot_controller_msgs__srv__GetPWMServoState_Request),
  ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_member_array,  // message members
  ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_type_support_handle = {
  0,
  &ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_robot_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, srv, GetPWMServoState_Request)() {
  ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, msg, GetPWMServoCmd)();
  if (!ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_type_support_handle.typesupport_identifier) {
    ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_robot_controller_msgs__srv__GetPWMServoState_Request__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_robot_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__functions.h"
// already included above
// #include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__struct.h"


// Include directives for member types
// Member `state`
#include "ros_robot_controller_msgs/msg/pwm_servo_state.h"
// Member `state`
#include "ros_robot_controller_msgs/msg/detail/pwm_servo_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_robot_controller_msgs__srv__GetPWMServoState_Response__init(message_memory);
}

void ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_fini_function(void * message_memory)
{
  ros_robot_controller_msgs__srv__GetPWMServoState_Response__fini(message_memory);
}

size_t ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__size_function__GetPWMServoState_Response__state(
  const void * untyped_member)
{
  const ros_robot_controller_msgs__msg__PWMServoState__Sequence * member =
    (const ros_robot_controller_msgs__msg__PWMServoState__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__get_const_function__GetPWMServoState_Response__state(
  const void * untyped_member, size_t index)
{
  const ros_robot_controller_msgs__msg__PWMServoState__Sequence * member =
    (const ros_robot_controller_msgs__msg__PWMServoState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__get_function__GetPWMServoState_Response__state(
  void * untyped_member, size_t index)
{
  ros_robot_controller_msgs__msg__PWMServoState__Sequence * member =
    (ros_robot_controller_msgs__msg__PWMServoState__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__fetch_function__GetPWMServoState_Response__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_robot_controller_msgs__msg__PWMServoState * item =
    ((const ros_robot_controller_msgs__msg__PWMServoState *)
    ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__get_const_function__GetPWMServoState_Response__state(untyped_member, index));
  ros_robot_controller_msgs__msg__PWMServoState * value =
    (ros_robot_controller_msgs__msg__PWMServoState *)(untyped_value);
  *value = *item;
}

void ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__assign_function__GetPWMServoState_Response__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_robot_controller_msgs__msg__PWMServoState * item =
    ((ros_robot_controller_msgs__msg__PWMServoState *)
    ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__get_function__GetPWMServoState_Response__state(untyped_member, index));
  const ros_robot_controller_msgs__msg__PWMServoState * value =
    (const ros_robot_controller_msgs__msg__PWMServoState *)(untyped_value);
  *item = *value;
}

bool ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__resize_function__GetPWMServoState_Response__state(
  void * untyped_member, size_t size)
{
  ros_robot_controller_msgs__msg__PWMServoState__Sequence * member =
    (ros_robot_controller_msgs__msg__PWMServoState__Sequence *)(untyped_member);
  ros_robot_controller_msgs__msg__PWMServoState__Sequence__fini(member);
  return ros_robot_controller_msgs__msg__PWMServoState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs__srv__GetPWMServoState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_robot_controller_msgs__srv__GetPWMServoState_Response, state),  // bytes offset in struct
    NULL,  // default value
    ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__size_function__GetPWMServoState_Response__state,  // size() function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__get_const_function__GetPWMServoState_Response__state,  // get_const(index) function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__get_function__GetPWMServoState_Response__state,  // get(index) function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__fetch_function__GetPWMServoState_Response__state,  // fetch(index, &value) function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__assign_function__GetPWMServoState_Response__state,  // assign(index, value) function pointer
    ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__resize_function__GetPWMServoState_Response__state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_members = {
  "ros_robot_controller_msgs__srv",  // message namespace
  "GetPWMServoState_Response",  // message name
  2,  // number of fields
  sizeof(ros_robot_controller_msgs__srv__GetPWMServoState_Response),
  ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_member_array,  // message members
  ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_type_support_handle = {
  0,
  &ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_robot_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, srv, GetPWMServoState_Response)() {
  ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, msg, PWMServoState)();
  if (!ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_type_support_handle.typesupport_identifier) {
    ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_robot_controller_msgs__srv__GetPWMServoState_Response__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_robot_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_robot_controller_msgs__srv__detail__get_pwm_servo_state__rosidl_typesupport_introspection_c__GetPWMServoState_service_members = {
  "ros_robot_controller_msgs__srv",  // service namespace
  "GetPWMServoState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_robot_controller_msgs__srv__detail__get_pwm_servo_state__rosidl_typesupport_introspection_c__GetPWMServoState_Request_message_type_support_handle,
  NULL  // response message
  // ros_robot_controller_msgs__srv__detail__get_pwm_servo_state__rosidl_typesupport_introspection_c__GetPWMServoState_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_robot_controller_msgs__srv__detail__get_pwm_servo_state__rosidl_typesupport_introspection_c__GetPWMServoState_service_type_support_handle = {
  0,
  &ros_robot_controller_msgs__srv__detail__get_pwm_servo_state__rosidl_typesupport_introspection_c__GetPWMServoState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, srv, GetPWMServoState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, srv, GetPWMServoState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_robot_controller_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, srv, GetPWMServoState)() {
  if (!ros_robot_controller_msgs__srv__detail__get_pwm_servo_state__rosidl_typesupport_introspection_c__GetPWMServoState_service_type_support_handle.typesupport_identifier) {
    ros_robot_controller_msgs__srv__detail__get_pwm_servo_state__rosidl_typesupport_introspection_c__GetPWMServoState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_robot_controller_msgs__srv__detail__get_pwm_servo_state__rosidl_typesupport_introspection_c__GetPWMServoState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, srv, GetPWMServoState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_robot_controller_msgs, srv, GetPWMServoState_Response)()->data;
  }

  return &ros_robot_controller_msgs__srv__detail__get_pwm_servo_state__rosidl_typesupport_introspection_c__GetPWMServoState_service_type_support_handle;
}
