cmake_minimum_required(VERSION 3.18)
project(clrs)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(clrs
        linked_list.cpp
        linked_list.h
        queue.cpp
        queue.h
        stack.cpp
        stack.h)
