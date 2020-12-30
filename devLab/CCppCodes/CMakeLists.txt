cmake_minimum_required(VERSION 3.17)
project(testlayers)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -ldl")

add_library(layerlib
    SHARED
        layers/batch_normalization.c
        layers/batch_normalization.h
        layers/math_operations.c
        layers/math_operations.h
        testsrc/parameters.h
        testsrc/utility_functions.c
        testsrc/utility_functions.h
        )

add_library( testlibs
    SHARED
        testinclude/BN1dtest.c
        testinclude/BN1dtest.h
        testinclude/normtest.c
        testinclude/normtest.h
        testinclude/divtest.c
        testinclude/divtest.h)



add_executable(testlayers main.cpp )

target_link_libraries(testlayers testlibs layerlib)
#add_flags_if_avail("-lm" )

#set_target_properties(testlayers PROPERTIES
#        C_STANDARD                    11
#        C_STANDARD_REQUIRED           ON
#        C_EXTENSIONS                  ON
#        )