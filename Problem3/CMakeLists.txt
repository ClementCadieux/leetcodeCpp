cmake_minimum_required(VERSION 3.10)
project(Problem3)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests test.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

add_test(NAME MyTests COMMAND runTests)