// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from led_matrix_msgs:msg/LedMatrix.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "led_matrix_msgs/msg/detail/led_matrix__rosidl_typesupport_introspection_c.h"
#include "led_matrix_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "led_matrix_msgs/msg/detail/led_matrix__functions.h"
#include "led_matrix_msgs/msg/detail/led_matrix__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  led_matrix_msgs__msg__LedMatrix__init(message_memory);
}

void led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_fini_function(void * message_memory)
{
  led_matrix_msgs__msg__LedMatrix__fini(message_memory);
}

size_t led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__size_function__LedMatrix__rows(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__get_const_function__LedMatrix__rows(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__get_function__LedMatrix__rows(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__fetch_function__LedMatrix__rows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__get_const_function__LedMatrix__rows(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__assign_function__LedMatrix__rows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__get_function__LedMatrix__rows(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_message_member_array[1] = {
  {
    "rows",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(led_matrix_msgs__msg__LedMatrix, rows),  // bytes offset in struct
    NULL,  // default value
    led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__size_function__LedMatrix__rows,  // size() function pointer
    led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__get_const_function__LedMatrix__rows,  // get_const(index) function pointer
    led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__get_function__LedMatrix__rows,  // get(index) function pointer
    led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__fetch_function__LedMatrix__rows,  // fetch(index, &value) function pointer
    led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__assign_function__LedMatrix__rows,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_message_members = {
  "led_matrix_msgs__msg",  // message namespace
  "LedMatrix",  // message name
  1,  // number of fields
  sizeof(led_matrix_msgs__msg__LedMatrix),
  led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_message_member_array,  // message members
  led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_init_function,  // function to initialize message memory (memory has to be allocated)
  led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_message_type_support_handle = {
  0,
  &led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_led_matrix_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, led_matrix_msgs, msg, LedMatrix)() {
  if (!led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_message_type_support_handle.typesupport_identifier) {
    led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &led_matrix_msgs__msg__LedMatrix__rosidl_typesupport_introspection_c__LedMatrix_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
