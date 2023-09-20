cmake_minimum_required(VERSION 3.23)
project(CLionProjects)

set(CMAKE_CXX_STANDARD 14)

include_directories(HW-AUTO)

add_executable(HW-AUTO
        main.cpp BusStation.h BusStation.cpp)