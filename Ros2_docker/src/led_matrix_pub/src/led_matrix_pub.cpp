#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "led_matrix_msgs/msg/led_matrix.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class LedMatrixPub : public rclcpp::Node
{
public:
  LedMatrixPub()
      : Node("led_matrix_pub")
  {
    publisher_ = this->create_publisher<led_matrix_msgs::msg::LedMatrix>("/led_matrix_display", 10);
    subscriber_ = this->create_subscription<std_msgs::msg::Int32>(
        "/countdown_trigger", 10,
        std::bind(&LedMatrixPub::sub_callback, this, std::placeholders::_1));
    init_dictionary();
    input_loop_thread_ = std::thread(&LedMatrixPub::input_loop, this);
  }
  ~LedMatrixPub()
  {
    if (input_loop_thread_.joinable())
    {
      input_loop_thread_.join();
    }
  }

private:
  rclcpp::Publisher<led_matrix_msgs::msg::LedMatrix>::SharedPtr publisher_;
  rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr subscriber_;
  std::unordered_map<std::string, std::array<uint8_t, 8>> dictionary_;
  std::thread input_loop_thread_;

  void init_dictionary()
  {
    dictionary_["smile"] = {
        0b00111100,
        0b01000010,
        0b10100101,
        0b10000001,
        0b10100101,
        0b10011001,
        0b01000010,
        0b00111100};

    dictionary_["heart"] = {
        0b00000000,
        0b00000000,
        0b01100110,
        0b11111111,
        0b01111110,
        0b00111100,
        0b00011000,
        0b00000000};

    dictionary_["diamond"] = {
        0b00010000,
        0b00111000,
        0b01111100,
        0b11111110,
        0b01111100,
        0b00111000,
        0b00010000,
        0b00000000};

    dictionary_["circle"] = {
        0b00111100,
        0b01100110,
        0b11000011,
        0b10000001,
        0b10000001,
        0b11000011,
        0b01100110,
        0b00111100};

    dictionary_["square"] = {
        0b11111111,
        0b10000001,
        0b10000001,
        0b10000001,
        0b10000001,
        0b10000001,
        0b10000001,
        0b11111111};

    dictionary_["cross"] = {
        0b10000001,
        0b01000010,
        0b00100100,
        0b00011000,
        0b00011000,
        0b00100100,
        0b01000010,
        0b10000001};
    dictionary_["arrow"] = {
        0b00001000,
        0b00011100,
        0b00111100,
        0b01111110,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00000000};
    dictionary_["0"] = {
        0b00111100,
        0b01000010,
        0b01000010,
        0b01000010,
        0b01000010,
        0b01000010,
        0b00111100,
        0b00000000};
    dictionary_["1"] = {
        0b00010000,
        0b00110000,
        0b00010000,
        0b00010000,
        0b0001000,
        0b00010000,
        0b00111000,
        0b00000000};
    dictionary_["2"] = {
        0b00011000,
        0b00100100,
        0b00000100,
        0b00001000,
        0b00010000,
        0b00100000,
        0b00111100,
        0b00000000};
    dictionary_["3"] = {
        0b00011000,
        0b00100100,
        0b00000100,
        0b00001000,
        0b00000100,
        0b00100100,
        0b00011000,
        0b00000000};
    dictionary_["4"] = {
        0b00000100,
        0b00001100,
        0b00010100,
        0b00100100,
        0b00111100,
        0b00000100,
        0b00000100,
        0b00000000};
    dictionary_["5"] = {
        0b00111100,
        0b00100000,
        0b00111100,
        0b00000100,
        0b00000100,
        0b00100100,
        0b00011000,
        0b00000000};
  }

  void sub_callback(const std_msgs::msg::Int32::SharedPtr msg)
  {
    RCLCPP_INFO(this->get_logger(), "Received countdown trigger: %d", msg->data);
    std::string msg_string = std::to_string(msg->data);
    if (dictionary_.find(msg_string) != dictionary_.end())
    {
      auto led_msg = led_matrix_msgs::msg::LedMatrix();
      led_msg.rows = dictionary_[msg_string];
      publisher_->publish(led_msg);
      RCLCPP_INFO(this->get_logger(), "Published pattern for '%s'", msg_string.c_str());
    }
    else
    {
      RCLCPP_WARN(this->get_logger(), "Unknown command: '%s'", msg_string.c_str());
    }
  }

  void input_loop()
  {
    std::string input;
    while (rclcpp::ok())
    {
      std::cout << "Enter command: ";
      std::getline(std::cin, input);
      if (input == "exit")
      {
        RCLCPP_INFO(this->get_logger(), "Exiting on user request.");
        rclcpp::shutdown(); // triggers exit from spin() and breaks the loop
        break;
      }

      else if (dictionary_.find(input) != dictionary_.end())
      {
        auto msg = led_matrix_msgs::msg::LedMatrix();
        msg.rows = dictionary_[input];
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Published pattern for '%s'", input.c_str());
      }

      else
      {
        RCLCPP_WARN(this->get_logger(), "Unknown command: '%s'", input.c_str());
      }
    }
  }
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<LedMatrixPub>());
  rclcpp::shutdown();
  return 0;
}
