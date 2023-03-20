cmake_minimum_required(VERSION 3.23)
project(CLionProjects)

set(CMAKE_CXX_STANDARD 14)

include_directories(HW-2-3-1)

add_executable(HW-2-3-1
        main.cpp LinkedList.cpp LinkedList.h)