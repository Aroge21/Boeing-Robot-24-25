// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_robot_controller_msgs:msg/SetBusServoState.idl
// generated code does not contain a copyright notice
#include "ros_robot_controller_msgs/msg/detail/set_bus_servo_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
#include "ros_robot_controller_msgs/msg/detail/bus_servo_state__functions.h"

bool
ros_robot_controller_msgs__msg__SetBusServoState__init(ros_robot_controller_msgs__msg__SetBusServoState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!ros_robot_controller_msgs__msg__BusServoState__Sequence__init(&msg->state, 0)) {
    ros_robot_controller_msgs__msg__SetBusServoState__fini(msg);
    return false;
  }
  // duration
  return true;
}

void
ros_robot_controller_msgs__msg__SetBusServoState__fini(ros_robot_controller_msgs__msg__SetBusServoState * msg)
{
  if (!msg) {
    return;
  }
  // state
  ros_robot_controller_msgs__msg__BusServoState__Sequence__fini(&msg->state);
  // duration
}

bool
ros_robot_controller_msgs__msg__SetBusServoState__are_equal(const ros_robot_controller_msgs__msg__SetBusServoState * lhs, const ros_robot_controller_msgs__msg__SetBusServoState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!ros_robot_controller_msgs__msg__BusServoState__Sequence__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
ros_robot_controller_msgs__msg__SetBusServoState__copy(
  const ros_robot_controller_msgs__msg__SetBusServoState * input,
  ros_robot_controller_msgs__msg__SetBusServoState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!ros_robot_controller_msgs__msg__BusServoState__Sequence__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  return true;
}

ros_robot_controller_msgs__msg__SetBusServoState *
ros_robot_controller_msgs__msg__SetBusServoState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_robot_controller_msgs__msg__SetBusServoState * msg = (ros_robot_controller_msgs__msg__SetBusServoState *)allocator.allocate(sizeof(ros_robot_controller_msgs__msg__SetBusServoState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_robot_controller_msgs__msg__SetBusServoState));
  bool success = ros_robot_controller_msgs__msg__SetBusServoState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_robot_controller_msgs__msg__SetBusServoState__destroy(ros_robot_controller_msgs__msg__SetBusServoState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_robot_controller_msgs__msg__SetBusServoState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_robot_controller_msgs__msg__SetBusServoState__Sequence__init(ros_robot_controller_msgs__msg__SetBusServoState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_robot_controller_msgs__msg__SetBusServoState * data = NULL;

  if (size) {
    data = (ros_robot_controller_msgs__msg__SetBusServoState *)allocator.zero_allocate(size, sizeof(ros_robot_controller_msgs__msg__SetBusServoState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_robot_controller_msgs__msg__SetBusServoState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_robot_controller_msgs__msg__SetBusServoState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_robot_controller_msgs__msg__SetBusServoState__Sequence__fini(ros_robot_controller_msgs__msg__SetBusServoState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_robot_controller_msgs__msg__SetBusServoState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_robot_controller_msgs__msg__SetBusServoState__Sequence *
ros_robot_controller_msgs__msg__SetBusServoState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_robot_controller_msgs__msg__SetBusServoState__Sequence * array = (ros_robot_controller_msgs__msg__SetBusServoState__Sequence *)allocator.allocate(sizeof(ros_robot_controller_msgs__msg__SetBusServoState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_robot_controller_msgs__msg__SetBusServoState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_robot_controller_msgs__msg__SetBusServoState__Sequence__destroy(ros_robot_controller_msgs__msg__SetBusServoState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_robot_controller_msgs__msg__SetBusServoState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_robot_controller_msgs__msg__SetBusServoState__Sequence__are_equal(const ros_robot_controller_msgs__msg__SetBusServoState__Sequence * lhs, const ros_robot_controller_msgs__msg__SetBusServoState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_robot_controller_msgs__msg__SetBusServoState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_robot_controller_msgs__msg__SetBusServoState__Sequence__copy(
  const ros_robot_controller_msgs__msg__SetBusServoState__Sequence * input,
  ros_robot_controller_msgs__msg__SetBusServoState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_robot_controller_msgs__msg__SetBusServoState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_robot_controller_msgs__msg__SetBusServoState * data =
      (ros_robot_controller_msgs__msg__SetBusServoState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_robot_controller_msgs__msg__SetBusServoState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_robot_controller_msgs__msg__SetBusServoState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_robot_controller_msgs__msg__SetBusServoState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
