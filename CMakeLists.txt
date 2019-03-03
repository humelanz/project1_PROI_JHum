cmake_minimum_required(VERSION 3.8)
project(project1_PROI_JHum)

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )

add_executable(project1_PROI_JHum MyClass.cpp zeromain.cpp MyClass.h)

