cmake_minimum_required(VERSION 3.22)
project(learning)

set(CMAKE_CXX_STANDARD 20)
add_executable(learning_out main.cpp)

target_include_directories(learning_out PUBLIC ${PROJECT_SOURCE_DIR}/practice/utils)