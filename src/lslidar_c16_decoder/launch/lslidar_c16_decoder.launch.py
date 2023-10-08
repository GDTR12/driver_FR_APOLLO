from launch import LaunchDescription as ld
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

from pkg_resources import declare_namespace
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch.actions import ExecuteProcess, RegisterEventHandler,LogInfo
from launch.event_handlers import OnProcessExit,OnProcessStart
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import GroupAction


time_synchronization_value = False
device_ip_value = "192.168.1.200"
mosp_port_value = 2368
difop_port_value = 2369
return_mode_value = 1


def generate_launch_description():
    """
    start_angle = DeclareLaunchArgument("start_angle",default_value="0")
    end_angle = DeclareLaunchArgument("end_angle",default_value="360")
    distance_unit = DeclareLaunchArgument("distance_unit",default_value="0.25")    
    calibration_file = DeclareLaunchArgument("calibration_file",default_value="")
    scan_start_angle = DeclareLaunchArgument("scan_start_angle",default_value="0.0")
    scan_end_angle = DeclareLaunchArgument("scan_end_angle",default_value="36000.0")    
    rpm = DeclareLaunchArgument("rpm",default_value="300.0")    
    max_range = DeclareLaunchArgument("max_range",default_value="150.0f")    
    min_range = DeclareLaunchArgument("min_range",default_value="0.15f")    
    return_mode = DeclareLaunchArgument("return_mode",default_value="1")    
    config_vert = DeclareLaunchArgument("config_vert",default_value="true")    
    print_vert = DeclareLaunchArgument("print_vert",default_value="true")    
    config_vert_file = DeclareLaunchArgument("config_vert_file",default_value="false")    
    degree_mode = DeclareLaunchArgument("degree_mode",default_value="1")    
    echo_second = DeclareLaunchArgument("echo_second",default_value="false")    
    coordinate_opt = DeclareLaunchArgument("coordinate_opt",default_value="true")    
    model = DeclareLaunchArgument("model",default_value="LSC16")    
    time_synchronization  = DeclareLaunchArgument("time_synchronization",default_value=time_synchronization_value)
    """
    node_decoder = Node(
        package="lslidar_c16_decoder",
        executable="lslidar_c16_decoder_node",
        parameters=[
            {
                "start_angle" : LaunchConfiguration("start_angle"),
                "end_angle" : LaunchConfiguration("end_angle"),
                "distance_unit" : LaunchConfiguration("distance_unit"),    
                "calibration_file" : LaunchConfiguration("calibration_file"),
                "scan_start_angle" : LaunchConfiguration("scan_start_angle"),
                "scan_end_angle" : LaunchConfiguration("scan_end_angle"),    
                "rpm" : LaunchConfiguration("rpm"),
                "max_range" : LaunchConfiguration("max_range"),    
                "min_range" : LaunchConfiguration("min_range"),    
                "return_mode" : LaunchConfiguration("return_mode"),    
                "config_vert" : LaunchConfiguration("config_vert"),    
                "print_vert" : LaunchConfiguration("print_vert"),    
                "config_vert_file" : LaunchConfiguration("config_vert_file"),    
                "degree_mode" : LaunchConfiguration("degree_mode"),    
                "echo_second" : LaunchConfiguration("echo_second"),    
                "coordinate_opt" : LaunchConfiguration("coordinate_opt"),    
                "model" : LaunchConfiguration("model"),
                "time_synchronization" : LaunchConfiguration("time_synchronization")
            }
        ]
    )
    """
    frame_id = DeclareLaunchArgument("frame_id", default_value="laser_link")
    device_ip = DeclareLaunchArgument("device_ip", default_value=device_ip_value)
    model = DeclareLaunchArgument("model" , default_value="LSC16")
    rpm = DeclareLaunchArgument("rpm" , default_value="300.0")
    return_mode = DeclareLaunchArgument("return_mode" , default_value=return_mode_value)
    msop_port = DeclareLaunchArgument("msop_port" , default_value=mosp_port_value)
    difop_port = DeclareLaunchArgument("difop_port" , default_value=difop_port_value)
    add_multicast = DeclareLaunchArgument("add_multicast" , default_value="false")
    group_ip = DeclareLaunchArgument("group_ip" , default_value="224.1.1.2")
    time_synchronization = DeclareLaunchArgument("time_synchronization" , default_value=time_synchronization_value)
    """
    node_driver = Node(
        package="lslidar_c16_driver",
        executable="lslidar_c16_driver_node",
        parameters=[
            {
                "frame_id" : "laser_link",
                "device_ip" : device_ip_value,
                "model" : "LSC16",
                "rpm" : 300.0,
                "return_mode" : return_mode_value,
                "msop_port" : mosp_port_value,
                "difop_port" : difop_port_value,
                "add_multicast" : False,
                "group_ip" : "224.1.1.2",
                "time_synchronization" : time_synchronization_value
            }
        ]
    )


    return ld(
        [
            # frame_id,device_ip,model,rpm,return_mode,msop_port,difop_port,add_multicast,group_ip,time_synchronization,
            
            node_driver,
            # node_decoder
        ]
    )

