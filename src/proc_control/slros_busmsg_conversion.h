#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>
#include <sonia_common/AddPose.h>
#include <std_msgs/Bool.h>
#include "Test_Traj_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_Test_Traj_geometry_msgs_Point const* busPtr);
void convertToBus(SL_Bus_Test_Traj_geometry_msgs_Point* busPtr, geometry_msgs::Point const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_Test_Traj_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_Test_Traj_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(sonia_common::AddPose* msgPtr, SL_Bus_Test_Traj_sonia_common_AddPose const* busPtr);
void convertToBus(SL_Bus_Test_Traj_sonia_common_AddPose* busPtr, sonia_common::AddPose const* msgPtr);

void convertFromBus(std_msgs::Bool* msgPtr, SL_Bus_Test_Traj_std_msgs_Bool const* busPtr);
void convertToBus(SL_Bus_Test_Traj_std_msgs_Bool* busPtr, std_msgs::Bool const* msgPtr);


#endif
