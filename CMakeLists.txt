cmake_minimum_required(VERSION 3.15)
project(ActivityTracker)

add_subdirectory(test)

set(CMAKE_CXX_STANDARD 14)

add_executable(ActivityTracker main.cpp)


set(SOURCE_FILES Activity.cpp Activity.h Time.cpp Time.h Date.cpp Date.h Day.cpp Day.h)
add_library(core ${SOURCE_FILES})
target_link_libraries(ActivityTracker core)
