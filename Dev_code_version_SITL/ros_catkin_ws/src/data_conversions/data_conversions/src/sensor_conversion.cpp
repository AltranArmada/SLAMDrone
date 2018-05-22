/* Author: Livia Parente
* 
* This node is used to remap the message of type geometry_msgs::Twist published in the cmd_vel topic from the move_base node
* to a message of type geometry_msgs::TwistStamped to be compatible with the subscriber /mavros/setpoint_velocity/cmd_vel.
* 
* Published node : cmd_vel_trans
* Subscribes to : cmd_vel
*********************************************************************/
#include <data_conversions/sensor_conversion.h>

#include <sensor_msgs/Range.h>
#include <sensor_msgs/LaserScan.h>



   SensorConv::SensorConv()
   {
  	ros::NodeHandle nh;
  	this->sensor_msg_sub_ = nh.subscribe("lidar", 1, &SensorConv::callBack,this);
	
	ros::NodeHandle n;
    	this->sensor_msg_pub_ = n.advertise<sensor_msgs::LaserScan>("lidar_scan", 1);


   }

   SensorConv::~SensorConv(){}

  void SensorConv::callBack(const sensor_msgs::Range& lidar_msg_)
  { 
	//this->new_msg_lidar_.header = lidar_msg_.header;		// Passes the time stamp to the new message
	//ros::Time scan_time = ros::Time::now();

	int num_readings = 40;						// Number of range values buffered 

    	//this->new_msg_lidar_.header.stamp = scan_time;			// Creates a stamp 
	this->new_msg_lidar_.header.stamp = lidar_msg_.header.stamp;			// Creates a stamp 
    	this->new_msg_lidar_.header.frame_id = "lidar_link";

	this->new_msg_lidar_.angle_min = -(lidar_msg_.field_of_view)/2;  // Generates angles min and max
	this->new_msg_lidar_.angle_max = (lidar_msg_.field_of_view)/2;

	this->new_msg_lidar_.range_min = lidar_msg_.min_range;		// Passes range values directly
	this->new_msg_lidar_.range_max = lidar_msg_.max_range;
	
	
	
	for(int j = 0; j < num_readings; j++)				// Shifts the ranges vector to the right 
	{
		ranges[j+1] = ranges[j];
	}
	ranges[0] = lidar_msg_.range;					// Registers the new range value 
	
	this->new_msg_lidar_.scan_time = (lidar_msg_.header.stamp.nsec - this->old_nsec)*1000;		// Generates scan_time and time_increment values
	this->new_msg_lidar_.time_increment = (lidar_msg_.header.stamp.nsec - this->old_nsec)*1000;
	this->old_nsec = lidar_msg_.header.stamp.nsec;

	this->new_msg_lidar_.ranges.resize(num_readings);		// Resizes the ranges vector

	for(unsigned int i = 0; i < num_readings; ++i)			// Passes all ranges values to the ranges vector in the message
	{
      		this->new_msg_lidar_.ranges[i] = ranges[i];
    	}

	this->sensor_msg_pub_.publish(this->new_msg_lidar_);		// Publishes the message
	
	
 }

  void SensorConv::executeCycle()
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

  ros::init(argc, argv, "sensor_conversion"); 

  SensorConv *sensor_conv = new SensorConv();

  sensor_conv->executeCycle();

  // run using ROS input
    	ros::spin();


  return(0);
}


