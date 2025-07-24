// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from led_matrix_msgs:msg/LedMatrix.idl
// generated code does not contain a copyright notice

#ifndef LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__TRAITS_HPP_
#define LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "led_matrix_msgs/msg/detail/led_matrix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace led_matrix_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedMatrix & msg,
  std::ostream & out)
{
  out << "{";
  // member: rows
  {
    if (msg.rows.size() == 0) {
      out << "rows: []";
    } else {
      out << "rows: [";
      size_t pending_items = msg.rows.size();
      for (auto item : msg.rows) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedMatrix & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rows.size() == 0) {
      out << "rows: []\n";
    } else {
      out << "rows:\n";
      for (auto item : msg.rows) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedMatrix & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace led_matrix_msgs

namespace rosidl_generator_traits
{

[[deprecated("use led_matrix_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const led_matrix_msgs::msg::LedMatrix & msg,
  std::ostream & out, size_t indentation = 0)
{
  led_matrix_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use led_matrix_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const led_matrix_msgs::msg::LedMatrix & msg)
{
  return led_matrix_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<led_matrix_msgs::msg::LedMatrix>()
{
  return "led_matrix_msgs::msg::LedMatrix";
}

template<>
inline const char * name<led_matrix_msgs::msg::LedMatrix>()
{
  return "led_matrix_msgs/msg/LedMatrix";
}

template<>
struct has_fixed_size<led_matrix_msgs::msg::LedMatrix>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<led_matrix_msgs::msg::LedMatrix>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<led_matrix_msgs::msg::LedMatrix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__TRAITS_HPP_
