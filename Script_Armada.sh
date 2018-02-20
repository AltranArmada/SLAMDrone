mkdir .gazebo/models
cp -rf erle_gazebo_models/* .gazebo/models
echo "source /opt/ros/indigo/setup.bash" >> ~/.bashrc
source ~/.bashrc
xhost local::root
source ~/Dev_code_version_SITL/ros_catkin_ws/devel/setup.bash
