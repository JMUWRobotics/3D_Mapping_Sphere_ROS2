// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from logitech_msgs:msg/Controller.idl
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
#include "logitech_msgs/msg/detail/controller__struct.h"
#include "logitech_msgs/msg/detail/controller__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool logitech_msgs__msg__controller__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("logitech_msgs.msg._controller.Controller", full_classname_dest, 40) == 0);
  }
  logitech_msgs__msg__Controller * ros_message = _ros_message;
  {  // motor_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_value = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // servop
    PyObject * field = PyObject_GetAttrString(_pymsg, "servop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servop = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // servomid
    PyObject * field = PyObject_GetAttrString(_pymsg, "servomid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servomid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * logitech_msgs__msg__controller__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Controller */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("logitech_msgs.msg._controller");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Controller");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  logitech_msgs__msg__Controller * ros_message = (logitech_msgs__msg__Controller *)raw_ros_message;
  {  // motor_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servop
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servomid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servomid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servomid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
