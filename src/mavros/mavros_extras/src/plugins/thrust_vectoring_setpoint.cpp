/**
 * @brief Thrust vectoring message plugin
 * @file vectoring_custom.cpp
 * @author Ricardo Rosales
 *
 * @addtogroup plugin
 * @{
 */
/*
 * Copyright 2023 Ricardo Rosales 
 *
 * This file is part of the mavros package and subject to the license terms
 * in the top-level LICENSE file of the mavros repository.
 * https://github.com/mavlink/mavros/tree/master/LICENSE.mdA
 */

// 1. Send 3d vector for Thrust
// 2. Send 3d vector for torque
// 3. Send the desired angles [1,2,3,4] 

#include <vector>
//MAVROS PLUGINS
 #include <mavros/mavros_plugin.h>
 #include <pluginlib/class_list_macros.h>
//ROS 
#include <geometry_msgs/Wrench.h> // 3d thrust X moment
namespace mavros{
namespace extra_plugins{
class ThrustVectoringSetpointPlugin : public plugin::PluginBase{
public:
    ThrustVectoringSetpointPlugin(): PluginBase(),
    nh("~thrust_vectoring_setpoint")
{};
    void initialize(UAS &uas_)
    {
        PluginBase::initialize(uas_);
    }

    Subscriptions get_subscriptions()
    {
        return {/*RX Disabled*/};
    }
private:
    ros::NodeHandle nh;
    ros::Subscriber thrust_vect_sub;
   
   //std::vector <float> angles(6,0);


   // void thrust_vec_cb(const )

};
}
}
