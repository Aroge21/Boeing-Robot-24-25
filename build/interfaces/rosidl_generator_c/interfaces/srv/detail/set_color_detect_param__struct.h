// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/SetColorDetectParam.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__STRUCT_H_
#define INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "interfaces/msg/detail/color_detect__struct.h"

/// Struct defined in srv/SetColorDetectParam in the package interfaces.
typedef struct interfaces__srv__SetColorDetectParam_Request
{
  interfaces__msg__ColorDetect__Sequence data;
} interfaces__srv__SetColorDetectParam_Request;

// Struct for a sequence of interfaces__srv__SetColorDetectParam_Request.
typedef struct interfaces__srv__SetColorDetectParam_Request__Sequence
{
  interfaces__srv__SetColorDetectParam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetColorDetectParam_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetColorDetectParam in the package interfaces.
typedef struct interfaces__srv__SetColorDetectParam_Response
{
  bool success;
  rosidl_runtime_c__String message;
} interfaces__srv__SetColorDetectParam_Response;

// Struct for a sequence of interfaces__srv__SetColorDetectParam_Response.
typedef struct interfaces__srv__SetColorDetectParam_Response__Sequence
{
  interfaces__srv__SetColorDetectParam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetColorDetectParam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__STRUCT_H_
