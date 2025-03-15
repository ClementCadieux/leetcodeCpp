cmake_minimum_required(VERSION 3.10)
project(Problem1)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(Problem1_test main.cpp)
target_link_libraries(Problem1_test ${GTEST_LIBRARIES} pthread)

add_test(NAME Problem1_test COMMAND Problem1_test)