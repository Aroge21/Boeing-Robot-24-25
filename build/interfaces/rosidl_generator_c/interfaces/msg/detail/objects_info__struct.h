// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/ObjectsInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__OBJECTS_INFO__STRUCT_H_
#define INTERFACES__MSG__DETAIL__OBJECTS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "interfaces/msg/detail/object_info__struct.h"

/// Struct defined in msg/ObjectsInfo in the package interfaces.
typedef struct interfaces__msg__ObjectsInfo
{
  interfaces__msg__ObjectInfo__Sequence objects;
} interfaces__msg__ObjectsInfo;

// Struct for a sequence of interfaces__msg__ObjectsInfo.
typedef struct interfaces__msg__ObjectsInfo__Sequence
{
  interfaces__msg__ObjectsInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__ObjectsInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__OBJECTS_INFO__STRUCT_H_
