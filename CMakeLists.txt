cmake_minimum_required(VERSION 2.8.3)
project(dynamixel_current_FD)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  dynamixel_workbench_msgs
)

catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS roscpp rospy
)

include_directories(
 include
  ${catkin_INCLUDE_DIRS}
)

add_executable(dynamixel_current_FD src/subscriber.cpp)

add_dependencies(dynamixel_current_FD ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

target_link_libraries(dynamixel_current_FD ${catkin_LIBRARIES})
