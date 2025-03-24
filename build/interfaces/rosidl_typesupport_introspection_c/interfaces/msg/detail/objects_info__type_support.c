// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:msg/ObjectsInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/msg/detail/objects_info__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/msg/detail/objects_info__functions.h"
#include "interfaces/msg/detail/objects_info__struct.h"


// Include directives for member types
// Member `objects`
#include "interfaces/msg/object_info.h"
// Member `objects`
#include "interfaces/msg/detail/object_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__msg__ObjectsInfo__init(message_memory);
}

void interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_fini_function(void * message_memory)
{
  interfaces__msg__ObjectsInfo__fini(message_memory);
}

size_t interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__size_function__ObjectsInfo__objects(
  const void * untyped_member)
{
  const interfaces__msg__ObjectInfo__Sequence * member =
    (const interfaces__msg__ObjectInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__get_const_function__ObjectsInfo__objects(
  const void * untyped_member, size_t index)
{
  const interfaces__msg__ObjectInfo__Sequence * member =
    (const interfaces__msg__ObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__get_function__ObjectsInfo__objects(
  void * untyped_member, size_t index)
{
  interfaces__msg__ObjectInfo__Sequence * member =
    (interfaces__msg__ObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__fetch_function__ObjectsInfo__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces__msg__ObjectInfo * item =
    ((const interfaces__msg__ObjectInfo *)
    interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__get_const_function__ObjectsInfo__objects(untyped_member, index));
  interfaces__msg__ObjectInfo * value =
    (interfaces__msg__ObjectInfo *)(untyped_value);
  *value = *item;
}

void interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__assign_function__ObjectsInfo__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces__msg__ObjectInfo * item =
    ((interfaces__msg__ObjectInfo *)
    interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__get_function__ObjectsInfo__objects(untyped_member, index));
  const interfaces__msg__ObjectInfo * value =
    (const interfaces__msg__ObjectInfo *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__resize_function__ObjectsInfo__objects(
  void * untyped_member, size_t size)
{
  interfaces__msg__ObjectInfo__Sequence * member =
    (interfaces__msg__ObjectInfo__Sequence *)(untyped_member);
  interfaces__msg__ObjectInfo__Sequence__fini(member);
  return interfaces__msg__ObjectInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_message_member_array[1] = {
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__ObjectsInfo, objects),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__size_function__ObjectsInfo__objects,  // size() function pointer
    interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__get_const_function__ObjectsInfo__objects,  // get_const(index) function pointer
    interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__get_function__ObjectsInfo__objects,  // get(index) function pointer
    interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__fetch_function__ObjectsInfo__objects,  // fetch(index, &value) function pointer
    interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__assign_function__ObjectsInfo__objects,  // assign(index, value) function pointer
    interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__resize_function__ObjectsInfo__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_message_members = {
  "interfaces__msg",  // message namespace
  "ObjectsInfo",  // message name
  1,  // number of fields
  sizeof(interfaces__msg__ObjectsInfo),
  interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_message_member_array,  // message members
  interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_message_type_support_handle = {
  0,
  &interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, ObjectsInfo)() {
  interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, ObjectInfo)();
  if (!interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_message_type_support_handle.typesupport_identifier) {
    interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__msg__ObjectsInfo__rosidl_typesupport_introspection_c__ObjectsInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
