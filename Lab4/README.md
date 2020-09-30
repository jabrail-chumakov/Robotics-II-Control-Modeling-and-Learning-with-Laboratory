# Assignment 4 
Configure your MoveIt library. You can find detailed installation steps on official website. In my case I used [ros_snake_robot package](https://github.com/fenixkz/ros_snake_robot).   

**For ROS Noetic Ninjemys only**: 
1. you need to add some changes in `<gazebo.launch>` file. Find these text: `<param name="robot_description">` and replace `<$(find xacro)/xacro.py>` on `<$(find xacro)/xacro --inorder>`. This will solve problem with gazebo launch. 

1. Also, you need to delete `<#include <moveit_visual_tools/moveit_visual_tools.h>>`, because it's not required in Noetic.


