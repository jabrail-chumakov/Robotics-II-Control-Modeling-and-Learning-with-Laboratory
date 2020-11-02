# Assignment 5 Part 2
Install Matlab, Robotics ToolBox from Peter Corke's website [RTB](http://www.petercorke.com/), as well as `Puma560_Model.m` and `rvctools`.   

## Description
In this assigment it was required to model the motion of a manipulator using 3 approaches

### 1st apprroach
Joint positions PID gains only | roportional gains are applied only to joint angle positions, q. 

### 2nd apprroach
Joint positions PID + only gravity compensation (variable `ArmModel`) | feed-forward error is added to joint angle position error after the PID regulator in `1st approach`. 
Set the inertia matrix elements are ZERO.

### 3rd apprroach
Joint positions PID + inverse dynamic model (variable `Arm`) + joint velocity PID | feedforward error is added to joint angle position error after the above PID regulator. Inertia elements are not zero. Joint velocity error (after its own PID) is added to the joint position error.

## Simulink Model
### 1st model
You need to create simulink model by using the blocks provided in the file `rvctools/simulink/roblocks.mdl`. By using following values initial position θ<sub>init</sub>=[0 0 0], final position θ<sub>final</sub>=[90 -45 -45 and duration of the movement t=2s, you need to control the robot joints by providing a smooth trajectory. You need to implement it by using `"jtraj"` block (included in the file `roblocks.mdl`) and by using a simple MIMO proportional controller (based on position error.

## Why the torques are different for different configurations? 
Bacause it directly proportional to Jacobian matrix


## Video demonstration

Below you can watch a video on how script works:

[![Watch the video]()]()


## Good Luck!

