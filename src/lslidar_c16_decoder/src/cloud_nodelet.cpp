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

#include "rclcpp/rclcpp.hpp"
#include <pluginlib/pluginlib/class_list_macros.hpp>
// #include <nodelet/nodelet.h>

#include "lslidar_c16_decoder/lslidar_c16_decoder.hpp"

namespace lslidar_c16_decoder
{
class LslidarC16DecoderNodelet : public rclcpp::Node

{
public:
  LslidarC16DecoderNodelet() : Node("lslidar_c16_decoder_node")
  {
    // conv_ = std::make_shared<Convert>(this->get_node_base_interface(), this->get_node_topics_interface());
    conv_ = std::make_shared<Convert>(this->get_node_base_interface(), this->get_node_base_interface());
  }
  ~LslidarC16DecoderNodelet()
  {
  }

private:
  std::shared_ptr<Convert> conv_;
};


}  // namespace lslidar_c16_decoder

// parameters: class type, base class type
