# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joe/aaa

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joe/aaa/build/Desktop-Debug

# Utility rule file for aaa_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/aaa_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/aaa_autogen.dir/progress.make

CMakeFiles/aaa_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/joe/aaa/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target aaa"
	/usr/bin/cmake -E cmake_autogen /home/joe/aaa/build/Desktop-Debug/CMakeFiles/aaa_autogen.dir/AutogenInfo.json Debug

aaa_autogen: CMakeFiles/aaa_autogen
aaa_autogen: CMakeFiles/aaa_autogen.dir/build.make
.PHONY : aaa_autogen

# Rule to build all files generated by this target.
CMakeFiles/aaa_autogen.dir/build: aaa_autogen
.PHONY : CMakeFiles/aaa_autogen.dir/build

CMakeFiles/aaa_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/aaa_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/aaa_autogen.dir/clean

CMakeFiles/aaa_autogen.dir/depend:
	cd /home/joe/aaa/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joe/aaa /home/joe/aaa /home/joe/aaa/build/Desktop-Debug /home/joe/aaa/build/Desktop-Debug /home/joe/aaa/build/Desktop-Debug/CMakeFiles/aaa_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/aaa_autogen.dir/depend
