cmake_minimum_required(VERSION 3.8)
project(libpointmatcher_demo)

if(CMAKE_CXX_COMPILER_ID MATCHES "(GNU|Clang)")
  add_compile_options(-Wall -Wextra -Werror=conversion -Werror=unused-but-set-variable -Werror=return-type -Werror=shadow)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(libpointmatcher_ros REQUIRED)

# LIBPOINTMATCHER
# Even though libpointmatcher_ros has libpointmatcher as a dependency,
# we have to link against it directly in our executable
find_package(libpointmatcher 1.4.2 REQUIRED)
include_directories(include ${libpointmatcher_INCLUDE_DIRS})

# some executable
add_executable(demo_node src/demo_node.cpp)
ament_target_dependencies(demo_node 
rclcpp
libpointmatcher_ros  # this is for ROS utilities when working with libpointmatcher
)

# link executable against libpointmatcher libraries directly.
target_link_libraries(demo_node ${libpointmatcher_LIBRARIES})

install(TARGETS demo_node
    DESTINATION lib/${PROJECT_NAME})

ament_package()


