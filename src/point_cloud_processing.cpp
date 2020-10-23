#include "point_cloud_processing.hpp"

//constructor method
PointCloudProcessing::PointCloudProcessing(ros::NodeHandle &nh, ros::NodeHandle &pnh)
{
    nh_ = nh;
    std::cout<<"from Constructor \n";
    // storing the values in the member variable
    // get the parameters or configurations and store them in member variables
    // initialize the publisher and subscribers
}

// Distructor method
PointCloudProcessing::~PointCloudProcessing()
{
    std::cout<<"from Distructor \n";
    // Free up the memory assigned from heap
}

void PointCloudProcessing::runOnce()
{
    std::cout<<"from Runonce \n";
}
