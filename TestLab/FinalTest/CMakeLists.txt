cmake_minimum_required(VERSION 3.17)
project(sublenet)

set(CMAKE_CXX_STANDARD 11)


set(CMAKE_BINARY_DIR ${CMAKE_BINARY_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
include_directories("${PROJECT_SOURCE_DIR}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -ldl")


#FIND_FILE(libai-cnn liblibai-cnn.a ai-cnn/)
#IF(NOT libai-cnn)
#    MESSAGE(SEND_ERROR "Cannot find library liblibai-cnn.a")
#ENDIF(NOT libai-cnn)


#
set(PICO_CNN_LIBRARY_SRCS
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/convolution.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/convolution.h
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/pooling.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/pooling.h
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/activation_function.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/activation_function.h
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/fully_connected.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/fully_connected.h
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/concatenate.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/concatenate.h
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/batch_normalization.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/batch_normalization.h
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/math_operations.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/layers/math_operations.h
        ${PROJECT_SOURCE_DIR}/ai-cnn//io/read_binary_reference_data.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_binary_reference_data.h
        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_binary_weights.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_binary_weights.h

        # TODO: resolve handling jpeg ..
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_imagenet_labels.c
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_imagenet_labels.h
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_jpeg.c
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_jpeg.h
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_means.c
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_means.h
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_pgm.c
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/read_pgm.h
        ${PROJECT_SOURCE_DIR}/ai-cnn/io/write_float.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/io/write_float.h
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/write_pgm.c
#        ${PROJECT_SOURCE_DIR}/ai-cnn/io/write_pgm.h
        ${PROJECT_SOURCE_DIR}/ai-cnn/utils.c
        ${PROJECT_SOURCE_DIR}/ai-cnn/utils.h
        )
#
add_library(ai-cnn
        SHARED
        ${PICO_CNN_LIBRARY_SRCS})

add_library(imgUtil
        SHARED
        ${PROJECT_SOURCE_DIR}/image_tools/imgUtils.cpp
        ${PROJECT_SOURCE_DIR}/image_tools/imgUtils.h
        image_tools/read_binary_ref.c
        image_tools/read_binary_ref.h)

add_library( netlib
        SHARED
        ${PROJECT_SOURCE_DIR}/model_to_Test/network_initialization.c
        ${PROJECT_SOURCE_DIR}/model_to_Test/network_initialization.h
        ${PROJECT_SOURCE_DIR}/model_to_Test/network_cleanup.c
        ${PROJECT_SOURCE_DIR}/model_to_Test/network_cleanup.h
        ${PROJECT_SOURCE_DIR}/model_to_Test/network.c
        ${PROJECT_SOURCE_DIR}/model_to_Test/network.h
)

include_directories(
        ${PROJECT_SOURCE_DIR}/model_to_Test
#        ${PROJECT_SOURCE_DIR}/src
)




add_executable(sublenet ${PROJECT_SOURCE_DIR}/main.cpp )
TARGET_LINK_LIBRARIES(sublenet ai-cnn imgUtil netlib )


# removes pgm and float files
#add_custom_target(remove_output_data
#        COMMAND rm ${CMAKE_BINARY_DIR}/*.pgm
#        COMMAND rm ${CMAKE_BINARY_DIR}/*.float
#        )



