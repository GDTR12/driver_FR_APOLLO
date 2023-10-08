#include <cstdio>
#include "lslidar_c16_driver/lslidar_c16_driver.h"

volatile sig_atomic_t flag = 1;

static void my_handler(int sig)
{
  flag = 0;
}

int main(int argc, char ** argv)
{
  // (void) argc;
  // (void) argv;

  printf("hello world lslidar_c16_driver package\n");
  rclcpp::init(argc, argv);
  rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("driver");
  rclcpp::Node::SharedPtr private_nh = rclcpp::Node::make_shared("driver_ph");

  signal(SIGINT, my_handler);

  // start the driver
  lslidar_c16_driver::lslidarDriver dvr(node, private_nh);

  // loop until shut down or end of file
  dvr.bSwitch = true;
  while (rclcpp::ok())
  {
      if(dvr.bSwitch){
          dvr.poll();
      }
      rclcpp::spin_some(node);
  }
  return 0;
}
