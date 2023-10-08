cmake_minimum_required(VERSION 3.8)
project(lslidar_c16_driver)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(lslidar_c16_msg REQUIRED)
find_package(pcl_conversions REQUIRED)
find_package(PCL REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(PCAP REQUIRED)
find_library(PCAP_LIBRARY pcap)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)


add_definitions(${PCL_DEFINITIONS})
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})

add_executable(lslidar_c16_driver_node 
               src/lslidar_c16_driver_node.cpp
               src/lslidar_c16_driver.cpp
               src/input.cpp)

target_include_directories(lslidar_c16_driver_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

if(PCAP_LIBRARY)
    target_link_libraries(lslidar_c16_driver_node ${PCAP_LIBRARY})
else()
    message(FATAL_ERROR "pcap library not found")
endif()
target_compile_features(lslidar_c16_driver_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

ament_target_dependencies(
  lslidar_c16_driver_node
  "rclcpp"
  "tf2"
  "tf2_ros"
  "pcl_conversions"
  "lslidar_c16_msg"
  "PCAP"
)

install(TARGETS lslidar_c16_driver_node
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
