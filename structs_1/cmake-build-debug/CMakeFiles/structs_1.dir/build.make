# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\shako\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\shako\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\shako\CLionProjects\c++\structs_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\shako\CLionProjects\c++\structs_1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/structs_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/structs_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/structs_1.dir/flags.make

CMakeFiles/structs_1.dir/main.cpp.obj: CMakeFiles/structs_1.dir/flags.make
CMakeFiles/structs_1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\shako\CLionProjects\c++\structs_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/structs_1.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\structs_1.dir\main.cpp.obj -c C:\Users\shako\CLionProjects\c++\structs_1\main.cpp

CMakeFiles/structs_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/structs_1.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\shako\CLionProjects\c++\structs_1\main.cpp > CMakeFiles\structs_1.dir\main.cpp.i

CMakeFiles/structs_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/structs_1.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\shako\CLionProjects\c++\structs_1\main.cpp -o CMakeFiles\structs_1.dir\main.cpp.s

# Object files for target structs_1
structs_1_OBJECTS = \
"CMakeFiles/structs_1.dir/main.cpp.obj"

# External object files for target structs_1
structs_1_EXTERNAL_OBJECTS =

structs_1.exe: CMakeFiles/structs_1.dir/main.cpp.obj
structs_1.exe: CMakeFiles/structs_1.dir/build.make
structs_1.exe: CMakeFiles/structs_1.dir/linklibs.rsp
structs_1.exe: CMakeFiles/structs_1.dir/objects1.rsp
structs_1.exe: CMakeFiles/structs_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\shako\CLionProjects\c++\structs_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable structs_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\structs_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/structs_1.dir/build: structs_1.exe

.PHONY : CMakeFiles/structs_1.dir/build

CMakeFiles/structs_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\structs_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/structs_1.dir/clean

CMakeFiles/structs_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\shako\CLionProjects\c++\structs_1 C:\Users\shako\CLionProjects\c++\structs_1 C:\Users\shako\CLionProjects\c++\structs_1\cmake-build-debug C:\Users\shako\CLionProjects\c++\structs_1\cmake-build-debug C:\Users\shako\CLionProjects\c++\structs_1\cmake-build-debug\CMakeFiles\structs_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/structs_1.dir/depend

