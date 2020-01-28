cmake_minimum_required(VERSION 3.15)
project(clox)

set(CMAKE_CXX_STANDARD 17)

add_executable(clox
        main.cpp
        chunk.cpp
        memory.cpp
        debug.cpp
        value.cpp)