#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "Test_Traj";

// For Block Test_Traj/Subscribe
SimulinkSubscriber<sonia_common::AddPose, SL_Bus_Test_Traj_sonia_common_AddPose> Sub_Test_Traj_124;

// For Block Test_Traj/Subscribe1
SimulinkSubscriber<std_msgs::Bool, SL_Bus_Test_Traj_std_msgs_Bool> Sub_Test_Traj_109;

// For Block Test_Traj/Subscribe2
SimulinkSubscriber<std_msgs::Bool, SL_Bus_Test_Traj_std_msgs_Bool> Sub_Test_Traj_110;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

