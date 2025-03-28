// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/ColorDetect.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__COLOR_DETECT__STRUCT_H_
#define INTERFACES__MSG__DETAIL__COLOR_DETECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color_name'
// Member 'detect_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ColorDetect in the package interfaces.
typedef struct interfaces__msg__ColorDetect
{
  rosidl_runtime_c__String color_name;
  rosidl_runtime_c__String detect_type;
} interfaces__msg__ColorDetect;

// Struct for a sequence of interfaces__msg__ColorDetect.
typedef struct interfaces__msg__ColorDetect__Sequence
{
  interfaces__msg__ColorDetect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__ColorDetect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__COLOR_DETECT__STRUCT_H_
