// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Points.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POINTS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__POINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "interfaces/msg/detail/pixel_position__struct.h"

/// Struct defined in msg/Points in the package interfaces.
typedef struct interfaces__msg__Points
{
  interfaces__msg__PixelPosition__Sequence points;
} interfaces__msg__Points;

// Struct for a sequence of interfaces__msg__Points.
typedef struct interfaces__msg__Points__Sequence
{
  interfaces__msg__Points * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Points__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__POINTS__STRUCT_H_
