// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Points.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/points__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "interfaces/msg/detail/pixel_position__functions.h"

bool
interfaces__msg__Points__init(interfaces__msg__Points * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!interfaces__msg__PixelPosition__Sequence__init(&msg->points, 0)) {
    interfaces__msg__Points__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__Points__fini(interfaces__msg__Points * msg)
{
  if (!msg) {
    return;
  }
  // points
  interfaces__msg__PixelPosition__Sequence__fini(&msg->points);
}

bool
interfaces__msg__Points__are_equal(const interfaces__msg__Points * lhs, const interfaces__msg__Points * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!interfaces__msg__PixelPosition__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__Points__copy(
  const interfaces__msg__Points * input,
  interfaces__msg__Points * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!interfaces__msg__PixelPosition__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

interfaces__msg__Points *
interfaces__msg__Points__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Points * msg = (interfaces__msg__Points *)allocator.allocate(sizeof(interfaces__msg__Points), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Points));
  bool success = interfaces__msg__Points__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Points__destroy(interfaces__msg__Points * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__Points__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__Points__Sequence__init(interfaces__msg__Points__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Points * data = NULL;

  if (size) {
    data = (interfaces__msg__Points *)allocator.zero_allocate(size, sizeof(interfaces__msg__Points), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Points__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Points__fini(&data[i - 1]);
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
interfaces__msg__Points__Sequence__fini(interfaces__msg__Points__Sequence * array)
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
      interfaces__msg__Points__fini(&array->data[i]);
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

interfaces__msg__Points__Sequence *
interfaces__msg__Points__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Points__Sequence * array = (interfaces__msg__Points__Sequence *)allocator.allocate(sizeof(interfaces__msg__Points__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Points__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Points__Sequence__destroy(interfaces__msg__Points__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__Points__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__Points__Sequence__are_equal(const interfaces__msg__Points__Sequence * lhs, const interfaces__msg__Points__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__Points__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__Points__Sequence__copy(
  const interfaces__msg__Points__Sequence * input,
  interfaces__msg__Points__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__Points);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__Points * data =
      (interfaces__msg__Points *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__Points__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__Points__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__Points__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
