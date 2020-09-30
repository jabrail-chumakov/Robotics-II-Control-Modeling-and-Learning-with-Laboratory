# Assignment 4 
Configure your MoveIt library. You can find detailed installation steps on official website. In my case I used [ros_snake_robot package](https://github.com/fenixkz/ros_snake_robot).   

## For ROS Noetic Ninjemys only
1. You need to add some changes in `<gazebo.launch>` file. Find these text: `<param name="robot_description">` and replace `<$(find xacro)/xacro.py>` on `<$(find xacro)/xacro --inorder>`. This will solve problem with gazebo launch. 

1. Also, you need to delete `<#include <moveit_visual_tools/moveit_visual_tools.h>>`, because it's not required in Noetic.

## Source your setup.bash**
```javascript
source devel/setup.bash
```

## Launch Gazebo**
 ```javascript
roslaunch gazebo_robot moveit_gazebo.launch
```

## Launch RVIZ**
 ```javascript
roslaunch moveit_package moveit_planning_execution.launch
```

## Run your node**
 ```javascript
rosrun lab4catkin lab4catkin
```
## Node moving on a straight line
Don't forget to change name of the test file on test_(movement_type).cpp and executables in CMakeLists.txt

Below you can watch a video on how manipulator moves along a straight line

[![Watch the video](http://i3.ytimg.com/vi/6v5-ZtErJSk/hqdefault.jpg)](https://www.youtube.com/watch?v=6v5-ZtErJSk&feature=youtu.be)

## Node that draws a circle

[![Watch the video](http://i3.ytimg.com/vi/QPuplEMZ1ew/hqdefault.jpg)](https://www.youtube.com/watch?v=QPuplEMZ1ew)

## Node that draws a rectangle

[![Watch the video](https://img.youtube.com/vi/Yplz1VXiJ0M/sddefault.jpg)](https://www.youtube.com/watch?v=Yplz1VXiJ0M)

