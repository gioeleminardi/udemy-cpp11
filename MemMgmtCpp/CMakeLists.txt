cmake_minimum_required(VERSION 3.9)
project(MemMgmtCpp)

set(CMAKE_CXX_STANDARD 14)
#
#INCLUDE_DIRECTORIES(/usr/local/include/)
#LINK_DIRECTORIES(/usr/local/lib/)
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
#set(SAFEC_INCLUDE_DIR ${SAFEC_INCLUDE_DIR} "/usr/local/include/libsafec")
#set(SAFEC_LIBRARIES ${SAFEC_LIBRARIES} "/usr/local/lib/libsafec-1.0.so")


#find_package(SafeC REQUIRED)
#include_directories(${SAFEC_INCLUDE_DIR})
#message(STATUS "SAFEC " ${SAFEC_LIBRARIES})
add_executable(MemMgmtCpp main.cpp)
#TARGET_LINK_LIBRARIES(MemMgmtCpp ${SAFEC_LIBRARIES})
