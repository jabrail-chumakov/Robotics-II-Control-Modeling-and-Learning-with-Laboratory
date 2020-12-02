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
![e3170062-0bb4-4309-a666-6124a76047b5](https://user-images.githubusercontent.com/67557966/100879384-2f36e980-34cd-11eb-8652-27776997d0d8.jpg)

## Square wave for low P
![b7bfb197-3f88-4fe3-a5d1-36c2f0c775f7](https://user-images.githubusercontent.com/67557966/100879468-4b3a8b00-34cd-11eb-8baa-ecbef0912fee.jpg)

## Sin wave for low P
![2174fc23-4709-4c23-b0fd-39140002c3d2](https://user-images.githubusercontent.com/67557966/100879551-61484b80-34cd-11eb-8827-a56b01dabd1d.jpg)


