cmake_minimum_required(VERSION 3.23)
project(CLionProjects)

set(CMAKE_CXX_STANDARD 14)

include_directories(HW-2-6-2)

add_executable(HW-2-6-2
        main.cpp graph.h graph.cpp)