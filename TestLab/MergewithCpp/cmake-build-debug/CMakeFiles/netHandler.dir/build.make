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
CMAKE_SOURCE_DIR = /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/netHandler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/netHandler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/netHandler.dir/flags.make

CMakeFiles/netHandler.dir/include/fextractor.cpp.o: CMakeFiles/netHandler.dir/flags.make
CMakeFiles/netHandler.dir/include/fextractor.cpp.o: ../include/fextractor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/netHandler.dir/include/fextractor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/netHandler.dir/include/fextractor.cpp.o -c /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/include/fextractor.cpp

CMakeFiles/netHandler.dir/include/fextractor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/netHandler.dir/include/fextractor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/include/fextractor.cpp > CMakeFiles/netHandler.dir/include/fextractor.cpp.i

CMakeFiles/netHandler.dir/include/fextractor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/netHandler.dir/include/fextractor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/include/fextractor.cpp -o CMakeFiles/netHandler.dir/include/fextractor.cpp.s

# Object files for target netHandler
netHandler_OBJECTS = \
"CMakeFiles/netHandler.dir/include/fextractor.cpp.o"

# External object files for target netHandler
netHandler_EXTERNAL_OBJECTS =

lib/libnetHandler.so: CMakeFiles/netHandler.dir/include/fextractor.cpp.o
lib/libnetHandler.so: CMakeFiles/netHandler.dir/build.make
lib/libnetHandler.so: CMakeFiles/netHandler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library lib/libnetHandler.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/netHandler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/netHandler.dir/build: lib/libnetHandler.so

.PHONY : CMakeFiles/netHandler.dir/build

CMakeFiles/netHandler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/netHandler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/netHandler.dir/clean

CMakeFiles/netHandler.dir/depend:
	cd /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/cmake-build-debug /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/cmake-build-debug /home/ali/Projlab/Nist/SelfNntC/TestLab/MergewithCpp/cmake-build-debug/CMakeFiles/netHandler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/netHandler.dir/depend

