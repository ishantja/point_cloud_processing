// Declaration file 

#pragma once //designed to include the current source file only once in a single compilation.
#ifndef POINT_CLOUD_PROCESSING //usd for conditional compiling.
#define POINT_CLOUD_PROCESSING
#include <ros/ros.h> // including the ros header file

/* defining the class */
class PointCloudProcessing
{
    public:
        PointCloudProcessing(ros::NodeHandle &nh, ros::NodeHandle &pnh); //constructor method
        ~PointCloudProcessing(); // distructor method
        void runOnce(); // runOnce method to control the flow of program
    private:
        ros::NodeHandle nh_; // Defining the ros NodeHandle variable for registrating the same with the master
};
#endif  
