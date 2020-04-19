cmake_minimum_required(VERSION 3.15)

add_subdirectory(./lib/googletest)

set(gtest_SOURCE_DIR, ./lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILE runAllTests.cpp TimeTests.cpp DayTests.cpp RegisterTests.cpp)
add_executable(run_tests ${TEST_SOURCE_FILE})
target_link_libraries(run_tests gtest gtest_main core)