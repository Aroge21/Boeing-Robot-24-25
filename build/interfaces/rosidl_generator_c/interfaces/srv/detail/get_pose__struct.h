// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/GetPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GET_POSE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__GET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetPose in the package interfaces.
typedef struct interfaces__srv__GetPose_Request
{
  uint8_t structure_needs_at_least_one_member;
} interfaces__srv__GetPose_Request;

// Struct for a sequence of interfaces__srv__GetPose_Request.
typedef struct interfaces__srv__GetPose_Request__Sequence
{
  interfaces__srv__GetPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__GetPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'orientation'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetPose in the package interfaces.
typedef struct interfaces__srv__GetPose_Response
{
  bool success;
  rosidl_runtime_c__float__Sequence position;
  rosidl_runtime_c__float__Sequence orientation;
} interfaces__srv__GetPose_Response;

// Struct for a sequence of interfaces__srv__GetPose_Response.
typedef struct interfaces__srv__GetPose_Response__Sequence
{
  interfaces__srv__GetPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__GetPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__GET_POSE__STRUCT_H_
