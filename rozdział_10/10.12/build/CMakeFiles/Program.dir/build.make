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
CMAKE_SOURCE_DIR = /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/build

# Include any dependencies generated for this target.
include CMakeFiles/Program.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Program.dir/flags.make

CMakeFiles/Program.dir/stacker.cpp.o: CMakeFiles/Program.dir/flags.make
CMakeFiles/Program.dir/stacker.cpp.o: ../stacker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Program.dir/stacker.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Program.dir/stacker.cpp.o -c /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/stacker.cpp

CMakeFiles/Program.dir/stacker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program.dir/stacker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/stacker.cpp > CMakeFiles/Program.dir/stacker.cpp.i

CMakeFiles/Program.dir/stacker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program.dir/stacker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/stacker.cpp -o CMakeFiles/Program.dir/stacker.cpp.s

CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.o: CMakeFiles/Program.dir/flags.make
CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.o: /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.o -c /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp

CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp > CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.i

CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp -o CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.s

# Object files for target Program
Program_OBJECTS = \
"CMakeFiles/Program.dir/stacker.cpp.o" \
"CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.o"

# External object files for target Program
Program_EXTERNAL_OBJECTS =

Program: CMakeFiles/Program.dir/stacker.cpp.o
Program: CMakeFiles/Program.dir/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.11/stack.cpp.o
Program: CMakeFiles/Program.dir/build.make
Program: CMakeFiles/Program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Program"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Program.dir/build: Program

.PHONY : CMakeFiles/Program.dir/build

CMakeFiles/Program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Program.dir/clean

CMakeFiles/Program.dir/depend:
	cd /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12 /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12 /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/build /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/build /home/adrian/Dokumenty/stephen_prata/rozdział_10/10.12/build/CMakeFiles/Program.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Program.dir/depend

