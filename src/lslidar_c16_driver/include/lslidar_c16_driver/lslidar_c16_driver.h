/*
 * This file is part of lslidar_c16 driver.
 *
 * The driver is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * The driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the driver.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _LS_C16_DRIVER_H_
#define _LS_C16_DRIVER_H_

#include <string>
// #include <ros/ros.h>
// #include <ros/package.h>
// #include <std_msgs/Int32.h>
#include "rclcpp/rclcpp.hpp"


#include <pcl/point_types.h>
// #include <pcl_ros/impl/transforms.hpp>
#include <pcl_conversions/pcl_conversions.h>
#include "input.h"
#include <lslidar_c16_msg/msg/lslidar_c16_scan_unified.hpp>
#include <lslidar_c16_msg/srv/lslidar_c16_control.hpp>

namespace lslidar_c16_driver
{
class lslidarDriver
{
public:
  /**
 * @brief lslidarDriver
 * @param node          raw packet output topic
 * @param private_nh    通过这个节点传参数
 */
  lslidarDriver(rclcpp::Node::SharedPtr node, rclcpp::Node::SharedPtr private_nh);

  ~lslidarDriver();
  bool poll(void);
  void difopPoll(void);
  bool lslidarC16Control(lslidar_c16_msg::srv::LslidarC16Control::Request::SharedPtr req,lslidar_c16_msg::srv::LslidarC16Control::Response::SharedPtr res);
  bool bSwitch = true;

private:
  /// Callback for skip num for time synchronization
  // TODO：
  // void skipNumCallback(const std_msgs::Int32::ConstPtr& skip_num);
    bool SendPacketTolidar(bool power_switch);
  // configuration parameters
  struct
  {
    std::string frame_id;  ///< tf frame ID
    std::string model;     ///< device model name
    int npackets;          ///< number of packets to collect
    double rpm;            ///< device rotation rate (RPMs)
    double time_offset;    ///< time in seconds added to each  time stamp
    int cut_angle;
    int return_mode;     //return wave number
  } config_;

  // boost::shared_ptr<Input> msop_input_;
  // boost::shared_ptr<Input> difop_input_;
  // ros::Publisher msop_output_;
  // ros::Publisher difop_output_;
  // ros::Publisher output_sync_;
  // ros::ServiceServer lslidar_control;
  std::shared_ptr<Input> msop_input_;
  std::shared_ptr<Input> difop_input_;
  rclcpp::Publisher<lslidar_c16_msg::msg::LslidarC16ScanUnified>::SharedPtr msop_output_; 
  rclcpp::Publisher<lslidar_c16_msg::msg::LslidarC16Packet>::SharedPtr difop_output_; 
  rclcpp::Publisher<sensor_msgs::msg::TimeReference>::SharedPtr output_sync_; 
  rclcpp::Service<lslidar_c16_msg::srv::LslidarC16Control>::SharedPtr lslidar_control; 

  int switch_status;
  unsigned char difop_data[1206];
  // Converter convtor_
  // boost::shared_ptr<boost::thread> difop_thread_;
  std::shared_ptr<std::thread> difop_thread_;


  // add for time synchronization
  bool time_synchronization_;
  unsigned char packetTimeStamp[10];
  uint64_t pointcloudTimeStamp;
  uint64_t GPSStableTS;
  uint64_t GPSCountingTS;
  uint64_t last_FPGA_ts;
  uint64_t GPS_ts;
  int cnt_gps_ts;
  // ros::Time timeStamp;
  rclcpp::Time timeStamp;
  uint64_t usec_start;
  std::string device_ip_string;

  bool scan_fill;
  lslidar_c16_msg::msg::LslidarC16ScanUnified scan_start;



};

}  // namespace lslidar_driver

#endif
