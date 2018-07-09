#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include <actionlib/client/simple_action_client.h>
#include <simple_navigation_goals/simple_navigation_goals.h>

//typedef actionlib::SimpleActionClient<geometry_msgs::PoseStamped> MoveBaseClient;

SimpleNavGoals::SimpleNavGoals(){
  	ros::NodeHandle nh1;
  	this->pos_pub_ = nh1.advertise<geometry_msgs::PoseStamped>("set_position",1);
	ros::NodeHandle nh2;
  	this->pos_sub_ = nh2.subscribe("move_base_simple/goal",1,&SimpleNavGoals::Callback, this);


   }

SimpleNavGoals::~SimpleNavGoals(){}


void SimpleNavGoals::Callback(const geometry_msgs::PoseStamped& pos_){
	

  this->goal.header.frame_id = "world";
  this->goal.header.stamp = ros::Time::now();

  this->goal.pose.position.x = pos_.pose.position.x;
  this->goal.pose.position.y = pos_.pose.position.y;
  this->goal.pose.position.z = 2.0;

  this->goal.pose.orientation.x = pos_.pose.orientation.x;
  this->goal.pose.orientation.y = pos_.pose.orientation.x;
  this->goal.pose.orientation.z = pos_.pose.orientation.x;

  this->pos_pub_.publish(goal);
  ROS_INFO("Sending goal");

  
}

int main(int argc, char** argv){
  ros::init(argc, argv, "simple_navigation_goals");

  SimpleNavGoals *simple_nav_goals = new SimpleNavGoals::SimpleNavGoals();
  
  ros::Rate loop_rate(20);

  ros::spinOnce();

  loop_rate.sleep();

  return 0;
}

