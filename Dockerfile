FROM ubuntu:14.04

# Set Label
LABEL vendor=ALTRAN \
      com.example.is-beta= \
      com.example.is-production="" \
      com.example.version="0.0.1-beta" \
      com.example.release-date="2018-02-06" 

RUN sudo apt-get update

#Install nano 
RUN sudo apt-get install nano -y

#Install Canberra
RUN sudo apt-get install libcanberra-gtk3-module -y

# Install base package
RUN sudo apt-get install gawk make git curl cmake -y
RUN sudo apt-get install gnome-terminal -y

#Install MavProxy
RUN sudo apt-get install g++ python-pip python-matplotlib python-serial python-wxgtk2.8 python-scipy python-opencv python-numpy python-pyparsing ccache realpath libopencv-dev -y

RUN sudo pip install future
RUN sudo apt-get install libxml2-dev libxslt1-dev -y
RUN sudo pip2 install pymavlink catkin_pkg --upgrade
RUN sudo pip install MAVProxy==1.5.2
RUN sudo apt-get install python-pygame -y

#Install Jostick
RUN sudo sed -i 's/SDL_JoystickGetAxis value/\x00DL_JoystickGetAxis value/g' /usr/lib/python2.7/dist-packages/pygame/joystick.so

#Install ROS-Indigo
RUN sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
RUN sudo apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net --recv-key 0xB01FA116
RUN sudo apt-get update

RUN sudo apt-get install ros-indigo-ros-base -y
RUN sudo rosdep init
RUN rosdep update
RUN echo "source /opt/ros/indigo/setup.bash" >> ~/.bashrc
RUN /bin/bash -c "source /root/.bashrc"
 
RUN sudo apt-get install -y python-rosinstall \
			ros-indigo-octomap-msgs    \
                        ros-indigo-joy             \
                        ros-indigo-geodesy         \
                        ros-indigo-octomap-ros     \
                        ros-indigo-mavlink         

RUN sudo apt-get install -y ros-indigo-control-toolbox \
                        ros-indigo-transmission-interface \
                        ros-indigo-joint-limits-interface \
			ros-indigo-moveit 

RUN sudo apt-get install -y ros-indigo-move-base \
			ros-indigo-mavros \
			ros-indigo-mavros-extras \
			ros-indigo-rviz \
			ros-indigo-slam-gmapping \
		        unzip -y

#Install GAZEBO
RUN sudo sh -c 'echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable `lsb_release -cs` main" > /etc/apt/sources.list.d/gazebo-stable.list'
RUN apt-get install -y wget && wget http://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -
RUN sudo apt-get update
RUN sudo apt-get remove .*gazebo.* '.*sdformat.*' '.*ignition-math.*' && sudo apt-get update && sudo apt-get install gazebo7 libgazebo7-dev drcsim7 -y
RUN mkdir -p ~/.gazebo/models
RUN cd ~/.gazebo/models
RUN git clone https://github.com/erlerobot/erle_gazebo_models


# Install Open-CV
RUN sudo apt-get install libopencv-dev \
 			 python-opencv

# Install some packages ...... ???? !!!!
RUN sudo apt-get -y update && sudo apt-get -y upgrade
RUN sudo apt-get -y install libicu-dev \
                 freeglut3 \
                 freeglut3-dev \
                 libgstreamer0.10-dev 
RUN sudo apt-get -y install libgstreamer-plugins-base0.10-dev libxine-dev

# Install Aruco
RUN wget http://sourceforge.net/projects/aruco/files/OldVersions/aruco-1.3.0.tgz

# Install xhost
RUN sudo apt-get install -y xauth \
			    xorg \
			    openbox

RUN tar zxvf aruco-1.3.0.tgz
WORKDIR ./aruco-1.3.0
RUN mkdir build
WORKDIR ./build
RUN cmake ..
RUN make
RUN sudo make install
WORKDIR ../..

ENV HOME /home/user/
CMD /bin/bash



