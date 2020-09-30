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
          
  current_pose = move_group.getCurrentPose(); // Retrieving the information about the current position and orientation of the end effector
    
  ros::Rate loop_rate(10); // Frequency
    
  while (ros::ok()) {
      target_pose = current_pose;
      target_pose.pose.position.x = target_pose.pose.position.x - 0.56; 

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
      target_pose1.pose.position.y = target_pose1.pose.position.y - 0.5;

      move_group.setApproximateJointValueTarget(target_pose1); // To calculate the trajectory
      move_group.move(); // Move the robot
      current_pose = move_group.getCurrentPose();
      if (abs(current_pose.pose.position.y - target_pose1.pose.position.y) < 0.01) {
          break; // Basically, check if we reached the desired position
      }
      loop_rate.sleep();
  }
  ROS_INFO("Done_length/2");
    
  while (ros::ok()) {
      target_pose2 = target_pose1;
      target_pose2.pose.position.x = target_pose2.pose.position.x - 0.3;

      move_group.setApproximateJointValueTarget(target_pose2); // To calculate the trajectory
      move_group.move(); // Move the robot
      current_pose = move_group.getCurrentPose();
      if (abs(current_pose.pose.position.x - target_pose2.pose.position.x) < 0.01) {
          break; // Basically, check if we reached the desired position
      }
      loop_rate.sleep();
  }
  ROS_INFO("Done_width");
    
  while (ros::ok()) {
      target_pose3 = target_pose2;
      target_pose3.pose.position.y = target_pose3.pose.position.y + 1;

      move_group.setApproximateJointValueTarget(target_pose3); // To calculate the trajectory
      move_group.move(); // Move the robot
      current_pose = move_group.getCurrentPose();
      if (abs(current_pose.pose.position.y - target_pose3.pose.position.y) < 0.01) {
          break; // Basically, check if we reached the desired position
      }
      loop_rate.sleep();
  }
  ROS_INFO("Done_length");
    
  while (ros::ok()) {
      target_pose4 = target_pose3;
      target_pose4.pose.position.x = target_pose4.pose.position.x + 0.3;

      move_group.setApproximateJointValueTarget(target_pose4); // To calculate the trajectory
      move_group.move(); // Move the robot
      current_pose = move_group.getCurrentPose();
      if (abs(current_pose.pose.position.x - target_pose4.pose.position.x) < 0.01) {
          break; // Basically, check if we reached the desired position
      }
      loop_rate.sleep();
  }
  ROS_INFO("Done_width");
    
  while (ros::ok()) {
      target_pose5 = target_pose4;
      target_pose5.pose.position.y = target_pose5.pose.position.y - 0.5;

      move_group.setApproximateJointValueTarget(target_pose5); // To calculate the trajectory
      move_group.move(); // Move the robot
      current_pose = move_group.getCurrentPose();
      if (abs(current_pose.pose.position.y - target_pose5.pose.position.y) < 0.01) {
          break; // Basically, check if we reached the desired position
      }
      loop_rate.sleep();
  }
  ROS_INFO("Done_length/2");
  ros::shutdown();
  return 0;
}
