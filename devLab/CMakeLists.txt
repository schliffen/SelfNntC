cmake_minimum_required(VERSION 3.17)
project(newLayerTest)

set(CMAKE_CXX_STANDARD 11)



set(CMAKE_BINARY_DIR ${CMAKE_BINARY_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
include_directories("${PROJECT_SOURCE_DIR}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -ldl")

list(APPEND LINK_LIBS m)

set(PICO_CNN_LIBRARY_SRCS
        ${PROJECT_SOURCE_DIR}/src/layers/convolution.c
        ${PROJECT_SOURCE_DIR}/src/layers/convolution.h
        ${PROJECT_SOURCE_DIR}/src/layers/pooling.c
        ${PROJECT_SOURCE_DIR}/src/layers/pooling.h
        ${PROJECT_SOURCE_DIR}/src/layers/activation_function.c
        ${PROJECT_SOURCE_DIR}/src/layers/activation_function.h
        ${PROJECT_SOURCE_DIR}/src/layers/fully_connected.c
        ${PROJECT_SOURCE_DIR}/src/layers/fully_connected.h
        ${PROJECT_SOURCE_DIR}/src/layers/concatenate.c
        ${PROJECT_SOURCE_DIR}/src/layers/concatenate.h
        ${PROJECT_SOURCE_DIR}/src/layers/batch_normalization.c
        ${PROJECT_SOURCE_DIR}/src/layers/batch_normalization.h
        ${PROJECT_SOURCE_DIR}/src/layers/math_operations.c
        ${PROJECT_SOURCE_DIR}/src/layers/math_operations.h
        ${PROJECT_SOURCE_DIR}/src//io/read_binary_reference_data.c
        ${PROJECT_SOURCE_DIR}/src/io/read_binary_reference_data.h
        ${PROJECT_SOURCE_DIR}/src/io/read_binary_weights.c
        ${PROJECT_SOURCE_DIR}/src/io/read_binary_weights.h
        ${PROJECT_SOURCE_DIR}/src/io/read_imagenet_labels.c
        ${PROJECT_SOURCE_DIR}/src/io/read_imagenet_labels.h
        ${PROJECT_SOURCE_DIR}/src/io/read_jpeg.c
        ${PROJECT_SOURCE_DIR}/src/io/read_jpeg.h
        ${PROJECT_SOURCE_DIR}/src/io/read_means.c
        ${PROJECT_SOURCE_DIR}/src/io/read_means.h
        ${PROJECT_SOURCE_DIR}/src/io/read_pgm.c
        ${PROJECT_SOURCE_DIR}/src/io/read_pgm.h
        ${PROJECT_SOURCE_DIR}/src/io/write_float.c
        ${PROJECT_SOURCE_DIR}/src/io/write_float.h
        ${PROJECT_SOURCE_DIR}/src/io/write_pgm.c
        ${PROJECT_SOURCE_DIR}/src/io/write_pgm.h
        ${PROJECT_SOURCE_DIR}/src/utils.c
        ${PROJECT_SOURCE_DIR}/src/utils.h
        )
#

include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
)

add_library(libai-cnn
        ${PICO_CNN_LIBRARY_SRCS})

add_library( testlibs
        SHARED
        ${PROJECT_SOURCE_DIR}/include/test_activation_function.c
        ${PROJECT_SOURCE_DIR}/include/test_activation_function.h
        ${PROJECT_SOURCE_DIR}/include/utility_functions.c
        ${PROJECT_SOURCE_DIR}/include/utility_functions.h
        ${PROJECT_SOURCE_DIR}/include/tutils.h
        ${PROJECT_SOURCE_DIR}/include/tutils.c
        )


add_executable(newLayerTest ${PROJECT_SOURCE_DIR}/main.cpp )
target_link_libraries(newLayerTest testlibs  libai-cnn ${LINK_LIBS} )

# removes pgm and float files
add_custom_target(remove_output_data
        COMMAND rm ${CMAKE_BINARY_DIR}/*.pgm
        COMMAND rm ${CMAKE_BINARY_DIR}/*.float
        )
