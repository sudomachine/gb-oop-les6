cmake_minimum_required(VERSION 3.14)

project(les6)

include_directories(headers)

set(HEADERS headers/custom_manipulator.h headers/input_defend.h)
set(SOURCES sources/main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
