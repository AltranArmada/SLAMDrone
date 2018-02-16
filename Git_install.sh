mkdir -p ~/armada/Dev_code_version_SITL/ros_catkin_ws/src
cd ~/armada/Dev_code_version_SITL/ros_catkin_ws/src
#git init 
#git submodule add   https://github.com/erlerobot/ardupilot_sitl_gazebo_plugin
git submodule add https://github.com/tu-darmstadt-ros-pkg/hector_gazebo/
git submodule add -b sonar_plugin https://github.com/erlerobot/rotors_simulator
git submodule add https://github.com/PX4/mav_comm.git
git submodule add https://github.com/ethz-asl/glog_catkin.git
git submodule add https://github.com/catkin/catkin_simple.git
git submodule add https://github.com/erlerobot/mavros.git
git submodule add -b indigo-devel https://github.com/ros-simulation/gazebo_ros_pkgs.git
git submodule add https://github.com/erlerobot/gazebo_cpp_examples
git submodule add https://github.com/erlerobot/gazebo_python_examples
git submodule add https://github.com/wilselby/ROS_quadrotor_simulator
cd ~/armada/Dev_code_version_SITL
git submodule add -b gazebo https://github.com/erlerobot/ardupilot
