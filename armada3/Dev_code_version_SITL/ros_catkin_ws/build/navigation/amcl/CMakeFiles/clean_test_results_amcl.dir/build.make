# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build

# Utility rule file for clean_test_results_amcl.

# Include the progress variables for this target.
include navigation/amcl/CMakeFiles/clean_test_results_amcl.dir/progress.make

navigation/amcl/CMakeFiles/clean_test_results_amcl:
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/navigation/amcl && /usr/bin/python /opt/ros/indigo/share/catkin/cmake/test/remove_test_results.py /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/test_results/amcl

clean_test_results_amcl: navigation/amcl/CMakeFiles/clean_test_results_amcl
clean_test_results_amcl: navigation/amcl/CMakeFiles/clean_test_results_amcl.dir/build.make
.PHONY : clean_test_results_amcl

# Rule to build all files generated by this target.
navigation/amcl/CMakeFiles/clean_test_results_amcl.dir/build: clean_test_results_amcl
.PHONY : navigation/amcl/CMakeFiles/clean_test_results_amcl.dir/build

navigation/amcl/CMakeFiles/clean_test_results_amcl.dir/clean:
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/navigation/amcl && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_amcl.dir/cmake_clean.cmake
.PHONY : navigation/amcl/CMakeFiles/clean_test_results_amcl.dir/clean

navigation/amcl/CMakeFiles/clean_test_results_amcl.dir/depend:
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src/navigation/amcl /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/navigation/amcl /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/navigation/amcl/CMakeFiles/clean_test_results_amcl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : navigation/amcl/CMakeFiles/clean_test_results_amcl.dir/depend
