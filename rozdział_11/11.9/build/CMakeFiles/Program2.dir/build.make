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
CMAKE_SOURCE_DIR = /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/build

# Include any dependencies generated for this target.
include CMakeFiles/Program2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Program2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Program2.dir/flags.make

CMakeFiles/Program2.dir/usetime2.cpp.o: CMakeFiles/Program2.dir/flags.make
CMakeFiles/Program2.dir/usetime2.cpp.o: ../usetime2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Program2.dir/usetime2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Program2.dir/usetime2.cpp.o -c /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/usetime2.cpp

CMakeFiles/Program2.dir/usetime2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program2.dir/usetime2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/usetime2.cpp > CMakeFiles/Program2.dir/usetime2.cpp.i

CMakeFiles/Program2.dir/usetime2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program2.dir/usetime2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/usetime2.cpp -o CMakeFiles/Program2.dir/usetime2.cpp.s

CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.o: CMakeFiles/Program2.dir/flags.make
CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.o: /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.o -c /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp

CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp > CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.i

CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp -o CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.s

# Object files for target Program2
Program2_OBJECTS = \
"CMakeFiles/Program2.dir/usetime2.cpp.o" \
"CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.o"

# External object files for target Program2
Program2_EXTERNAL_OBJECTS =

Program2: CMakeFiles/Program2.dir/usetime2.cpp.o
Program2: CMakeFiles/Program2.dir/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.8/mytime2.cpp.o
Program2: CMakeFiles/Program2.dir/build.make
Program2: CMakeFiles/Program2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Program2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Program2.dir/build: Program2

.PHONY : CMakeFiles/Program2.dir/build

CMakeFiles/Program2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Program2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Program2.dir/clean

CMakeFiles/Program2.dir/depend:
	cd /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9 /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9 /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/build /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/build /home/adrian/Dokumenty/stephen_prata/rozdział_11/11.9/build/CMakeFiles/Program2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Program2.dir/depend

