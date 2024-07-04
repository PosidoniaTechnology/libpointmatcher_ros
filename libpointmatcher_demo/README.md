# libpointmatcher_demo
A ROS2 package demonstrating how to use libpointmatcher in ROS

## Clone repositories
In your `/src` directory, run these commands to clone repositories and install dependencies
```
sudo apt update
git clone --recurse-submodules https://github.com/norlab-ulaval/libpointmatcher.git
git clone https://github.com/norlab-ulaval/libpointmatcher_ros.git
rosdep install --from-paths src -i -r -y --rosdistro=humble

```

## Update your `package.xml` and `CmakeLists.txt`
Check out those files in this package for guidance

## Build and run `demo_node`

```
rosdep install --from-paths src -i -r -y --rosdistro=humble   # just in case
colcon build
```

and after, test if the libraries are linked properly by running 
```
source install/setup.sh
ros2 run libpointmatcher_demo demo_node
```
Which instantiates some of the classes in the libraries and exits program.


