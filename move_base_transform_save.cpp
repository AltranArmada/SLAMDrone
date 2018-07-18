/* Author: Livia Parente
* 
* This node is used to remap the message of type geometry_msgs::Twist published in the cmd_vel topic from the move_base node
* to a message of type geometry_msgs::TwistStamped to be compatible with the subscriber /mavros/setpoint_velocity/cmd_vel.
* 
* Published node : cmd_vel_trans
* Subscribes to : cmd_vel
*********************************************************************/
#include <move_base/move_base_transform.h>

#include <geometry_msgs/Twist.h>
#include <geometry_msgs/TwistStamped.h>


   MoveBaseTransform::MoveBaseTransform()
   {
  	ros::NodeHandle nh;
	
	nh.param("controller_frequency", controller_frequency_, 20.0);

  	this->vel_sub_ = nh.subscribe("cmd_vel_bkp", 1, &MoveBaseTransform::callBack,this);
	
	ros::NodeHandle n;
    	this->vel_transform_pub_ = n.advertise<geometry_msgs::TwistStamped>("cmd_vel_trans", 1);


   }

   MoveBaseTransform::~MoveBaseTransform(){}

  void MoveBaseTransform::callBack(const geometry_msgs::Twist& cmd_vel_)
  { 
	float linear_x = cmd_vel_.linear.x;
	float linear_y = cmd_vel_.linear.y;
	float linear_z = cmd_vel_.linear.z;
	float angular_x = cmd_vel_.angular.x;
	float angular_y = cmd_vel_.angular.y;
	float angular_z = cmd_vel_.angular.z;

	float vtheta = cmd_vel_.angular.z;
	float theta = vtheta*0.05;
	float cos_theta = cos(theta);
	float sin_theta = sin(theta);


	//this->msg_vel_.twist.linear.x = cmd_vel_.linear.x*cos_theta -cmd_vel_.linear.y*sin_theta; 
	//this->msg_vel_.twist.linear.y = cmd_vel_.linear.x*sin_theta + vtheta*0.2*cos_theta;

	//float linear_x = cmd_vel_.linear.x + vtheta*0.2*cos_theta;  
	//float linear_y = cmd_vel_.linear.y + vtheta*0.2*sin_theta;


	// DWA_local_planner transform
	//this->msg_vel_.twist.linear.x = cmd_vel_.linear.x + vtheta*0.2*sin_theta; 
	//this->msg_vel_.twist.linear.y = cmd_vel_.linear.y + vtheta*0.2*sin_theta;
	//this->msg_vel_.twist.linear.x = linear_x * cosf(vtheta) - linear_y * sinf(vtheta);
	//this->msg_vel_.twist.linear.y = +linear_x * sin(vtheta) - linear_y * cos(vtheta);

	//this->msg_vel_.twist.linear.x = linear_x * cosf(vtheta) + linear_y * sinf(vtheta);
	//this->msg_vel_.twist.linear.y = -linear_x * sin(vtheta) + linear_y * cos(vtheta);
	this->msg_vel_.twist.linear.x = linear_x;
	this->msg_vel_.twist.linear.y = linear_y;
	this->msg_vel_.twist.linear.z = linear_z;
	this->msg_vel_.twist.angular.x = angular_x;
	this->msg_vel_.twist.angular.y = angular_y;
	this->msg_vel_.twist.angular.z = angular_z;

	//TEB_local_planner transform
	float theta2 = cmd_vel_.angular.z;
	//this->msg_vel_.twist.linear.x = cmd_vel_.linear.x*cos(theta2) + cmd_vel_.linear.y*sin(theta2); 
	//this->msg_vel_.twist.linear.y = -cmd_vel_.linear.x*sin(theta2) + cmd_vel_.linear.y*cos(theta2); 
	//this->msg_vel_.twist.linear.z = cmd_vel_.linear.z;

	// The twist part of the message will take the value of the message received
	//this->msg_vel_.twist.angular.z = cos(theta);	
	//this->msg_vel_.twist.angular.y = sin(theta);

	this->msg_vel_.header.stamp = ros::Time::now();	// Creates a time stamp 
	this->msg_vel_.header.frame_id = "/world";

	
	
	this->vel_transform_pub_.publish(this->msg_vel_);		// Publishes the message
	
	
 }

  void MoveBaseTransform::executeCycle()
  {
	ros::Rate r(800);
	 while (ros::ok())
	{
		ros::spinOnce();			

    		r.sleep();				


	}
    	
  }

int
main(int argc, char** argv)
{

  ros::init(argc, argv, "move_base_trans"); 

  MoveBaseTransform *move_base_trans = new MoveBaseTransform();

  move_base_trans->executeCycle();

  // run using ROS input
    	ros::spin();

  // Without this, our boost locks are not shut down nicely
 // move_base_trans.reset();

  return(0);
}

