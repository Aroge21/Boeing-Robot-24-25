// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_robot_controller_msgs:msg/BusServoState.idl
// generated code does not contain a copyright notice
#include "ros_robot_controller_msgs/msg/detail/bus_servo_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_robot_controller_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_robot_controller_msgs/msg/detail/bus_servo_state__struct.h"
#include "ros_robot_controller_msgs/msg/detail/bus_servo_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // enable_torque, max_temperature_limit, offset, position, position_limit, present_id, save_offset, stop, target_id, temperature, voltage, voltage_limit
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // enable_torque, max_temperature_limit, offset, position, position_limit, present_id, save_offset, stop, target_id, temperature, voltage, voltage_limit

// forward declare type support functions


using _BusServoState__ros_msg_type = ros_robot_controller_msgs__msg__BusServoState;

static bool _BusServoState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BusServoState__ros_msg_type * ros_message = static_cast<const _BusServoState__ros_msg_type *>(untyped_ros_message);
  // Field name: present_id
  {
    size_t size = ros_message->present_id.size;
    auto array_ptr = ros_message->present_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_id
  {
    size_t size = ros_message->target_id.size;
    auto array_ptr = ros_message->target_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: position
  {
    size_t size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: offset
  {
    size_t size = ros_message->offset.size;
    auto array_ptr = ros_message->offset.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: voltage
  {
    size_t size = ros_message->voltage.size;
    auto array_ptr = ros_message->voltage.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: temperature
  {
    size_t size = ros_message->temperature.size;
    auto array_ptr = ros_message->temperature.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: position_limit
  {
    size_t size = ros_message->position_limit.size;
    auto array_ptr = ros_message->position_limit.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: voltage_limit
  {
    size_t size = ros_message->voltage_limit.size;
    auto array_ptr = ros_message->voltage_limit.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: max_temperature_limit
  {
    size_t size = ros_message->max_temperature_limit.size;
    auto array_ptr = ros_message->max_temperature_limit.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: enable_torque
  {
    size_t size = ros_message->enable_torque.size;
    auto array_ptr = ros_message->enable_torque.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: save_offset
  {
    size_t size = ros_message->save_offset.size;
    auto array_ptr = ros_message->save_offset.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: stop
  {
    size_t size = ros_message->stop.size;
    auto array_ptr = ros_message->stop.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _BusServoState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BusServoState__ros_msg_type * ros_message = static_cast<_BusServoState__ros_msg_type *>(untyped_ros_message);
  // Field name: present_id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->present_id.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->present_id);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->present_id, size)) {
      fprintf(stderr, "failed to create array for field 'present_id'");
      return false;
    }
    auto array_ptr = ros_message->present_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->target_id.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->target_id);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->target_id, size)) {
      fprintf(stderr, "failed to create array for field 'target_id'");
      return false;
    }
    auto array_ptr = ros_message->target_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->position.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->position);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->position, size)) {
      fprintf(stderr, "failed to create array for field 'position'");
      return false;
    }
    auto array_ptr = ros_message->position.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: offset
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->offset.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->offset);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->offset, size)) {
      fprintf(stderr, "failed to create array for field 'offset'");
      return false;
    }
    auto array_ptr = ros_message->offset.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: voltage
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->voltage.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->voltage);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->voltage, size)) {
      fprintf(stderr, "failed to create array for field 'voltage'");
      return false;
    }
    auto array_ptr = ros_message->voltage.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: temperature
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->temperature.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->temperature);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->temperature, size)) {
      fprintf(stderr, "failed to create array for field 'temperature'");
      return false;
    }
    auto array_ptr = ros_message->temperature.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: position_limit
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->position_limit.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->position_limit);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->position_limit, size)) {
      fprintf(stderr, "failed to create array for field 'position_limit'");
      return false;
    }
    auto array_ptr = ros_message->position_limit.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: voltage_limit
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->voltage_limit.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->voltage_limit);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->voltage_limit, size)) {
      fprintf(stderr, "failed to create array for field 'voltage_limit'");
      return false;
    }
    auto array_ptr = ros_message->voltage_limit.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: max_temperature_limit
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->max_temperature_limit.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->max_temperature_limit);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->max_temperature_limit, size)) {
      fprintf(stderr, "failed to create array for field 'max_temperature_limit'");
      return false;
    }
    auto array_ptr = ros_message->max_temperature_limit.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: enable_torque
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->enable_torque.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->enable_torque);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->enable_torque, size)) {
      fprintf(stderr, "failed to create array for field 'enable_torque'");
      return false;
    }
    auto array_ptr = ros_message->enable_torque.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: save_offset
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->save_offset.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->save_offset);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->save_offset, size)) {
      fprintf(stderr, "failed to create array for field 'save_offset'");
      return false;
    }
    auto array_ptr = ros_message->save_offset.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: stop
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->stop.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->stop);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->stop, size)) {
      fprintf(stderr, "failed to create array for field 'stop'");
      return false;
    }
    auto array_ptr = ros_message->stop.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_robot_controller_msgs
size_t get_serialized_size_ros_robot_controller_msgs__msg__BusServoState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BusServoState__ros_msg_type * ros_message = static_cast<const _BusServoState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name present_id
  {
    size_t array_size = ros_message->present_id.size;
    auto array_ptr = ros_message->present_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_id
  {
    size_t array_size = ros_message->target_id.size;
    auto array_ptr = ros_message->target_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position
  {
    size_t array_size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset
  {
    size_t array_size = ros_message->offset.size;
    auto array_ptr = ros_message->offset.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage
  {
    size_t array_size = ros_message->voltage.size;
    auto array_ptr = ros_message->voltage.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t array_size = ros_message->temperature.size;
    auto array_ptr = ros_message->temperature.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_limit
  {
    size_t array_size = ros_message->position_limit.size;
    auto array_ptr = ros_message->position_limit.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_limit
  {
    size_t array_size = ros_message->voltage_limit.size;
    auto array_ptr = ros_message->voltage_limit.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_temperature_limit
  {
    size_t array_size = ros_message->max_temperature_limit.size;
    auto array_ptr = ros_message->max_temperature_limit.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable_torque
  {
    size_t array_size = ros_message->enable_torque.size;
    auto array_ptr = ros_message->enable_torque.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name save_offset
  {
    size_t array_size = ros_message->save_offset.size;
    auto array_ptr = ros_message->save_offset.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop
  {
    size_t array_size = ros_message->stop.size;
    auto array_ptr = ros_message->stop.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BusServoState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_robot_controller_msgs__msg__BusServoState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_robot_controller_msgs
size_t max_serialized_size_ros_robot_controller_msgs__msg__BusServoState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: present_id
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: target_id
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: offset
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: voltage
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: temperature
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: position_limit
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: voltage_limit
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: max_temperature_limit
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: enable_torque
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: save_offset
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: stop
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_robot_controller_msgs__msg__BusServoState;
    is_plain =
      (
      offsetof(DataType, stop) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BusServoState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_robot_controller_msgs__msg__BusServoState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BusServoState = {
  "ros_robot_controller_msgs::msg",
  "BusServoState",
  _BusServoState__cdr_serialize,
  _BusServoState__cdr_deserialize,
  _BusServoState__get_serialized_size,
  _BusServoState__max_serialized_size
};

static rosidl_message_type_support_t _BusServoState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BusServoState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_robot_controller_msgs, msg, BusServoState)() {
  return &_BusServoState__type_support;
}

#if defined(__cplusplus)
}
#endif
