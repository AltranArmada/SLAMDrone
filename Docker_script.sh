docker run -it --privileged \
 	     -v /home/europe.corp.altran.com/seloisel/armada:/home/user:rw \
	     -v /tmp/.X11-unix:/tmp/.X11-unix:rw \
	     -e DISPLAY=unix$DISPLAY \
	     --name=container_simulation cutkiller09/armada:part1 /bin/bash
