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
CMAKE_COMMAND = C:\Users\shako\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\shako\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\shako\CLionProjects\c++\file_handling_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\shako\CLionProjects\c++\file_handling_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/file_handling_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/file_handling_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/file_handling_2.dir/flags.make

CMakeFiles/file_handling_2.dir/main.cpp.obj: CMakeFiles/file_handling_2.dir/flags.make
CMakeFiles/file_handling_2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\shako\CLionProjects\c++\file_handling_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/file_handling_2.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\file_handling_2.dir\main.cpp.obj -c C:\Users\shako\CLionProjects\c++\file_handling_2\main.cpp

CMakeFiles/file_handling_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/file_handling_2.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\shako\CLionProjects\c++\file_handling_2\main.cpp > CMakeFiles\file_handling_2.dir\main.cpp.i

CMakeFiles/file_handling_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/file_handling_2.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\shako\CLionProjects\c++\file_handling_2\main.cpp -o CMakeFiles\file_handling_2.dir\main.cpp.s

# Object files for target file_handling_2
file_handling_2_OBJECTS = \
"CMakeFiles/file_handling_2.dir/main.cpp.obj"

# External object files for target file_handling_2
file_handling_2_EXTERNAL_OBJECTS =

file_handling_2.exe: CMakeFiles/file_handling_2.dir/main.cpp.obj
file_handling_2.exe: CMakeFiles/file_handling_2.dir/build.make
file_handling_2.exe: CMakeFiles/file_handling_2.dir/linklibs.rsp
file_handling_2.exe: CMakeFiles/file_handling_2.dir/objects1.rsp
file_handling_2.exe: CMakeFiles/file_handling_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\shako\CLionProjects\c++\file_handling_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable file_handling_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\file_handling_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/file_handling_2.dir/build: file_handling_2.exe

.PHONY : CMakeFiles/file_handling_2.dir/build

CMakeFiles/file_handling_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\file_handling_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/file_handling_2.dir/clean

CMakeFiles/file_handling_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\shako\CLionProjects\c++\file_handling_2 C:\Users\shako\CLionProjects\c++\file_handling_2 C:\Users\shako\CLionProjects\c++\file_handling_2\cmake-build-debug C:\Users\shako\CLionProjects\c++\file_handling_2\cmake-build-debug C:\Users\shako\CLionProjects\c++\file_handling_2\cmake-build-debug\CMakeFiles\file_handling_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/file_handling_2.dir/depend

