
project(Vectors)

set(HEADER_FILES
        vec3.h
        )

set(SOURCE_FILES
        vec3.cpp
        )

add_library(Vector_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})
