// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/ColorInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__COLOR_INFO__STRUCT_H_
#define INTERFACES__MSG__DETAIL__COLOR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ColorInfo in the package interfaces.
typedef struct interfaces__msg__ColorInfo
{
  rosidl_runtime_c__String color;
  int32_t width;
  int32_t height;
  int32_t x;
  int32_t y;
  int32_t radius;
  int32_t angle;
} interfaces__msg__ColorInfo;

// Struct for a sequence of interfaces__msg__ColorInfo.
typedef struct interfaces__msg__ColorInfo__Sequence
{
  interfaces__msg__ColorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__ColorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__COLOR_INFO__STRUCT_H_
