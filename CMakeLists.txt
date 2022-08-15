cmake_minimum_required(VERSION 3.15)
project(gtest_project CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(gtest REQUIRED COMPONENTS gtest)

add_executable(gtest_sample main.cpp)

# Use the global target
target_link_libraries(gtest_sample GTest::gtest)
