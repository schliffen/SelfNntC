# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ali/clion-20/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/ali/clion-20/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ai-cnn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ai-cnn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ai-cnn.dir/flags.make

CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.o: ../ai-cnn/layers/convolution.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/convolution.c

CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/convolution.c > CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/convolution.c -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.o: ../ai-cnn/layers/pooling.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/pooling.c

CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/pooling.c > CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/pooling.c -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.o: ../ai-cnn/layers/activation_function.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/activation_function.c

CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/activation_function.c > CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/activation_function.c -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.o: ../ai-cnn/layers/fully_connected.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/fully_connected.c

CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/fully_connected.c > CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/fully_connected.c -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.o: ../ai-cnn/layers/concatenate.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/concatenate.c

CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/concatenate.c > CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/concatenate.c -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.o: ../ai-cnn/layers/batch_normalization.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/batch_normalization.c

CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/batch_normalization.c > CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/batch_normalization.c -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.o: ../ai-cnn/layers/math_operations.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/math_operations.c

CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/math_operations.c > CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/math_operations.c -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.o: ../ai-cnn/layers/upsampling.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/upsampling.c

CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/upsampling.c > CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/layers/upsampling.c -o CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.o: ../ai-cnn/io/read_binary_reference_data.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/io/read_binary_reference_data.c

CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/io/read_binary_reference_data.c > CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/io/read_binary_reference_data.c -o CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.o: ../ai-cnn/io/read_binary_weights.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/io/read_binary_weights.c

CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/io/read_binary_weights.c > CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/io/read_binary_weights.c -o CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.o: ../ai-cnn/io/write_float.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/io/write_float.c

CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/io/write_float.c > CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/io/write_float.c -o CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.s

CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.o: ../ai-cnn/utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/utils.c

CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/utils.c > CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.i

CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/ai-cnn/utils.c -o CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.s

CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.o: ../mobile025_320/mb25_network.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network.c

CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network.c > CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.i

CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network.c -o CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.s

CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.o: ../mobile025_320/mb25_network_cleanup.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network_cleanup.c

CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network_cleanup.c > CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.i

CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network_cleanup.c -o CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.s

CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.o: ../mobile025_320/mb25_network_initialization.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.o   -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network_initialization.c

CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network_initialization.c > CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.i

CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/mb25_network_initialization.c -o CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.s

CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.o: CMakeFiles/ai-cnn.dir/flags.make
CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.o: ../mobile025_320/posprocess.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.o -c /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/posprocess.cpp

CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/posprocess.cpp > CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.i

CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/mobile025_320/posprocess.cpp -o CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.s

# Object files for target ai-cnn
ai__cnn_OBJECTS = \
"CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.o" \
"CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.o" \
"CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.o" \
"CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.o" \
"CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.o" \
"CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.o"

# External object files for target ai-cnn
ai__cnn_EXTERNAL_OBJECTS =

lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/layers/convolution.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/layers/pooling.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/layers/activation_function.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/layers/fully_connected.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/layers/concatenate.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/layers/batch_normalization.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/layers/math_operations.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/layers/upsampling.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_reference_data.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/io/read_binary_weights.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/io/write_float.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/ai-cnn/utils.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_cleanup.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/mobile025_320/mb25_network_initialization.c.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/mobile025_320/posprocess.cpp.o
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/build.make
lib/libai-cnn.so: CMakeFiles/ai-cnn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX shared library lib/libai-cnn.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ai-cnn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ai-cnn.dir/build: lib/libai-cnn.so

.PHONY : CMakeFiles/ai-cnn.dir/build

CMakeFiles/ai-cnn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ai-cnn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ai-cnn.dir/clean

CMakeFiles/ai-cnn.dir/depend:
	cd /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug /home/ali/Projlab/Nist/SelfNntC/TestLab/face_detection/cmake-build-debug/CMakeFiles/ai-cnn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ai-cnn.dir/depend

