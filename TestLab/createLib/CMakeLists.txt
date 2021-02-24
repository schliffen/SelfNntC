cmake_minimum_required(VERSION 3.10)
project(createLib)

set(CMAKE_CXX_STANDARD 14)


add_library( arealib
        SHARED
        include/area.cpp
        include/area.h
)
add_library( circlib
        SHARED
        include/circum.cpp
        include/circum.h
        )

add_executable(createLib main.cpp)
target_link_libraries(createLib arealib)
