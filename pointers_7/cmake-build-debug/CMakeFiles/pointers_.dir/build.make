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
CMAKE_SOURCE_DIR = C:\Users\shako\CLionProjects\c++\pointers_7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\shako\CLionProjects\c++\pointers_7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pointers_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pointers_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointers_.dir/flags.make

CMakeFiles/pointers_.dir/main.cpp.obj: CMakeFiles/pointers_.dir/flags.make
CMakeFiles/pointers_.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\shako\CLionProjects\c++\pointers_7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pointers_.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pointers_.dir\main.cpp.obj -c C:\Users\shako\CLionProjects\c++\pointers_7\main.cpp

CMakeFiles/pointers_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\shako\CLionProjects\c++\pointers_7\main.cpp > CMakeFiles\pointers_.dir\main.cpp.i

CMakeFiles/pointers_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\shako\CLionProjects\c++\pointers_7\main.cpp -o CMakeFiles\pointers_.dir\main.cpp.s

# Object files for target pointers_
pointers__OBJECTS = \
"CMakeFiles/pointers_.dir/main.cpp.obj"

# External object files for target pointers_
pointers__EXTERNAL_OBJECTS =

pointers_.exe: CMakeFiles/pointers_.dir/main.cpp.obj
pointers_.exe: CMakeFiles/pointers_.dir/build.make
pointers_.exe: CMakeFiles/pointers_.dir/linklibs.rsp
pointers_.exe: CMakeFiles/pointers_.dir/objects1.rsp
pointers_.exe: CMakeFiles/pointers_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\shako\CLionProjects\c++\pointers_7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pointers_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pointers_.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointers_.dir/build: pointers_.exe

.PHONY : CMakeFiles/pointers_.dir/build

CMakeFiles/pointers_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pointers_.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pointers_.dir/clean

CMakeFiles/pointers_.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\shako\CLionProjects\c++\pointers_7 C:\Users\shako\CLionProjects\c++\pointers_7 C:\Users\shako\CLionProjects\c++\pointers_7\cmake-build-debug C:\Users\shako\CLionProjects\c++\pointers_7\cmake-build-debug C:\Users\shako\CLionProjects\c++\pointers_7\cmake-build-debug\CMakeFiles\pointers_.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointers_.dir/depend

