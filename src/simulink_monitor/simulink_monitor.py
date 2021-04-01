#! /usr/bin/env python2
import rospy

class SimulinkMonitor:

    def __init__(self):
        rospy.init_node('simulink_monitor')
        rospy.spin()


if __name__ == '__main__':
    SimulinkMonitor()