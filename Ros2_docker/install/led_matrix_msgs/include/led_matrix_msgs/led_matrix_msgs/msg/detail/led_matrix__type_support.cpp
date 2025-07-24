// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from led_matrix_msgs:msg/LedMatrix.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "led_matrix_msgs/msg/detail/led_matrix__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace led_matrix_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LedMatrix_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) led_matrix_msgs::msg::LedMatrix(_init);
}

void LedMatrix_fini_function(void * message_memory)
{
  auto typed_message = static_cast<led_matrix_msgs::msg::LedMatrix *>(message_memory);
  typed_message->~LedMatrix();
}

size_t size_function__LedMatrix__rows(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__LedMatrix__rows(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__LedMatrix__rows(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__LedMatrix__rows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LedMatrix__rows(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LedMatrix__rows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LedMatrix__rows(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LedMatrix_message_member_array[1] = {
  {
    "rows",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(led_matrix_msgs::msg::LedMatrix, rows),  // bytes offset in struct
    nullptr,  // default value
    size_function__LedMatrix__rows,  // size() function pointer
    get_const_function__LedMatrix__rows,  // get_const(index) function pointer
    get_function__LedMatrix__rows,  // get(index) function pointer
    fetch_function__LedMatrix__rows,  // fetch(index, &value) function pointer
    assign_function__LedMatrix__rows,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LedMatrix_message_members = {
  "led_matrix_msgs::msg",  // message namespace
  "LedMatrix",  // message name
  1,  // number of fields
  sizeof(led_matrix_msgs::msg::LedMatrix),
  LedMatrix_message_member_array,  // message members
  LedMatrix_init_function,  // function to initialize message memory (memory has to be allocated)
  LedMatrix_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LedMatrix_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LedMatrix_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace led_matrix_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<led_matrix_msgs::msg::LedMatrix>()
{
  return &::led_matrix_msgs::msg::rosidl_typesupport_introspection_cpp::LedMatrix_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, led_matrix_msgs, msg, LedMatrix)() {
  return &::led_matrix_msgs::msg::rosidl_typesupport_introspection_cpp::LedMatrix_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
