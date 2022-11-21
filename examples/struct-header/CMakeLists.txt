cmake_minimum_required(VERSION 3.23)
project(struct_header)

set(CMAKE_CXX_STANDARD 14)

add_executable(struct_header main.cpp struct.h struct.cpp)
