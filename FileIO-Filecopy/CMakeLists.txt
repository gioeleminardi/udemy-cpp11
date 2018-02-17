cmake_minimum_required(VERSION 3.9)
project(FileIO_Filecopy)

set(CMAKE_CXX_STANDARD 11)

add_executable(FileIO_Filecopy main.cpp)
TARGET_LINK_LIBRARIES(FileIO_Filecopy stdc++fs)