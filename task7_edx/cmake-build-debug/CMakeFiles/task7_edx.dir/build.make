# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\shahins\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\shahins\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\shahins\CLionProjects\task7_edx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\shahins\CLionProjects\task7_edx\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task7_edx.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task7_edx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task7_edx.dir/flags.make

CMakeFiles/task7_edx.dir/main.cpp.obj: CMakeFiles/task7_edx.dir/flags.make
CMakeFiles/task7_edx.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\shahins\CLionProjects\task7_edx\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task7_edx.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\task7_edx.dir\main.cpp.obj -c C:\Users\shahins\CLionProjects\task7_edx\main.cpp

CMakeFiles/task7_edx.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task7_edx.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\shahins\CLionProjects\task7_edx\main.cpp > CMakeFiles\task7_edx.dir\main.cpp.i

CMakeFiles/task7_edx.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task7_edx.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\shahins\CLionProjects\task7_edx\main.cpp -o CMakeFiles\task7_edx.dir\main.cpp.s

# Object files for target task7_edx
task7_edx_OBJECTS = \
"CMakeFiles/task7_edx.dir/main.cpp.obj"

# External object files for target task7_edx
task7_edx_EXTERNAL_OBJECTS =

task7_edx.exe: CMakeFiles/task7_edx.dir/main.cpp.obj
task7_edx.exe: CMakeFiles/task7_edx.dir/build.make
task7_edx.exe: CMakeFiles/task7_edx.dir/linklibs.rsp
task7_edx.exe: CMakeFiles/task7_edx.dir/objects1.rsp
task7_edx.exe: CMakeFiles/task7_edx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\shahins\CLionProjects\task7_edx\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task7_edx.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\task7_edx.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task7_edx.dir/build: task7_edx.exe

.PHONY : CMakeFiles/task7_edx.dir/build

CMakeFiles/task7_edx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task7_edx.dir\cmake_clean.cmake
.PHONY : CMakeFiles/task7_edx.dir/clean

CMakeFiles/task7_edx.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\shahins\CLionProjects\task7_edx C:\Users\shahins\CLionProjects\task7_edx C:\Users\shahins\CLionProjects\task7_edx\cmake-build-debug C:\Users\shahins\CLionProjects\task7_edx\cmake-build-debug C:\Users\shahins\CLionProjects\task7_edx\cmake-build-debug\CMakeFiles\task7_edx.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task7_edx.dir/depend
