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
CMAKE_SOURCE_DIR = C:\Users\shahins\CLionProjects\task14_edx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\shahins\CLionProjects\task14_edx\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task14_edx.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task14_edx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task14_edx.dir/flags.make

CMakeFiles/task14_edx.dir/main.cpp.obj: CMakeFiles/task14_edx.dir/flags.make
CMakeFiles/task14_edx.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\shahins\CLionProjects\task14_edx\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task14_edx.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\task14_edx.dir\main.cpp.obj -c C:\Users\shahins\CLionProjects\task14_edx\main.cpp

CMakeFiles/task14_edx.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task14_edx.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\shahins\CLionProjects\task14_edx\main.cpp > CMakeFiles\task14_edx.dir\main.cpp.i

CMakeFiles/task14_edx.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task14_edx.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\shahins\CLionProjects\task14_edx\main.cpp -o CMakeFiles\task14_edx.dir\main.cpp.s

# Object files for target task14_edx
task14_edx_OBJECTS = \
"CMakeFiles/task14_edx.dir/main.cpp.obj"

# External object files for target task14_edx
task14_edx_EXTERNAL_OBJECTS =

task14_edx.exe: CMakeFiles/task14_edx.dir/main.cpp.obj
task14_edx.exe: CMakeFiles/task14_edx.dir/build.make
task14_edx.exe: CMakeFiles/task14_edx.dir/linklibs.rsp
task14_edx.exe: CMakeFiles/task14_edx.dir/objects1.rsp
task14_edx.exe: CMakeFiles/task14_edx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\shahins\CLionProjects\task14_edx\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task14_edx.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\task14_edx.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task14_edx.dir/build: task14_edx.exe

.PHONY : CMakeFiles/task14_edx.dir/build

CMakeFiles/task14_edx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task14_edx.dir\cmake_clean.cmake
.PHONY : CMakeFiles/task14_edx.dir/clean

CMakeFiles/task14_edx.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\shahins\CLionProjects\task14_edx C:\Users\shahins\CLionProjects\task14_edx C:\Users\shahins\CLionProjects\task14_edx\cmake-build-debug C:\Users\shahins\CLionProjects\task14_edx\cmake-build-debug C:\Users\shahins\CLionProjects\task14_edx\cmake-build-debug\CMakeFiles\task14_edx.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task14_edx.dir/depend

