cmake_minimum_required(VERSION 3.10)
project(Problem2)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_problem2 main.cpp)
target_link_libraries(test_problem2 ${GTEST_LIBRARIES} pthread)

add_test(NAME test_problem2 COMMAND test_problem2)