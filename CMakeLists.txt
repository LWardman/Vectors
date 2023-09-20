cmake_minimum_required(VERSION 3.24)
project(Vectors)

set(CMAKE_CXX_STANDARD 23)

add_executable(Vectors main.cpp Vector_lib/vec3.cpp Vector_lib/vec3.h)

set(SOURCE_FILES main.cpp)

add_executable(Vector_lib_run ${SOURCE_FILES})

include_directories(Vector_lib)
add_subdirectory(Vector_lib)

target_link_libraries(Vector_lib_run Vector_lib)
