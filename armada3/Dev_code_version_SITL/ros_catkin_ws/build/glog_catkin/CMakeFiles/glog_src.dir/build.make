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

# Utility rule file for glog_src.

# Include the progress variables for this target.
include glog_catkin/CMakeFiles/glog_src.dir/progress.make

glog_catkin/CMakeFiles/glog_src: glog_catkin/CMakeFiles/glog_src-complete

glog_catkin/CMakeFiles/glog_src-complete: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-install
glog_catkin/CMakeFiles/glog_src-complete: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-mkdir
glog_catkin/CMakeFiles/glog_src-complete: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-download
glog_catkin/CMakeFiles/glog_src-complete: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-update
glog_catkin/CMakeFiles/glog_src-complete: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-patch
glog_catkin/CMakeFiles/glog_src-complete: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-configure
glog_catkin/CMakeFiles/glog_src-complete: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-build
glog_catkin/CMakeFiles/glog_src-complete: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-install
	$(CMAKE_COMMAND) -E cmake_progress_report /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Completed 'glog_src'"
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E make_directory /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/CMakeFiles
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E touch /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/CMakeFiles/glog_src-complete
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E touch /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-done

glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-install: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-build
	$(CMAKE_COMMAND) -E cmake_progress_report /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing install step for 'glog_src'"
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-build && cd ../glog_src/ && make install -j 8
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-build && /usr/bin/cmake -E touch /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-install

glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-mkdir:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Creating directories for 'glog_src'"
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E make_directory /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E make_directory /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-build
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E make_directory /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E make_directory /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/tmp
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E make_directory /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E make_directory /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && /usr/bin/cmake -E touch /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-mkdir

glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-download: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-urlinfo.txt
glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-download: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-mkdir
	$(CMAKE_COMMAND) -E cmake_progress_report /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing download step (download, verify and extract) for 'glog_src'"
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src && /usr/bin/cmake -P /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/download-glog_src.cmake
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src && /usr/bin/cmake -P /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/verify-glog_src.cmake
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src && /usr/bin/cmake -P /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/extract-glog_src.cmake
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src && /usr/bin/cmake -E touch /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-download

glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-update: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-download
	$(CMAKE_COMMAND) -E cmake_progress_report /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "No update step for 'glog_src'"
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src && /usr/bin/cmake -E touch /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-update

glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-patch: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-download
	$(CMAKE_COMMAND) -E cmake_progress_report /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing patch step for 'glog_src'"
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src && patch -p0 < /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src/fix-unused-typedef-warning.patch
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src && /usr/bin/cmake -E touch /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-patch

glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-configure: glog_catkin/glog_src-prefix/tmp/glog_src-cfgcmd.txt
glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-configure: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-update
glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-configure: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-patch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing configure step for 'glog_src'"
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-build && cd ../glog_src/ && eval /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src/get-newest-config-guess.sh && ./configure --with-pic --with-gflags=/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel --prefix=/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/devel
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-build && /usr/bin/cmake -E touch /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-configure

glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-build: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-configure
	$(CMAKE_COMMAND) -E cmake_progress_report /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing build step for 'glog_src'"
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-build && cd ../glog_src/ && make -j 8
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-build && /usr/bin/cmake -E touch /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-build

glog_src: glog_catkin/CMakeFiles/glog_src
glog_src: glog_catkin/CMakeFiles/glog_src-complete
glog_src: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-install
glog_src: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-mkdir
glog_src: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-download
glog_src: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-update
glog_src: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-patch
glog_src: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-configure
glog_src: glog_catkin/glog_src-prefix/src/glog_src-stamp/glog_src-build
glog_src: glog_catkin/CMakeFiles/glog_src.dir/build.make
.PHONY : glog_src

# Rule to build all files generated by this target.
glog_catkin/CMakeFiles/glog_src.dir/build: glog_src
.PHONY : glog_catkin/CMakeFiles/glog_src.dir/build

glog_catkin/CMakeFiles/glog_src.dir/clean:
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin && $(CMAKE_COMMAND) -P CMakeFiles/glog_src.dir/cmake_clean.cmake
.PHONY : glog_catkin/CMakeFiles/glog_src.dir/clean

glog_catkin/CMakeFiles/glog_src.dir/depend:
	cd /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src/glog_catkin /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin /home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/build/glog_catkin/CMakeFiles/glog_src.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : glog_catkin/CMakeFiles/glog_src.dir/depend

