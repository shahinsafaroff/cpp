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
CMAKE_SOURCE_DIR = C:\Users\shako\CLionProjects\c++\const_strings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\shako\CLionProjects\c++\const_strings\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/const_strings.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/const_strings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/const_strings.dir/flags.make

CMakeFiles/const_strings.dir/main.cpp.obj: CMakeFiles/const_strings.dir/flags.make
CMakeFiles/const_strings.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\shako\CLionProjects\c++\const_strings\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/const_strings.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\const_strings.dir\main.cpp.obj -c C:\Users\shako\CLionProjects\c++\const_strings\main.cpp

CMakeFiles/const_strings.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/const_strings.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\shako\CLionProjects\c++\const_strings\main.cpp > CMakeFiles\const_strings.dir\main.cpp.i

CMakeFiles/const_strings.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/const_strings.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\shako\CLionProjects\c++\const_strings\main.cpp -o CMakeFiles\const_strings.dir\main.cpp.s

# Object files for target const_strings
const_strings_OBJECTS = \
"CMakeFiles/const_strings.dir/main.cpp.obj"

# External object files for target const_strings
const_strings_EXTERNAL_OBJECTS =

const_strings.exe: CMakeFiles/const_strings.dir/main.cpp.obj
const_strings.exe: CMakeFiles/const_strings.dir/build.make
const_strings.exe: CMakeFiles/const_strings.dir/linklibs.rsp
const_strings.exe: CMakeFiles/const_strings.dir/objects1.rsp
const_strings.exe: CMakeFiles/const_strings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\shako\CLionProjects\c++\const_strings\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable const_strings.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\const_strings.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/const_strings.dir/build: const_strings.exe

.PHONY : CMakeFiles/const_strings.dir/build

CMakeFiles/const_strings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\const_strings.dir\cmake_clean.cmake
.PHONY : CMakeFiles/const_strings.dir/clean

CMakeFiles/const_strings.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\shako\CLionProjects\c++\const_strings C:\Users\shako\CLionProjects\c++\const_strings C:\Users\shako\CLionProjects\c++\const_strings\cmake-build-debug C:\Users\shako\CLionProjects\c++\const_strings\cmake-build-debug C:\Users\shako\CLionProjects\c++\const_strings\cmake-build-debug\CMakeFiles\const_strings.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/const_strings.dir/depend
