# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/build

# Include any dependencies generated for this target.
include CMakeFiles/execName.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/execName.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/execName.dir/flags.make

CMakeFiles/execName.dir/usestock2.cpp.o: CMakeFiles/execName.dir/flags.make
CMakeFiles/execName.dir/usestock2.cpp.o: ../usestock2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/execName.dir/usestock2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/execName.dir/usestock2.cpp.o -c /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/usestock2.cpp

CMakeFiles/execName.dir/usestock2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/execName.dir/usestock2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/usestock2.cpp > CMakeFiles/execName.dir/usestock2.cpp.i

CMakeFiles/execName.dir/usestock2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/execName.dir/usestock2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/usestock2.cpp -o CMakeFiles/execName.dir/usestock2.cpp.s

CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.o: CMakeFiles/execName.dir/flags.make
CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.o: /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.o -c /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp

CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp > CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.i

CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp -o CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.s

# Object files for target execName
execName_OBJECTS = \
"CMakeFiles/execName.dir/usestock2.cpp.o" \
"CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.o"

# External object files for target execName
execName_EXTERNAL_OBJECTS =

execName: CMakeFiles/execName.dir/usestock2.cpp.o
execName: CMakeFiles/execName.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.8/stock20.cpp.o
execName: CMakeFiles/execName.dir/build.make
execName: CMakeFiles/execName.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable execName"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/execName.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/execName.dir/build: execName

.PHONY : CMakeFiles/execName.dir/build

CMakeFiles/execName.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/execName.dir/cmake_clean.cmake
.PHONY : CMakeFiles/execName.dir/clean

CMakeFiles/execName.dir/depend:
	cd /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9 /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9 /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/build /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/build /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.9/build/CMakeFiles/execName.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/execName.dir/depend

