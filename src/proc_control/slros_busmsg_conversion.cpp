#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_Test_Traj_geometry_msgs_Point and geometry_msgs::Point

void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_Test_Traj_geometry_msgs_Point const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_Test_Traj_geometry_msgs_Point* busPtr, geometry_msgs::Point const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_Test_Traj_geometry_msgs_Vector3 and geometry_msgs::Vector3

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_Test_Traj_geometry_msgs_Vector3 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_Test_Traj_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_Test_Traj_sonia_common_AddPose and sonia_common::AddPose

void convertFromBus(sonia_common::AddPose* msgPtr, SL_Bus_Test_Traj_sonia_common_AddPose const* busPtr)
{
  const std::string rosMessageType("sonia_common/AddPose");

  msgPtr->fine =  busPtr->Fine;
  msgPtr->frame =  busPtr->Frame;
  convertFromBus(&msgPtr->orientation, &busPtr->Orientation);
  convertFromBus(&msgPtr->position, &busPtr->Position);
  msgPtr->speed =  busPtr->Speed;
}

void convertToBus(SL_Bus_Test_Traj_sonia_common_AddPose* busPtr, sonia_common::AddPose const* msgPtr)
{
  const std::string rosMessageType("sonia_common/AddPose");

  busPtr->Fine =  msgPtr->fine;
  busPtr->Frame =  msgPtr->frame;
  convertToBus(&busPtr->Orientation, &msgPtr->orientation);
  convertToBus(&busPtr->Position, &msgPtr->position);
  busPtr->Speed =  msgPtr->speed;
}


// Conversions between SL_Bus_Test_Traj_std_msgs_Bool and std_msgs::Bool

void convertFromBus(std_msgs::Bool* msgPtr, SL_Bus_Test_Traj_std_msgs_Bool const* busPtr)
{
  const std::string rosMessageType("std_msgs/Bool");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_Test_Traj_std_msgs_Bool* busPtr, std_msgs::Bool const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Bool");

  busPtr->Data =  msgPtr->data;
}

