#include <ros/ros.h>
#include <dynamixel_workbench_msgs/DynamixelState.h>
#include <dynamixel_workbench_msgs/DynamixelStateList.h>

void callback_current(const dynamixel_workbench_msgs::DynamixelState::ConstPtr& msg){
  //ROS_INFO("%d", msg -> id);
  //ROS_INFO("%d", msg -> present_position);
  //ROS_INFO("%d", msg -> present_velocity);
  ROS_INFO("%d", msg -> present_current);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber");
  ros::NodeHandle nh;
  ros::Subscriber sub = nh.subscribe("DynamixelState", 1, callback_current);

  ros::spin();
}
