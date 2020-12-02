# Assignment 3 
Configure your MoveIt library. You can find detailed installation steps on official website. In my case I used [ros_snake_robot package](https://github.com/fenixkz/ros_snake_robot).   

## For ROS Noetic Ninjemys only
1. You need to add some changes in `gazebo.launch` file. Find these text: `param name="robot_description"` and replace `$(find xacro)/xacro.py` on `$(find xacro)/xacro --inorder`. This will solve problem with gazebo launch. 

1. Also, you need to delete `#include <moveit_visual_tools/moveit_visual_tools.h>`, because it's not required in Noetic.

## Source your setup.bash
```javascript
source devel/setup.bash
```

## Launch Gazebo
 ```javascript
roslaunch gazebo_robot gazebo.launch
```

## Launch RQT
 ```javascript
rqt
```

## Check step response
 ```javascript
rostopic pub /robot/joint5_position_controller/command std_msgs/Float64 "data = 1"
```
## Square wave
For P = 25000
[![Watch the video](https://ibb.co/3k4ddLW)]

## Node that draws a circle

[![Watch the video](http://i3.ytimg.com/vi/QPuplEMZ1ew/hqdefault.jpg)](https://www.youtube.com/watch?v=QPuplEMZ1ew)

## Node that draws a rectangle

[![Watch the video](https://img.youtube.com/vi/Yplz1VXiJ0M/hqdefault.jpg)](https://www.youtube.com/watch?v=Yplz1VXiJ0M)

