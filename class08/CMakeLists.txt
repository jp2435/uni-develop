cmake_minimum_required(VERSION 3.23)
project(class08)

set(CMAKE_CXX_STANDARD 14)


add_executable(Ex01 ex01.cpp)
add_executable(Ex02 ex02.cpp)
add_executable(Ex03 ex03.cpp libs/ex03.lib.cpp libs/ex03.lib.h)