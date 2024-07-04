cmake_minimum_required(VERSION 3.8)
project(libpointmatcher_demo)

if(CMAKE_CXX_COMPILER_ID MATCHES "(GNU|Clang)")
  add_compile_options(-Wall -Wextra -Werror=conversion -Werror=unused-but-set-variable -Werror=return-type -Werror=shadow)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

include_directories(include)

####### IK + collision check #########[[
add_executable(demo_node src/demo_node.cpp)
ament_target_dependencies(demo_node 
rclcpp
)
install(TARGETS demo_node
    DESTINATION lib/${PROJECT_NAME})

ament_package()
