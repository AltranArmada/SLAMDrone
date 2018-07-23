/*********************************************************************
*
* Author: Livia Parente
*********************************************************************/
#ifndef SIMPLE_NAV_GOALS_H_
#define SIMPLE_NAV_GOALS_H_

#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include <actionlib/client/simple_action_client.h>


  /**
   * @class SimpleNavGoals
   * @brief A class that sends the message of 2D Nav Goals to mavros.
   */
  class SimpleNavGoals {
    public:
      /**
       * @brief  Constructor for the actions
       * @param name The name of the action
       */
      SimpleNavGoals();

      /**
       * @brief  Destructor - Cleans up
       */
      virtual ~SimpleNavGoals();

      /**
       * @brief  Performs a control cycle
       * @param cmd_vel_ The velocity command sent
       */

      void PositionCallback(const geometry_msgs::PoseStamped& pos_);
      


    private:

      ros::Publisher pos_pub_;
      ros::Subscriber pos_sub_;
	 // Message to be published
      geometry_msgs::PoseStamped goal;


  };

#endif

