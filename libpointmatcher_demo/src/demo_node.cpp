#include "rclcpp/rclcpp.hpp"
#include "pointmatcher/PointMatcher.h"
#include "pointmatcher_ros/PointMatcher_ROS.h"

int main(int argc, char **argv)
{
  auto blonk = PointMatcher<float>::DataPoints();
  auto tf_blonk = PointMatcher<float>::TransformationParameters();
  auto time = rclcpp::Time();

  std::cout << "Classes instantiated sucessfully" << std::endl;
  return 0;
}