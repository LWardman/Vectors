cmake_minimum_required(VERSION 3.24)
project(Vectors)

set(CMAKE_CXX_STANDARD 23)

add_executable(Vectors main.cpp vec3.cpp vec3.h VectorDatabank.cpp VectorDatabank.h)
