cmake_minimum_required(VERSION 3.15)
project(ActivityTracker)

add_subdirectory(test)

set(CMAKE_CXX_STANDARD 14)

add_executable(ActivityTracker main.cpp)

set(CURSES_NEED_NCURSES, TRUE) # see https://cmake.org/cmake/help/v3.3/module/FindCurses.html
find_package( Curses REQUIRED )
include_directories( ${CURSES_INCLUDE_DIRS} )
target_link_libraries( ActivityTracker ${CURSES_LIBRARIES} )
