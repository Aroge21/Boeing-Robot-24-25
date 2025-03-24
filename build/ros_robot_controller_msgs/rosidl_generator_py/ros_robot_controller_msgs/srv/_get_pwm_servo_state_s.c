// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_robot_controller_msgs:srv/GetPWMServoState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__struct.h"
#include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros_robot_controller_msgs/msg/detail/get_pwm_servo_cmd__functions.h"
// end nested array functions include
bool ros_robot_controller_msgs__msg__get_pwm_servo_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_robot_controller_msgs__msg__get_pwm_servo_cmd__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_robot_controller_msgs__srv__get_pwm_servo_state__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ros_robot_controller_msgs.srv._get_pwm_servo_state.GetPWMServoState_Request", full_classname_dest, 75) == 0);
  }
  ros_robot_controller_msgs__srv__GetPWMServoState_Request * ros_message = _ros_message;
  {  // cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cmd'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence__init(&(ros_message->cmd), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros_robot_controller_msgs__msg__GetPWMServoCmd__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros_robot_controller_msgs__msg__GetPWMServoCmd * dest = ros_message->cmd.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros_robot_controller_msgs__msg__get_pwm_servo_cmd__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_robot_controller_msgs__srv__get_pwm_servo_state__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetPWMServoState_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_robot_controller_msgs.srv._get_pwm_servo_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetPWMServoState_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_robot_controller_msgs__srv__GetPWMServoState_Request * ros_message = (ros_robot_controller_msgs__srv__GetPWMServoState_Request *)raw_ros_message;
  {  // cmd
    PyObject * field = NULL;
    size_t size = ros_message->cmd.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros_robot_controller_msgs__msg__GetPWMServoCmd * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cmd.data[i]);
      PyObject * pyitem = ros_robot_controller_msgs__msg__get_pwm_servo_cmd__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__struct.h"
// already included above
// #include "ros_robot_controller_msgs/srv/detail/get_pwm_servo_state__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros_robot_controller_msgs/msg/detail/pwm_servo_state__functions.h"
// end nested array functions include
bool ros_robot_controller_msgs__msg__pwm_servo_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_robot_controller_msgs__msg__pwm_servo_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_robot_controller_msgs__srv__get_pwm_servo_state__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ros_robot_controller_msgs.srv._get_pwm_servo_state.GetPWMServoState_Response", full_classname_dest, 76) == 0);
  }
  ros_robot_controller_msgs__srv__GetPWMServoState_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'state'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ros_robot_controller_msgs__msg__PWMServoState__Sequence__init(&(ros_message->state), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros_robot_controller_msgs__msg__PWMServoState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros_robot_controller_msgs__msg__PWMServoState * dest = ros_message->state.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros_robot_controller_msgs__msg__pwm_servo_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_robot_controller_msgs__srv__get_pwm_servo_state__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetPWMServoState_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_robot_controller_msgs.srv._get_pwm_servo_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetPWMServoState_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_robot_controller_msgs__srv__GetPWMServoState_Response * ros_message = (ros_robot_controller_msgs__srv__GetPWMServoState_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    size_t size = ros_message->state.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros_robot_controller_msgs__msg__PWMServoState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->state.data[i]);
      PyObject * pyitem = ros_robot_controller_msgs__msg__pwm_servo_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
