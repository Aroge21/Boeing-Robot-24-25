// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/ObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__OBJECT_INFO__STRUCT_H_
#define INTERFACES__MSG__DETAIL__OBJECT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"
// Member 'box'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ObjectInfo in the package interfaces.
typedef struct interfaces__msg__ObjectInfo
{
  rosidl_runtime_c__String class_name;
  rosidl_runtime_c__int32__Sequence box;
  float score;
  int32_t width;
  int32_t height;
} interfaces__msg__ObjectInfo;

// Struct for a sequence of interfaces__msg__ObjectInfo.
typedef struct interfaces__msg__ObjectInfo__Sequence
{
  interfaces__msg__ObjectInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__ObjectInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__OBJECT_INFO__STRUCT_H_
