// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/ROI.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ROI__STRUCT_H_
#define INTERFACES__MSG__DETAIL__ROI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ROI in the package interfaces.
typedef struct interfaces__msg__ROI
{
  int16_t y_min;
  int16_t y_max;
  int16_t x_min;
  int16_t x_max;
  float scale;
} interfaces__msg__ROI;

// Struct for a sequence of interfaces__msg__ROI.
typedef struct interfaces__msg__ROI__Sequence
{
  interfaces__msg__ROI * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__ROI__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__ROI__STRUCT_H_
