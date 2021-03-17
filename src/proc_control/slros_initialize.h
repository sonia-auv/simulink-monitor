#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block Test_Traj/Subscribe
extern SimulinkSubscriber<sonia_common::AddPose, SL_Bus_Test_Traj_sonia_common_AddPose> Sub_Test_Traj_124;

// For Block Test_Traj/Subscribe1
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_Test_Traj_std_msgs_Bool> Sub_Test_Traj_109;

// For Block Test_Traj/Subscribe2
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_Test_Traj_std_msgs_Bool> Sub_Test_Traj_110;

void slros_node_init(int argc, char** argv);

#endif
