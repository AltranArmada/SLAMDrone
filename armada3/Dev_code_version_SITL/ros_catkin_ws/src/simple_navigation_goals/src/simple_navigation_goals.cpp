#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

int main(int argc, char** argv){
  ros::init(argc, argv, "simple_navigation_goals");
  ros::NodeHandle nh;

  int n;
  float x[n-1], y[n-1];


  nh.getParam("/number_points", n);

  nh.getParam("/point_x1", x[0]);
  nh.getParam("/point_y1", y[0]);

  nh.getParam("/point_x2", x[1]);
  nh.getParam("/point_y2", y[1]);
    
  nh.getParam("/point_x3", x[2]);
  nh.getParam("/point_y3", y[2]);

  nh.getParam("/point_x4", x[3]);
  nh.getParam("/point_y4", y[3]);
  
  

  //tell the action client that we want to spin a thread by default
  MoveBaseClient ac("move_base", true);

  //wait for the action server to come up
  while(!ac.waitForServer(ros::Duration(5.0))){
    ROS_INFO("Waiting for the move_base action server to come up");
  }

  move_base_msgs::MoveBaseGoal goal;

  //we'll send a goal to the robot to move 1 meter forward
  for(int i=0;i<=n;i++){
    goal.target_pose.header.frame_id = "base_link";
    goal.target_pose.header.stamp = ros::Time::now();

    goal.target_pose.pose.position.x = x[i];
    goal.target_pose.pose.position.y = y[i];
    goal.target_pose.pose.orientation.w = 1.0;

    ROS_INFO("Sending goal");
    ac.sendGoal(goal);

    ac.waitForResult();

    if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
    ROS_INFO("Hooray, the base moved to the goal position number %d", i+1);
    else
    ROS_INFO("The base failed to move to the goal position number %d for some reason", i+1);
  }  

  

  return 0;
}