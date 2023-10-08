#pragma once

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/time_reference.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "lslidar_rawdata.hpp"
#include "lslidar_c16_msg/msg/lslidar_c16_layer.hpp"
#include "lslidar_c16_msg/msg/lslidar_c16_point.hpp"
#include "lslidar_c16_msg/msg/lslidar_c16_scan.hpp"
#include "lslidar_c16_msg/msg/lslidar_c16_sweep.hpp"
#include "lslidar_c16_msg/msg/lslidar_c16_packet.hpp"
#include "lslidar_c16_msg/msg/lslidar_c16_scan_unified.hpp"

namespace lslidar_c16_decoder {
    std::string model;

    class Convert  : public rclcpp::Node{
    public:
        // Convert(ros::NodeHandle node, ros::NodeHandle private_nh);

        // ~Convert() {
        // }

        Convert(rclcpp::Node::SharedPtr node, rclcpp::Node::SharedPtr private_nh);
        void processScan(const lslidar_c16_msg::msg::LslidarC16ScanUnified &scanMsg);

        void timeSync(const sensor_msgs::msg::TimeReference &time_msg);
        /// Pointer to dynamic reconfigure service srv_
        void removeNan(lslidar_rawdata::VPointCloud &cloud_in,lslidar_rawdata::VPointCloud &cloud_out,std::vector<int> &index);
        void publishScan(lslidar_c16_msg::msg::LslidarC16Sweep::SharedPtr& sweepData, int scanNum);

        // boost::shared_ptr<lslidar_rawdata::RawData> data_;
        std::shared_ptr<lslidar_rawdata::RawData> data_;
        
        // TODO:
        // ros::Subscriber packet_sub_;
        // ros::Subscriber sync_sub_;
        // ros::Time global_time;

        rclcpp::Subscription<lslidar_c16_msg::msg::LslidarC16ScanUnified>::SharedPtr packet_sub_;
        rclcpp::Subscription<sensor_msgs::msg::TimeReference>::SharedPtr sync_sub_;

        builtin_interfaces::msg::Time global_time;

        double last_time;
        lslidar_c16_msg::msg::LslidarC16ScanUnified::SharedPtr scan_recv;
        lslidar_c16_msg::msg::LslidarC16Sweep::SharedPtr sweep_data;
        bool scan_start;
        bool publish_scan;
        int scan_num;
        std::string scan_frame_id;
        std::string pointcloud_topic;
        size_t scan_nums;
        bool time_synchronization_;

        // TODO:
        // ros::Publisher output_;
        // ros::Publisher scan_pub;
        rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr output_;
        rclcpp::Publisher<sensor_msgs::msg::LaserScan>::SharedPtr scan_pub;

        std::vector<int> indices;
        builtin_interfaces::msg::Time scan_timestamp; 
        // ros::Time scan_timestamp;
        int frequency;
        double  horizontal_angle_resolution;
    };
    
    Convert::Convert(rclcpp::Node::SharedPtr node, rclcpp::Node::SharedPtr private_nh): rclcpp::Node("Convert") {
        scan_nums = 0;
        scan_start = true;

        data_->loadConfigFile(node, private_nh);  // load lidar parameters
        private_nh->declare_parameter("model", model);

        // advertise output point cloud (before subscribing to input data)

        private_nh->declare_parameter("pointcloud_topic", pointcloud_topic); 
        output_ = node->create_publisher<sensor_msgs::msg::PointCloud2>(pointcloud_topic, 10); 
        // output_ = node.advertise<sensor_msgs::msg::PointCloud2>(pointcloud_topic, 10);
        scan_pub = node->create_publisher<sensor_msgs::msg::LaserScan>("scan_topic", 10);
        // scan_pub = node.advertise<sensor_msgs::msg::LaserScan>("scan_topic", 100);

        // subscribe to lslidar packets
        packet_sub_ = node->create_subscription<lslidar_c16_msg::msg::LslidarC16ScanUnified>("lslidar_packet_c16", 10, std::bind(&Convert::processScan, this, std::placeholders::_1));
        // packet_sub_ = node.subscribe("lslidar_packet_c16", 10, &Convert::processScan, (Convert *) this,
        //                              ros::TransportHints().tcpNoDelay(true));

        private_nh->declare_parameter("time_synchronization", time_synchronization_);
        private_nh->declare_parameter("scan_num", scan_num);
        private_nh->declare_parameter("publish_scan", publish_scan);
        private_nh->declare_parameter("scan_frame_id", scan_frame_id);
        private_nh->declare_parameter("frequency", frequency);
        if(publish_scan) {
            if (scan_num < 0) {
                scan_num = 0;
                RCLCPP_WARN(rclcpp::get_logger("convert"),"channel_num_ outside of the index, select channel 0 instead!");
            } else if (scan_num > 15) {
                scan_num = 15;
                RCLCPP_WARN(rclcpp::get_logger("convert"),"channel_num_ outside of the index, select channel 15 instead!");
            }
            RCLCPP_INFO(rclcpp::get_logger("convert"),"select scan_num: %d", scan_num);
        }
        switch (frequency){
            case 5:
                horizontal_angle_resolution = DEG2RAD(0.09);
                break;
            case 20:
                horizontal_angle_resolution = DEG2RAD(0.36);
                break;
            default:
                horizontal_angle_resolution = DEG2RAD(0.18);
        }

        if (time_synchronization_) {
            sync_sub_ = node->create_subscription<sensor_msgs::msg::TimeReference>("sync_header", 10, std::bind(&Convert::timeSync, this, std::placeholders::_1));
            // sync_sub_ = node.subscribe("sync_header", 10, &Convert::timeSync, (Convert *) this,
            //                            ros::TransportHints().tcpNoDelay(true));
        }
    }

    void Convert::timeSync(const sensor_msgs::msg::TimeReference &time_msg) {
        global_time = time_msg.header.stamp;
    }

    void Convert::removeNan(lslidar_rawdata::VPointCloud &cloud_in, lslidar_rawdata::VPointCloud &cloud_out,
                            std::vector<int> &index) {
        if (&cloud_in != &cloud_out) {
            cloud_out.header = cloud_in.header;
            cloud_out.resize(cloud_in.size());
            cloud_out.sensor_origin_ = cloud_in.sensor_origin_;
            cloud_out.sensor_orientation_ = cloud_in.sensor_orientation_;
        }
        index.resize(cloud_in.size());
        if (cloud_in.is_dense) {
            cloud_out = cloud_in;
            for (std::size_t j = 0; j < cloud_out.size(); ++j)
                index[j] = j;
        } else {
            std::size_t j = 0;
            for (std::size_t i = 0; i < cloud_in.size(); ++i) {
                if (!std::isfinite(cloud_in[i].x) ||
                    !std::isfinite(cloud_in[i].y) ||
                    !std::isfinite(cloud_in[i].z))
                    continue;
                cloud_out[j] = cloud_in[i];
                index[j] = i;
                j++;
            }
            if(j != cloud_in.size()){
                cloud_out.resize(j);
                index.resize(j);
            }
            cloud_out.height = 1;
            cloud_out.width = static_cast<std::uint32_t>(j);
            cloud_out.is_dense =true;
        }

    }

    void Convert::publishScan(lslidar_c16_msg::msg::LslidarC16Sweep::SharedPtr &sweepData, int scanNum) {
        sensor_msgs::msg::LaserScan::SharedPtr scan(std::make_shared<sensor_msgs::msg::LaserScan>());
        if (sweepData->scans[scanNum].points.size() <= 1)
            return;

        uint16_t point_num = 2 * M_PI / horizontal_angle_resolution;


        scan->header.frame_id = scan_frame_id;
        scan->header.stamp = sweepData->header.stamp;  // timestamp will obtained from sweep data stamp
        scan->angle_min = 0;
        scan->angle_max = 2 * M_PI;
        scan->angle_increment = horizontal_angle_resolution;
        scan->range_min = 0.15;
        scan->range_max = 150;
        scan->ranges.reserve(point_num);
        scan->ranges.assign(point_num, std::numeric_limits<float>::infinity());
        scan->intensities.reserve(point_num);
        scan->intensities.assign(point_num, std::numeric_limits<float>::infinity());

        for (uint16_t i = 0; i < sweepData->scans[scanNum].points.size() - 1; i++) {
            int point_idx = sweepData->scans[scanNum].points[i].azimuth / scan->angle_increment;

            if (point_idx >= point_num)
                point_idx = 0;
            if (point_idx < 0)
                point_idx = point_num - 1;

            scan->ranges[point_num - 1 - point_idx] = sweepData->scans[scanNum].points[i].distance;

            scan->intensities[point_num - 1 - point_idx] = sweepData->scans[scanNum].points[i].intensity;
        }
        scan_pub->publish(*scan);
        // scan_pub.publish(scan);
    }


/** @brief Callback for raw scan messages. */
    void Convert::processScan(const lslidar_c16_msg::msg::LslidarC16ScanUnified &scanMsg) {
        // pcl::PointCloud<pcl::PointXYZI>::Ptr outPoints(new pcl::PointCloud<pcl::PointXYZI>);
        lslidar_rawdata::VPointCloud::Ptr outPoints(new lslidar_rawdata::VPointCloud);

        sweep_data = lslidar_c16_msg::msg::LslidarC16Sweep::SharedPtr(std::make_shared<lslidar_c16_msg::msg::LslidarC16Sweep>());

        if (time_synchronization_) {
            outPoints->header.stamp = pcl_conversions::toPCL(scanMsg.header).stamp;
            scan_timestamp = scanMsg.header.stamp;
        } else {
            // outPoints->header.stamp = ros::Time::now().toNSec() / 1000ull;
            outPoints->header.stamp = this->now().nanoseconds() / 1000ull;
        }

        outPoints->header.frame_id = scanMsg.header.frame_id;

        outPoints->clear();
        outPoints->height = 16;
        outPoints->width = 24 * (int) scanMsg.packets.size();

        outPoints->is_dense = false;
        outPoints->resize(outPoints->height * outPoints->width);
        int blockNum, dsr;
        lslidar_rawdata::VPoint point;
        point.x = NAN;
        point.y = NAN;
        point.z = NAN;
        point.intensity = 0;
        for (int i = 0; i < outPoints->height * outPoints->width; ++i) {
            blockNum = i / 16;
            dsr = i % 16;
            outPoints->at(blockNum, dsr) = point;
        }

        // process each packet provided by the driver
        data_->block_num = 0;

        for (int i = 0; i < scanMsg.packets.size(); ++i) {
            data_->unpack(scanMsg.packets[i], outPoints, i, sweep_data);
        }

        removeNan(*outPoints, *outPoints, indices);
        sensor_msgs::msg::PointCloud2 outMsg;
        pcl::toROSMsg(*outPoints, outMsg);
        output_->publish(outMsg);

        if (publish_scan) { publishScan(sweep_data, scan_num); }

    }

}



