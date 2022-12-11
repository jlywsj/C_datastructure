cmake_minimum_required(VERSION 3.24)
project(1_struct)

set(CMAKE_CXX_STANDARD 17)

add_executable(1_struct main.cpp)

set(CMAKE_EXE_LINKER_FLAGS "-static")