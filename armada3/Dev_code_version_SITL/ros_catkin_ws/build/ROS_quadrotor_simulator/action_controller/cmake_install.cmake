# Install script for directory: /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src/ROS_quadrotor_simulator/action_controller

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_controller/action" TYPE FILE FILES "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src/ROS_quadrotor_simulator/action_controller/action/MultiDofFollowJointTrajectory.action")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_controller/msg" TYPE FILE FILES
    "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/share/action_controller/msg/MultiDofFollowJointTrajectoryAction.msg"
    "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/share/action_controller/msg/MultiDofFollowJointTrajectoryActionGoal.msg"
    "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/share/action_controller/msg/MultiDofFollowJointTrajectoryActionResult.msg"
    "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/share/action_controller/msg/MultiDofFollowJointTrajectoryActionFeedback.msg"
    "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/share/action_controller/msg/MultiDofFollowJointTrajectoryGoal.msg"
    "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/share/action_controller/msg/MultiDofFollowJointTrajectoryResult.msg"
    "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/share/action_controller/msg/MultiDofFollowJointTrajectoryFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_controller/cmake" TYPE FILE FILES "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/ROS_quadrotor_simulator/action_controller/catkin_generated/installspace/action_controller-msg-paths.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/include/action_controller")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/share/common-lisp/ros/action_controller")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/lib/python2.7/dist-packages/action_controller")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel/lib/python2.7/dist-packages/action_controller")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/ROS_quadrotor_simulator/action_controller/catkin_generated/installspace/action_controller.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_controller/cmake" TYPE FILE FILES "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/ROS_quadrotor_simulator/action_controller/catkin_generated/installspace/action_controller-msg-extras.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_controller/cmake" TYPE FILE FILES
    "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/ROS_quadrotor_simulator/action_controller/catkin_generated/installspace/action_controllerConfig.cmake"
    "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/ROS_quadrotor_simulator/action_controller/catkin_generated/installspace/action_controllerConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_controller" TYPE FILE FILES "/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src/ROS_quadrotor_simulator/action_controller/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

