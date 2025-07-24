#include <Arduino.h>
#include <micro_ros_platformio.h>

#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/string.h>

#include <led_matrix_msgs/msg/led_matrix.h>
#include <DIYables_LED_Matrix.h>
#define HARDWARE_TYPE MD_MAX72XX::GENERIC_HW
#define NUM_MATRICES 1
#define CS_PIN 21
#define SPACING 0

// Define the stack size and priority for the uROS task
#define UROS_TASK_STACK_SIZE 8192
#define UROS_TASK_PRIORITY 5

DIYables_Max7219 display(CS_PIN, NUM_MATRICES);

rcl_subscription_t subscriber;

std_msgs__msg__Int32 msg; // Example message type
// led_matrix_msgs__msg__LedMatrix led_matrix_msg;

rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

#define RCCHECK(fn)              \
  {                              \
    rcl_ret_t temp_rc = fn;      \
    if ((temp_rc != RCL_RET_OK)) \
    {                            \
      error_loop();              \
    }                            \
  }
#define RCSOFTCHECK(fn)          \
  {                              \
    rcl_ret_t temp_rc = fn;      \
    if ((temp_rc != RCL_RET_OK)) \
    {                            \
    }                            \
  }

// Error handle loop
void error_loop()
{
  while (1)
  {
    delay(100);
    Serial.println("Error occurred, check your setup!");
  }
}

void subscriber_callback(const void *msgin)
{
  // Cast the incoming message to the correct type
  std_msgs__msg__Int32 *msg = (std_msgs__msg__Int32 *)msgin;
  Serial.println("Received message: ");
  Serial.println(msg->data);

  // const led_matrix_msgs__msg__LedMatrix *led_matrix_msg = (const led_matrix_msgs__msg__LedMatrix *)msgin;

  // Clear the display
  // display.clear();

  // Render the text on the display
  // display.printBitmap(led_matrix_msg->rows, SPACING); // Text, spacing, starting column
  // display.show();
}
// void timer_callback(rcl_timer_t *timer, int64_t last_call_time)
// {
//   RCLC_UNUSED(last_call_time);
//   if (timer != NULL)
//   {
//     RCSOFTCHECK(rcl_publish(&publisher, &msg, NULL));
//     msg.data++;
//   }
// }
void micro_ros_task(void *arg)
{
  (void)arg;
  while (1)
  {
    RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
    vTaskDelay(pdMS_TO_TICKS(100)); // FreeRTOS Delay
  }
}

void setup()
{
  // Init Serial
  Serial.begin(115200);
  delay(1000);
  Serial.println("Connecting to agent...");

  // Initialize Wifi Connection
  IPAddress agent_ip(10, 233, 99, 107);
  size_t agent_port = 8888;

  char ssid[] = "WIFI-SSID"; // Replace with your WiFi SSID
  char psk[] = "PASSWORD";   // Replace with your WiFi password

  set_microros_wifi_transports(ssid, psk, agent_ip, agent_port);

  // Initialize the display
  display.setBrightness(1); // Adjust brightness from 0 to 15

  // Clear the display
  display.clear();
  display.show();

  // Render text on the display
  display.printChar('Z', SPACING); // Text, spacing, starting column
  display.show();
  delay(5000);

  // // Clear the display
  display.clear();
  display.show();

  allocator = rcl_get_default_allocator();

  // create init_options
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

  // create node
  RCCHECK(rclc_node_init_default(&node, "micro_ros_platformio_node", "", &support));

  // create LedMatrix subscriber
  RCCHECK(rclc_subscription_init_default(
      &subscriber,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
      "int32_topic"));

  // create executor
  RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
  RCCHECK(rclc_executor_add_subscription(
      &executor,
      &subscriber,
      &msg,
      &subscriber_callback,
      ON_NEW_DATA));

  xTaskCreate(
      micro_ros_task,       // Task-Funktion
      "uros_task",          // Name
      UROS_TASK_STACK_SIZE, // Stackgröße in Words
      NULL,                 // Argumente
      UROS_TASK_PRIORITY,   // Priorität
      NULL);                // Task Handle (optional)
}

void loop()
{
  // delay(100);
  // RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
}