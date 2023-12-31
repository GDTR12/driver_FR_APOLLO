/*
 * This file is part of lslidar_n301 driver.
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

#include "lslidar_c16_decoder/lslidar_c16_decoder.hpp"
#include "rclcpp/rclcpp.hpp"
/** Main node entry point. */
int main(int argc, char** argv)
{
  // ros::init(argc, argv, "lslidar_decoder_node");
  // ros::NodeHandle node;
  // ros::NodeHandle priv_nh("~");

  // // create conversion class, which subscribes to raw data
  // lslidar_c16_decoder::Convert conv(node, priv_nh);

  // // handle callbacks until shut down
  // ros::spin();

    rclcpp::init(argc, argv);
    rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("decoder");
    rclcpp::Node::SharedPtr priv_nh = rclcpp::Node::make_shared("decoder_ph");
    lslidar_c16_decoder::Convert conv(node, priv_nh);
    rclcpp::spin(node);
    // rclcpp::spin(priv_nh);
    rclcpp::shutdown();

  return 0;
}
