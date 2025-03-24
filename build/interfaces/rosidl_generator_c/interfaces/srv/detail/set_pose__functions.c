// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/set_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `position`
// Member `orientation`
// Member `tolerance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interfaces__srv__SetPose_Request__init(interfaces__srv__SetPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__float__Sequence__init(&msg->position, 0)) {
    interfaces__srv__SetPose_Request__fini(msg);
    return false;
  }
  // orientation
  if (!rosidl_runtime_c__float__Sequence__init(&msg->orientation, 0)) {
    interfaces__srv__SetPose_Request__fini(msg);
    return false;
  }
  // tolerance
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tolerance, 0)) {
    interfaces__srv__SetPose_Request__fini(msg);
    return false;
  }
  // resolution
  return true;
}

void
interfaces__srv__SetPose_Request__fini(interfaces__srv__SetPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // position
  rosidl_runtime_c__float__Sequence__fini(&msg->position);
  // orientation
  rosidl_runtime_c__float__Sequence__fini(&msg->orientation);
  // tolerance
  rosidl_runtime_c__float__Sequence__fini(&msg->tolerance);
  // resolution
}

bool
interfaces__srv__SetPose_Request__are_equal(const interfaces__srv__SetPose_Request * lhs, const interfaces__srv__SetPose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // tolerance
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->tolerance), &(rhs->tolerance)))
  {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  return true;
}

bool
interfaces__srv__SetPose_Request__copy(
  const interfaces__srv__SetPose_Request * input,
  interfaces__srv__SetPose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // tolerance
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->tolerance), &(output->tolerance)))
  {
    return false;
  }
  // resolution
  output->resolution = input->resolution;
  return true;
}

interfaces__srv__SetPose_Request *
interfaces__srv__SetPose_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__SetPose_Request * msg = (interfaces__srv__SetPose_Request *)allocator.allocate(sizeof(interfaces__srv__SetPose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__SetPose_Request));
  bool success = interfaces__srv__SetPose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__SetPose_Request__destroy(interfaces__srv__SetPose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__srv__SetPose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__srv__SetPose_Request__Sequence__init(interfaces__srv__SetPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__SetPose_Request * data = NULL;

  if (size) {
    data = (interfaces__srv__SetPose_Request *)allocator.zero_allocate(size, sizeof(interfaces__srv__SetPose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__SetPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__SetPose_Request__fini(&data[i - 1]);
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
interfaces__srv__SetPose_Request__Sequence__fini(interfaces__srv__SetPose_Request__Sequence * array)
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
      interfaces__srv__SetPose_Request__fini(&array->data[i]);
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

interfaces__srv__SetPose_Request__Sequence *
interfaces__srv__SetPose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__SetPose_Request__Sequence * array = (interfaces__srv__SetPose_Request__Sequence *)allocator.allocate(sizeof(interfaces__srv__SetPose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__SetPose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__srv__SetPose_Request__Sequence__destroy(interfaces__srv__SetPose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__srv__SetPose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__srv__SetPose_Request__Sequence__are_equal(const interfaces__srv__SetPose_Request__Sequence * lhs, const interfaces__srv__SetPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__SetPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__SetPose_Request__Sequence__copy(
  const interfaces__srv__SetPose_Request__Sequence * input,
  interfaces__srv__SetPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__SetPose_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__srv__SetPose_Request * data =
      (interfaces__srv__SetPose_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__SetPose_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__srv__SetPose_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__srv__SetPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pulse`
// Member `current_pulse`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interfaces__srv__SetPose_Response__init(interfaces__srv__SetPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // pulse
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pulse, 0)) {
    interfaces__srv__SetPose_Response__fini(msg);
    return false;
  }
  // min_variation
  // current_pulse
  if (!rosidl_runtime_c__float__Sequence__init(&msg->current_pulse, 0)) {
    interfaces__srv__SetPose_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__srv__SetPose_Response__fini(interfaces__srv__SetPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // pulse
  rosidl_runtime_c__float__Sequence__fini(&msg->pulse);
  // min_variation
  // current_pulse
  rosidl_runtime_c__float__Sequence__fini(&msg->current_pulse);
}

bool
interfaces__srv__SetPose_Response__are_equal(const interfaces__srv__SetPose_Response * lhs, const interfaces__srv__SetPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // pulse
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->pulse), &(rhs->pulse)))
  {
    return false;
  }
  // min_variation
  if (lhs->min_variation != rhs->min_variation) {
    return false;
  }
  // current_pulse
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->current_pulse), &(rhs->current_pulse)))
  {
    return false;
  }
  return true;
}

bool
interfaces__srv__SetPose_Response__copy(
  const interfaces__srv__SetPose_Response * input,
  interfaces__srv__SetPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // pulse
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->pulse), &(output->pulse)))
  {
    return false;
  }
  // min_variation
  output->min_variation = input->min_variation;
  // current_pulse
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->current_pulse), &(output->current_pulse)))
  {
    return false;
  }
  return true;
}

interfaces__srv__SetPose_Response *
interfaces__srv__SetPose_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__SetPose_Response * msg = (interfaces__srv__SetPose_Response *)allocator.allocate(sizeof(interfaces__srv__SetPose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__SetPose_Response));
  bool success = interfaces__srv__SetPose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__SetPose_Response__destroy(interfaces__srv__SetPose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__srv__SetPose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__srv__SetPose_Response__Sequence__init(interfaces__srv__SetPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__SetPose_Response * data = NULL;

  if (size) {
    data = (interfaces__srv__SetPose_Response *)allocator.zero_allocate(size, sizeof(interfaces__srv__SetPose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__SetPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__SetPose_Response__fini(&data[i - 1]);
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
interfaces__srv__SetPose_Response__Sequence__fini(interfaces__srv__SetPose_Response__Sequence * array)
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
      interfaces__srv__SetPose_Response__fini(&array->data[i]);
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

interfaces__srv__SetPose_Response__Sequence *
interfaces__srv__SetPose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__SetPose_Response__Sequence * array = (interfaces__srv__SetPose_Response__Sequence *)allocator.allocate(sizeof(interfaces__srv__SetPose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__SetPose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__srv__SetPose_Response__Sequence__destroy(interfaces__srv__SetPose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__srv__SetPose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__srv__SetPose_Response__Sequence__are_equal(const interfaces__srv__SetPose_Response__Sequence * lhs, const interfaces__srv__SetPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__SetPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__SetPose_Response__Sequence__copy(
  const interfaces__srv__SetPose_Response__Sequence * input,
  interfaces__srv__SetPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__SetPose_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__srv__SetPose_Response * data =
      (interfaces__srv__SetPose_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__SetPose_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__srv__SetPose_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__srv__SetPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
