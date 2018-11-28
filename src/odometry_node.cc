/*
 * odometry.cc
 *
 *  Created on: Nov 19, 2018
 *      Author: natnael
 */


#include <string>
#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <nav_msgs/Odometry.h>



	float publish_rate = 10;
	ros::init(argc, argv, "odom_publisher");
	ros::NodeHandle n;
	ros::Publisher odom_pub;
	odom_pub=n.advertise<nav_msgs::Odometry>("odom", publish_rate);







