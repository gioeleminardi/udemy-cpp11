cmake_minimum_required(VERSION 3.9)
project(Account)

set(CMAKE_CXX_STANDARD 11)

add_executable(Account main.cpp Account.cpp Account.h Savings.cpp Savings.h)