# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /home/birdi/Programme/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/birdi/Programme/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/birdi/Schreibtisch/neuralNetwork07022018

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/neuralNetwork.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/neuralNetwork.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/neuralNetwork.dir/flags.make

CMakeFiles/neuralNetwork.dir/main.cpp.o: CMakeFiles/neuralNetwork.dir/flags.make
CMakeFiles/neuralNetwork.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/neuralNetwork.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/neuralNetwork.dir/main.cpp.o -c /home/birdi/Schreibtisch/neuralNetwork07022018/main.cpp

CMakeFiles/neuralNetwork.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neuralNetwork.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/birdi/Schreibtisch/neuralNetwork07022018/main.cpp > CMakeFiles/neuralNetwork.dir/main.cpp.i

CMakeFiles/neuralNetwork.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neuralNetwork.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/birdi/Schreibtisch/neuralNetwork07022018/main.cpp -o CMakeFiles/neuralNetwork.dir/main.cpp.s

CMakeFiles/neuralNetwork.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/neuralNetwork.dir/main.cpp.o.requires

CMakeFiles/neuralNetwork.dir/main.cpp.o.provides: CMakeFiles/neuralNetwork.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/neuralNetwork.dir/build.make CMakeFiles/neuralNetwork.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/neuralNetwork.dir/main.cpp.o.provides

CMakeFiles/neuralNetwork.dir/main.cpp.o.provides.build: CMakeFiles/neuralNetwork.dir/main.cpp.o


CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o: CMakeFiles/neuralNetwork.dir/flags.make
CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o: ../src/MyFile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o -c /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyFile.cpp

CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyFile.cpp > CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.i

CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyFile.cpp -o CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.s

CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o.requires:

.PHONY : CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o.requires

CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o.provides: CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o.requires
	$(MAKE) -f CMakeFiles/neuralNetwork.dir/build.make CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o.provides.build
.PHONY : CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o.provides

CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o.provides.build: CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o


CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o: CMakeFiles/neuralNetwork.dir/flags.make
CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o: ../src/MyBodyData.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o -c /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyBodyData.cpp

CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyBodyData.cpp > CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.i

CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyBodyData.cpp -o CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.s

CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o.requires:

.PHONY : CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o.requires

CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o.provides: CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o.requires
	$(MAKE) -f CMakeFiles/neuralNetwork.dir/build.make CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o.provides.build
.PHONY : CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o.provides

CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o.provides.build: CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o


CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o: CMakeFiles/neuralNetwork.dir/flags.make
CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o: ../src/MyMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o -c /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyMatrix.cpp

CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyMatrix.cpp > CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.i

CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyMatrix.cpp -o CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.s

CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o.requires:

.PHONY : CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o.requires

CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o.provides: CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/neuralNetwork.dir/build.make CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o.provides.build
.PHONY : CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o.provides

CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o.provides.build: CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o


CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o: CMakeFiles/neuralNetwork.dir/flags.make
CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o: ../src/MyNetwork.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o -c /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyNetwork.cpp

CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyNetwork.cpp > CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.i

CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/birdi/Schreibtisch/neuralNetwork07022018/src/MyNetwork.cpp -o CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.s

CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o.requires:

.PHONY : CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o.requires

CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o.provides: CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o.requires
	$(MAKE) -f CMakeFiles/neuralNetwork.dir/build.make CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o.provides.build
.PHONY : CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o.provides

CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o.provides.build: CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o


CMakeFiles/neuralNetwork.dir/src/functions.cpp.o: CMakeFiles/neuralNetwork.dir/flags.make
CMakeFiles/neuralNetwork.dir/src/functions.cpp.o: ../src/functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/neuralNetwork.dir/src/functions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/neuralNetwork.dir/src/functions.cpp.o -c /home/birdi/Schreibtisch/neuralNetwork07022018/src/functions.cpp

CMakeFiles/neuralNetwork.dir/src/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neuralNetwork.dir/src/functions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/birdi/Schreibtisch/neuralNetwork07022018/src/functions.cpp > CMakeFiles/neuralNetwork.dir/src/functions.cpp.i

CMakeFiles/neuralNetwork.dir/src/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neuralNetwork.dir/src/functions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/birdi/Schreibtisch/neuralNetwork07022018/src/functions.cpp -o CMakeFiles/neuralNetwork.dir/src/functions.cpp.s

CMakeFiles/neuralNetwork.dir/src/functions.cpp.o.requires:

.PHONY : CMakeFiles/neuralNetwork.dir/src/functions.cpp.o.requires

CMakeFiles/neuralNetwork.dir/src/functions.cpp.o.provides: CMakeFiles/neuralNetwork.dir/src/functions.cpp.o.requires
	$(MAKE) -f CMakeFiles/neuralNetwork.dir/build.make CMakeFiles/neuralNetwork.dir/src/functions.cpp.o.provides.build
.PHONY : CMakeFiles/neuralNetwork.dir/src/functions.cpp.o.provides

CMakeFiles/neuralNetwork.dir/src/functions.cpp.o.provides.build: CMakeFiles/neuralNetwork.dir/src/functions.cpp.o


# Object files for target neuralNetwork
neuralNetwork_OBJECTS = \
"CMakeFiles/neuralNetwork.dir/main.cpp.o" \
"CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o" \
"CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o" \
"CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o" \
"CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o" \
"CMakeFiles/neuralNetwork.dir/src/functions.cpp.o"

# External object files for target neuralNetwork
neuralNetwork_EXTERNAL_OBJECTS =

neuralNetwork: CMakeFiles/neuralNetwork.dir/main.cpp.o
neuralNetwork: CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o
neuralNetwork: CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o
neuralNetwork: CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o
neuralNetwork: CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o
neuralNetwork: CMakeFiles/neuralNetwork.dir/src/functions.cpp.o
neuralNetwork: CMakeFiles/neuralNetwork.dir/build.make
neuralNetwork: CMakeFiles/neuralNetwork.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable neuralNetwork"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/neuralNetwork.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/neuralNetwork.dir/build: neuralNetwork

.PHONY : CMakeFiles/neuralNetwork.dir/build

CMakeFiles/neuralNetwork.dir/requires: CMakeFiles/neuralNetwork.dir/main.cpp.o.requires
CMakeFiles/neuralNetwork.dir/requires: CMakeFiles/neuralNetwork.dir/src/MyFile.cpp.o.requires
CMakeFiles/neuralNetwork.dir/requires: CMakeFiles/neuralNetwork.dir/src/MyBodyData.cpp.o.requires
CMakeFiles/neuralNetwork.dir/requires: CMakeFiles/neuralNetwork.dir/src/MyMatrix.cpp.o.requires
CMakeFiles/neuralNetwork.dir/requires: CMakeFiles/neuralNetwork.dir/src/MyNetwork.cpp.o.requires
CMakeFiles/neuralNetwork.dir/requires: CMakeFiles/neuralNetwork.dir/src/functions.cpp.o.requires

.PHONY : CMakeFiles/neuralNetwork.dir/requires

CMakeFiles/neuralNetwork.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/neuralNetwork.dir/cmake_clean.cmake
.PHONY : CMakeFiles/neuralNetwork.dir/clean

CMakeFiles/neuralNetwork.dir/depend:
	cd /home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/birdi/Schreibtisch/neuralNetwork07022018 /home/birdi/Schreibtisch/neuralNetwork07022018 /home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug /home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug /home/birdi/Schreibtisch/neuralNetwork07022018/cmake-build-debug/CMakeFiles/neuralNetwork.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/neuralNetwork.dir/depend

