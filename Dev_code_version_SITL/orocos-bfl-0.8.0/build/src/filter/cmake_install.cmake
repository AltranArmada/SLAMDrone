# Install script for directory: /home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Debug")
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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/bfl/filter" TYPE FILE FILES
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/filter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/filter.cpp"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/particlefilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/particlefilter.cpp"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/bootstrapfilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/bootstrapfilter.cpp"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/asirfilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/asirfilter.cpp"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/kalmanfilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/extendedkalmanfilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/iteratedextendedkalmanfilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/EKparticlefilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/SRiteratedextendedkalmanfilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/innovationCheck.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/histogramfilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/histogramfilter.cpp"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/mixtureParticleFilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/mixtureParticleFilter.cpp"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/mixtureBootstrapFilter.h"
    "/home/user/Dev_code_version_SITL/orocos-bfl-0.8.0/src/filter/mixtureBootstrapFilter.cpp"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

