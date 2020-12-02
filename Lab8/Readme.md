# Assignment 8
Modify some parameters (reward function; qlearn hyper parameters; number of episodes, step; sample angle) and observe how it affects the training phase. (https://github.com/fenixkz/rl_ws).   

## For ROS Noetic Ninjemys only
1. You need to add some changes in `gazebo.launch` file. Find these text: `param name="robot_description"` and replace `$(find xacro)/xacro.py` on `$(find xacro)/xacro --inorder`. This will solve problem with gazebo launch. 

1. Also, you need to delete `#include <moveit_visual_tools/moveit_visual_tools.h>`, because it's not required in Noetic.

## Install gym
```javascript
pip install gym 
or
pip2 install gym
```

## Download the workspace and compile it
```javascript
cd rl_ws
catkin_make
```

## Source your setup.bash
```javascript
source devel/setup.bash
```

## Launch Gazebo
 ```javascript
roslaunch gazebo_robot gazebo.launch
```

## Launch RVIZ
 ```javascript
roslaunch moveit_package moveit_planning_execution.launch
```

## Observe results from output imag
![lab8 movie_02028](https://user-images.githubusercontent.com/67557966/100883668-68be2380-34d2-11eb-8baa-c9d54e699741.jpg)

## Good Luck!

