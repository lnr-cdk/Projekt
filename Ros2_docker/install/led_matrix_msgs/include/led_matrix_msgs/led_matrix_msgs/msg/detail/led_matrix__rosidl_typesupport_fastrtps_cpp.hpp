// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from led_matrix_msgs:msg/LedMatrix.idl
// generated code does not contain a copyright notice

#ifndef LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "led_matrix_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "led_matrix_msgs/msg/detail/led_matrix__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace led_matrix_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_led_matrix_msgs
cdr_serialize(
  const led_matrix_msgs::msg::LedMatrix & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_led_matrix_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  led_matrix_msgs::msg::LedMatrix & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_led_matrix_msgs
get_serialized_size(
  const led_matrix_msgs::msg::LedMatrix & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_led_matrix_msgs
max_serialized_size_LedMatrix(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace led_matrix_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_led_matrix_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, led_matrix_msgs, msg, LedMatrix)();

#ifdef __cplusplus
}
#endif

#endif  // LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
