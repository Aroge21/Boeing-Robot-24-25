// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/LineROI.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LINE_ROI__STRUCT_H_
#define INTERFACES__MSG__DETAIL__LINE_ROI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roi_up'
// Member 'roi_center'
// Member 'roi_down'
#include "interfaces/msg/detail/roi__struct.h"

/// Struct defined in msg/LineROI in the package interfaces.
typedef struct interfaces__msg__LineROI
{
  interfaces__msg__ROI roi_up;
  interfaces__msg__ROI roi_center;
  interfaces__msg__ROI roi_down;
} interfaces__msg__LineROI;

// Struct for a sequence of interfaces__msg__LineROI.
typedef struct interfaces__msg__LineROI__Sequence
{
  interfaces__msg__LineROI * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__LineROI__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__LINE_ROI__STRUCT_H_
