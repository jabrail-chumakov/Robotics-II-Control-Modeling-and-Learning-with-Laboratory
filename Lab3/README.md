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
## Square wave for high P
![square max](https://user-images.githubusercontent.com/67557966/100879003-b6379200-34cc-11eb-8f7e-fe85dec201f8.jpg)

## Sin wave for high P
![28521080-682e-4608-a61e-916bc1bb42af](https://user-images.githubusercontent.com/67557966/100879128-e2eba980-34cc-11eb-80c3-79fcf02d0b1f.jpg)

## Square wave for low P
![dc147f01-3942-4b16-8776-9dcbcaccd69e](https://user-images.githubusercontent.com/67557966/100879178-f5fe7980-34cc-11eb-97cc-4708b89f2688.jpg)

## Sin wave for low P
![bfcc0c2f-561a-4275-a301-4e165b71dba4](https://user-images.githubusercontent.com/67557966/100879245-07478600-34cd-11eb-8694-1a2aa9e3c966.jpg)

