execute_process(COMMAND "/home/david/gazebo_test/catkin_ws/build/adafruit_drivers/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/david/gazebo_test/catkin_ws/build/adafruit_drivers/catkin_generated/python_distutils_install.sh) returned error code ")
endif()