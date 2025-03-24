// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/PixelPosition.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__PIXEL_POSITION__STRUCT_H_
#define INTERFACES__MSG__DETAIL__PIXEL_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PixelPosition in the package interfaces.
typedef struct interfaces__msg__PixelPosition
{
  int32_t x;
  int32_t y;
} interfaces__msg__PixelPosition;

// Struct for a sequence of interfaces__msg__PixelPosition.
typedef struct interfaces__msg__PixelPosition__Sequence
{
  interfaces__msg__PixelPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__PixelPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__PIXEL_POSITION__STRUCT_H_
