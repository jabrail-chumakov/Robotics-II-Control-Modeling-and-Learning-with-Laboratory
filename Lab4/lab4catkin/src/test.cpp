#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit_msgs/DisplayRobotState.h>
#include <moveit_msgs/DisplayTrajectory.h>
#include <moveit_msgs/AttachedCollisionObject.h>
#include <moveit_msgs/CollisionObject.h>
#include <math.h>
// Main moveit libraries are included
int main(int argc, char **argv) 
{
  ros::init(argc, argv, "move_group_interface_tutorial");
  ros::NodeHandle node_handle;
  ros::AsyncSpinner spinner(0);
  spinner.start(); // For moveit implementation we need AsyncSpinner, we can't use ros::spinOnce()
  
  static const std::string PLANNING_GROUP = "arm"; // Now we specify with what group we want work, here "arm" is the name of my group controller
    
  moveit::planning_interface::MoveGroupInterface move_group(PLANNING_GROUP); // Loading move_group
  const robot_state::JointModelGroup *joint_model_group = move_group.getCurrentState() -> getJointModelGroup(PLANNING_GROUP); // For joint control
  geometry_msgs::PoseStamped current_pose;
  geometry_msgs::PoseStamped target_pose; // << Just move it to make reachable position for rectangle drawing
  geometry_msgs::PoseStamped target_pose1; // Pose in ROS is implemented using geometry_msgs::PoseStamped, google what is the type of this msg 
  geometry_msgs::PoseStamped target_pose2; 
  geometry_msgs::PoseStamped target_pose3; 
  geometry_msgs::PoseStamped target_pose4; 
  geometry_msgs::PoseStamped target_pose5; 
  geometry_msgs::PoseStamped target_pose6;
  geometry_msgs::PoseStamped target_pose7;
  geometry_msgs::PoseStamped target_pose8;
  geometry_msgs::PoseStamped target_pose9;
  geometry_msgs::PoseStamped target_pose10;
  geometry_msgs::PoseStamped target_pose11;
  geometry_msgs::PoseStamped target_pose12;
  geometry_msgs::PoseStamped target_pose13;
  geometry_msgs::PoseStamped target_pose14;
  geometry_msgs::PoseStamped target_pose15;
  geometry_msgs::PoseStamped target_pose16;
  geometry_msgs::PoseStamped target_pose17;
  geometry_msgs::PoseStamped target_pose18;
  geometry_msgs::PoseStamped target_pose19;
  geometry_msgs::PoseStamped target_pose20;
  geometry_msgs::PoseStamped target_pose21;
  geometry_msgs::PoseStamped target_pose22;
  geometry_msgs::PoseStamped target_pose23;
  geometry_msgs::PoseStamped target_pose24;
           
  current_pose = move_group.getCurrentPose(); // Retrieving the information about the current position and orientation of the end effector
    
  ros::Rate loop_rate(50); // Frequency
  
  while (ros::ok()) {
      target_pose = current_pose;
      target_pose.pose.position.x = target_pose.pose.position.x - 0.1; 
      move_group.setApproximateJointValueTarget(target_pose); // To calculate the trajectory
      move_group.move(); // Move the robot
      current_pose = move_group.getCurrentPose();
      if (abs(current_pose.pose.position.x - target_pose.pose.position.x) < 0.01) {
          break; // Basically, check if we reached the desired position
      }
      loop_rate.sleep();
  }
  ROS_INFO("Done_Free_Movement");
    
  while (ros::ok()) {
      
      target_pose1 = target_pose;
      target_pose1.pose.position.x = target_pose1.pose.position.x - 0.0042;
      target_pose1.pose.position.y = target_pose1.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose1); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose2 = target_pose1;
      target_pose2.pose.position.x = target_pose2.pose.position.x - 0.0013;
      target_pose2.pose.position.y = target_pose2.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose2); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose3 = target_pose2;
      target_pose3.pose.position.x = target_pose3.pose.position.x - 0.0272;
      target_pose3.pose.position.y = target_pose3.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose3); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose4 = target_pose3;
      target_pose4.pose.position.x = target_pose4.pose.position.x - 0.0492;
      target_pose4.pose.position.y = target_pose4.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose4); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose5 = target_pose4;
      target_pose5.pose.position.x = target_pose5.pose.position.x - 0.085;
      target_pose5.pose.position.y = target_pose5.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose5); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose6 = target_pose5;
      target_pose6.pose.position.x = target_pose6.pose.position.x - 0.1214;
      target_pose6.pose.position.y = target_pose6.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose6); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose7 = target_pose6;
      target_pose7.pose.position.x = target_pose7.pose.position.x - 0.1214;
      target_pose7.pose.position.y = target_pose7.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose7); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose8 = target_pose7;
      target_pose8.pose.position.x = target_pose8.pose.position.x - 0.085;
      target_pose8.pose.position.y = target_pose8.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose8); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose9 = target_pose8;
      target_pose9.pose.position.x = target_pose9.pose.position.x - 0.0492;
      target_pose9.pose.position.y = target_pose9.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose9); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose10 = target_pose9;
      target_pose10.pose.position.x = target_pose10.pose.position.x - 0.0272;
      target_pose10.pose.position.y = target_pose10.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose10); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose11 = target_pose10;
      target_pose11.pose.position.x = target_pose11.pose.position.x - 0.013;
      target_pose11.pose.position.y = target_pose11.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose11); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose12 = target_pose11;
      target_pose12.pose.position.x = target_pose12.pose.position.x - 0.0042;
      target_pose12.pose.position.y = target_pose12.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose12); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose13 = target_pose12;
      target_pose13.pose.position.x = target_pose13.pose.position.x + 0.0042;
      target_pose13.pose.position.y = target_pose13.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose13); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose14 = target_pose13;
      target_pose14.pose.position.x = target_pose14.pose.position.x + 0.013;
      target_pose14.pose.position.y = target_pose14.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose14); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose15 = target_pose14;
      target_pose15.pose.position.x = target_pose15.pose.position.x + 0.0272;
      target_pose15.pose.position.y = target_pose15.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose15); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose16 = target_pose15;
      target_pose16.pose.position.x = target_pose16.pose.position.x + 0.0492;
      target_pose16.pose.position.y = target_pose16.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose16); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose17 = target_pose16;
      target_pose17.pose.position.x = target_pose17.pose.position.x + 0.085;
      target_pose17.pose.position.y = target_pose17.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose17); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose18 = target_pose17;
      target_pose18.pose.position.x = target_pose18.pose.position.x + 0.1214;
      target_pose18.pose.position.y = target_pose18.pose.position.y + 0.05;
      move_group.setApproximateJointValueTarget(target_pose18); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose19 = target_pose18;
      target_pose19.pose.position.x = target_pose19.pose.position.x + 0.1214;
      target_pose19.pose.position.y = target_pose19.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose19); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose20 = target_pose19;
      target_pose20.pose.position.x = target_pose20.pose.position.x + 0.085;
      target_pose20.pose.position.y = target_pose20.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose20); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose21 = target_pose20;
      target_pose21.pose.position.x = target_pose21.pose.position.x + 0.0492;
      target_pose21.pose.position.y = target_pose21.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose21); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose22 = target_pose21;
      target_pose22.pose.position.x = target_pose22.pose.position.x + 0.0272;
      target_pose22.pose.position.y = target_pose22.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose22); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose23 = target_pose22;
      target_pose23.pose.position.x = target_pose23.pose.position.x + 0.013;
      target_pose23.pose.position.y = target_pose23.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose23); // To calculate the trajectory
      move_group.move(); // Move the robot
      
      target_pose24 = target_pose23;
      target_pose24.pose.position.x = target_pose24.pose.position.x + 0.0042;
      target_pose24.pose.position.y = target_pose24.pose.position.y - 0.05;
      move_group.setApproximateJointValueTarget(target_pose24); // To calculate the trajectory
      move_group.move(); // Move the robot
          
      current_pose = move_group.getCurrentPose();
      if (abs(current_pose.pose.position.x - target_pose24.pose.position.x) < 0.01) {
          break; // Basically, check if we reached the desired position
      }
      else if (abs(current_pose.pose.position.y - target_pose24.pose.position.y) < 0.01) {
          break; // Basically, check if we reached the desired position
      }
      loop_rate.sleep();
  }
  ROS_INFO("Done_drawing_circle");
  ros::shutdown();
  return 0;
}
