/*********************************************************************
*
* Author: Livia Parente
*********************************************************************/
#ifndef SENSOR_CONVERSION_H_
#define SENSOR_CONVERSION_H_

#include <vector>
#include <string>

#include <ros/ros.h>

#include <sensor_msgs/Range.h>
#include <sensor_msgs/LaserScan.h>


  /**
   * @class MoveBaseTransform
   * @brief A class that transforms message of sensor_msgs/Range type to sensor_msgs/LaserScan.
   */
  class SensorConv {
    public:
      /**
       * @brief  Constructor for the actions
       * @param name The name of the action
       */
      SensorConv();

      /**
       * @brief  Destructor - Cleans up
       */
      virtual ~SensorConv();

      /**
       * @brief  Performs a control cycle
       * @return True if processing of the goal is done, false otherwise
       */
      void callBack(const sensor_msgs::Range& lidar_msg_);
      void executeCycle();
      


    private:

      ros::Publisher sensor_msg_pub_;
      ros::Subscriber sensor_msg_sub_;
	 // Message to be published
      sensor_msgs::LaserScan new_msg_lidar_;
      float old_nsec; 
      float ranges[20];
 

  };

#endif

