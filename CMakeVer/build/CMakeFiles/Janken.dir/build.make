# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.22.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.22.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sedi/Documents/openprogram/CMakeVer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sedi/Documents/openprogram/CMakeVer/build

# Include any dependencies generated for this target.
include CMakeFiles/Janken.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Janken.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Janken.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Janken.dir/flags.make

CMakeFiles/Janken.dir/src/main.cc.o: CMakeFiles/Janken.dir/flags.make
CMakeFiles/Janken.dir/src/main.cc.o: ../src/main.cc
CMakeFiles/Janken.dir/src/main.cc.o: CMakeFiles/Janken.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sedi/Documents/openprogram/CMakeVer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Janken.dir/src/main.cc.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Janken.dir/src/main.cc.o -MF CMakeFiles/Janken.dir/src/main.cc.o.d -o CMakeFiles/Janken.dir/src/main.cc.o -c /Users/sedi/Documents/openprogram/CMakeVer/src/main.cc

CMakeFiles/Janken.dir/src/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Janken.dir/src/main.cc.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sedi/Documents/openprogram/CMakeVer/src/main.cc > CMakeFiles/Janken.dir/src/main.cc.i

CMakeFiles/Janken.dir/src/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Janken.dir/src/main.cc.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sedi/Documents/openprogram/CMakeVer/src/main.cc -o CMakeFiles/Janken.dir/src/main.cc.s

# Object files for target Janken
Janken_OBJECTS = \
"CMakeFiles/Janken.dir/src/main.cc.o"

# External object files for target Janken
Janken_EXTERNAL_OBJECTS =

Janken: CMakeFiles/Janken.dir/src/main.cc.o
Janken: CMakeFiles/Janken.dir/build.make
Janken: CMakeFiles/Janken.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sedi/Documents/openprogram/CMakeVer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Janken"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Janken.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Janken.dir/build: Janken
.PHONY : CMakeFiles/Janken.dir/build

CMakeFiles/Janken.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Janken.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Janken.dir/clean

CMakeFiles/Janken.dir/depend:
	cd /Users/sedi/Documents/openprogram/CMakeVer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sedi/Documents/openprogram/CMakeVer /Users/sedi/Documents/openprogram/CMakeVer /Users/sedi/Documents/openprogram/CMakeVer/build /Users/sedi/Documents/openprogram/CMakeVer/build /Users/sedi/Documents/openprogram/CMakeVer/build/CMakeFiles/Janken.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Janken.dir/depend

