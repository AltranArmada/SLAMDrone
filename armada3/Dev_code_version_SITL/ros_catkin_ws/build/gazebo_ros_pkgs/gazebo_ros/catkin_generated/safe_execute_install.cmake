execute_process(COMMAND "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/gazebo_ros_pkgs/gazebo_ros/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/gazebo_ros_pkgs/gazebo_ros/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
