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
CMAKE_SOURCE_DIR = /home/ali/Projlab/Nist/SelfNntC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ali/Projlab/Nist/SelfNntC/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/libpico-cnn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/libpico-cnn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/libpico-cnn.dir/flags.make

CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.o: ../src/layers/convolution.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/layers/convolution.c

CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/layers/convolution.c > CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.i

CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/layers/convolution.c -o CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.s

CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.o: ../src/layers/pooling.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/layers/pooling.c

CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/layers/pooling.c > CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.i

CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/layers/pooling.c -o CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.s

CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.o: ../src/layers/activation_function.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/layers/activation_function.c

CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/layers/activation_function.c > CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.i

CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/layers/activation_function.c -o CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.s

CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.o: ../src/layers/fully_connected.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/layers/fully_connected.c

CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/layers/fully_connected.c > CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.i

CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/layers/fully_connected.c -o CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.s

CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.o: ../src/layers/concatenate.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/layers/concatenate.c

CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/layers/concatenate.c > CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.i

CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/layers/concatenate.c -o CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.s

CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.o: ../src/layers/batch_normalization.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/layers/batch_normalization.c

CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/layers/batch_normalization.c > CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.i

CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/layers/batch_normalization.c -o CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.s

CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.o: ../src/io/read_binary_reference_data.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/io/read_binary_reference_data.c

CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/io/read_binary_reference_data.c > CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.i

CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/io/read_binary_reference_data.c -o CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.s

CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.o: ../src/io/read_binary_weights.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/io/read_binary_weights.c

CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/io/read_binary_weights.c > CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.i

CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/io/read_binary_weights.c -o CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.s

CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.o: ../src/io/read_imagenet_labels.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/io/read_imagenet_labels.c

CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/io/read_imagenet_labels.c > CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.i

CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/io/read_imagenet_labels.c -o CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.s

CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.o: ../src/io/read_jpeg.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/io/read_jpeg.c

CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/io/read_jpeg.c > CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.i

CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/io/read_jpeg.c -o CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.s

CMakeFiles/libpico-cnn.dir/src/io/read_means.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/io/read_means.c.o: ../src/io/read_means.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/libpico-cnn.dir/src/io/read_means.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/io/read_means.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/io/read_means.c

CMakeFiles/libpico-cnn.dir/src/io/read_means.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/io/read_means.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/io/read_means.c > CMakeFiles/libpico-cnn.dir/src/io/read_means.c.i

CMakeFiles/libpico-cnn.dir/src/io/read_means.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/io/read_means.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/io/read_means.c -o CMakeFiles/libpico-cnn.dir/src/io/read_means.c.s

CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.o: ../src/io/read_pgm.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/io/read_pgm.c

CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/io/read_pgm.c > CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.i

CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/io/read_pgm.c -o CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.s

CMakeFiles/libpico-cnn.dir/src/io/write_float.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/io/write_float.c.o: ../src/io/write_float.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/libpico-cnn.dir/src/io/write_float.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/io/write_float.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/io/write_float.c

CMakeFiles/libpico-cnn.dir/src/io/write_float.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/io/write_float.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/io/write_float.c > CMakeFiles/libpico-cnn.dir/src/io/write_float.c.i

CMakeFiles/libpico-cnn.dir/src/io/write_float.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/io/write_float.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/io/write_float.c -o CMakeFiles/libpico-cnn.dir/src/io/write_float.c.s

CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.o: ../src/io/write_pgm.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/io/write_pgm.c

CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/io/write_pgm.c > CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.i

CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/io/write_pgm.c -o CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.s

CMakeFiles/libpico-cnn.dir/src/utils.c.o: CMakeFiles/libpico-cnn.dir/flags.make
CMakeFiles/libpico-cnn.dir/src/utils.c.o: ../src/utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/libpico-cnn.dir/src/utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libpico-cnn.dir/src/utils.c.o   -c /home/ali/Projlab/Nist/SelfNntC/src/utils.c

CMakeFiles/libpico-cnn.dir/src/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libpico-cnn.dir/src/utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/src/utils.c > CMakeFiles/libpico-cnn.dir/src/utils.c.i

CMakeFiles/libpico-cnn.dir/src/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libpico-cnn.dir/src/utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/src/utils.c -o CMakeFiles/libpico-cnn.dir/src/utils.c.s

# Object files for target libpico-cnn
libpico__cnn_OBJECTS = \
"CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.o" \
"CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.o" \
"CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.o" \
"CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.o" \
"CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.o" \
"CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.o" \
"CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.o" \
"CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.o" \
"CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.o" \
"CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.o" \
"CMakeFiles/libpico-cnn.dir/src/io/read_means.c.o" \
"CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.o" \
"CMakeFiles/libpico-cnn.dir/src/io/write_float.c.o" \
"CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.o" \
"CMakeFiles/libpico-cnn.dir/src/utils.c.o"

# External object files for target libpico-cnn
libpico__cnn_EXTERNAL_OBJECTS =

lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/layers/convolution.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/layers/pooling.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/layers/activation_function.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/layers/fully_connected.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/layers/concatenate.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/layers/batch_normalization.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/io/read_binary_reference_data.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/io/read_binary_weights.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/io/read_imagenet_labels.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/io/read_jpeg.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/io/read_means.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/io/read_pgm.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/io/write_float.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/io/write_pgm.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/src/utils.c.o
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/build.make
lib/liblibpico-cnn.a: CMakeFiles/libpico-cnn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking C static library lib/liblibpico-cnn.a"
	$(CMAKE_COMMAND) -P CMakeFiles/libpico-cnn.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libpico-cnn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/libpico-cnn.dir/build: lib/liblibpico-cnn.a

.PHONY : CMakeFiles/libpico-cnn.dir/build

CMakeFiles/libpico-cnn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/libpico-cnn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/libpico-cnn.dir/clean

CMakeFiles/libpico-cnn.dir/depend:
	cd /home/ali/Projlab/Nist/SelfNntC/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ali/Projlab/Nist/SelfNntC /home/ali/Projlab/Nist/SelfNntC /home/ali/Projlab/Nist/SelfNntC/cmake-build-debug /home/ali/Projlab/Nist/SelfNntC/cmake-build-debug /home/ali/Projlab/Nist/SelfNntC/cmake-build-debug/CMakeFiles/libpico-cnn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/libpico-cnn.dir/depend

