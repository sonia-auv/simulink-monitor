//
// Created by jeremie on 10/17/16.
//

#ifndef PROC_CONTROL_THRUSTER_H
#define PROC_CONTROL_THRUSTER_H


#include <array>
#include <ros/ros.h>
#include <sonia_msgs/ThrusterMsg.h>

class Thruster {
  public:
  static std::array<double,101> POSITIVE_LINEAR_LUT;

  Thruster(const std::string &id) : linear_effort_({0.0}),
                                    rotationnal_effort_({0.0}),
                                    id_(id)
  {
    ros::NodeHandle n;
    std::string pub_name = std::string("/provider_can/") + id_ + std::string("_msgs");
    publisher_ = n.advertise<sonia_msgs::ThrusterMsg>(pub_name, 100);
  };

  void Publish(double thrust_value) const;

  void SetFrom6AxisArray(const std::array<double, 6> &array_axis);
  std::array<double, 3> GetLinearEffort() const ;
  std::array<double, 3> GetRotationnalEffort() const ;

  std::string GetID() const {return id_;}

  double LinearizeForce(double force) const;

  private:
  std::array<double, 3> linear_effort_;
  std::array<double, 3> rotationnal_effort_;
  ros::Publisher publisher_;
  std::string id_;
};

inline std::array<double, 3> Thruster::GetLinearEffort() const
{
  return linear_effort_;
};

inline std::array<double, 3> Thruster::GetRotationnalEffort() const
{
  return rotationnal_effort_;
};

// Using Louis-Phillippe's formula (from is PFE) we linearize the exponential response of the thruster
// by applying a inverse power fonction
// Ex if the conversion from % to total force is x^2, we apply x^1/2 so that 50 % == max force/2...
inline double Thruster::LinearizeForce(double force) const
{
  return 11.9 * std::pow(force,0.45106) + 5;
}

inline void Thruster::SetFrom6AxisArray(const std::array<double, 6> &array_axis)
{
  std::copy(array_axis.begin(), array_axis.begin() + 3, linear_effort_.begin());
  std::copy(array_axis.begin() + 3, array_axis.end(), rotationnal_effort_.begin());

  for(int i = 0; i < 3; i++)
  {
    linear_effort_[i] ;
    rotationnal_effort_[i];
  }
}

inline void Thruster::Publish(double thrust_value) const
{
  sonia_msgs::ThrusterMsg msg;
  msg.speed = (short)LinearizeForce(thrust_value);
  publisher_.publish(msg);
}

#endif //PROC_CONTROL_THRUSTER_H
