cmake_minimum_required(VERSION 3.9)
project(Filesystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(Filesystem main.cpp)
TARGET_LINK_LIBRARIES(Filesystem stdc++fs)