// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from led_matrix_msgs:msg/LedMatrix.idl
// generated code does not contain a copyright notice

#ifndef LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__BUILDER_HPP_
#define LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "led_matrix_msgs/msg/detail/led_matrix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace led_matrix_msgs
{

namespace msg
{

namespace builder
{

class Init_LedMatrix_rows
{
public:
  Init_LedMatrix_rows()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::led_matrix_msgs::msg::LedMatrix rows(::led_matrix_msgs::msg::LedMatrix::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return std::move(msg_);
  }

private:
  ::led_matrix_msgs::msg::LedMatrix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::led_matrix_msgs::msg::LedMatrix>()
{
  return led_matrix_msgs::msg::builder::Init_LedMatrix_rows();
}

}  // namespace led_matrix_msgs

#endif  // LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__BUILDER_HPP_
