docker run -it --privileged --device=/dev/ttyUSB0\
 	     -v ~/armada:/home/user:rw \
	     -v /tmp/.X11-unix:/tmp/.X11-unix:rw \
	     -e DISPLAY=unix$DISPLAY \
	     --name=container_simulation cutkiller09/armada:part3 /bin/bash
