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
CMAKE_SOURCE_DIR = C:\Users\shako\CLionProjects\c++\void+void+int_function

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\shako\CLionProjects\c++\void+void+int_function\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/void_void_int_function.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/void_void_int_function.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/void_void_int_function.dir/flags.make

CMakeFiles/void_void_int_function.dir/main.cpp.obj: CMakeFiles/void_void_int_function.dir/flags.make
CMakeFiles/void_void_int_function.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\shako\CLionProjects\c++\void+void+int_function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/void_void_int_function.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\void_void_int_function.dir\main.cpp.obj -c C:\Users\shako\CLionProjects\c++\void+void+int_function\main.cpp

CMakeFiles/void_void_int_function.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/void_void_int_function.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\shako\CLionProjects\c++\void+void+int_function\main.cpp > CMakeFiles\void_void_int_function.dir\main.cpp.i

CMakeFiles/void_void_int_function.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/void_void_int_function.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\shako\CLionProjects\c++\void+void+int_function\main.cpp -o CMakeFiles\void_void_int_function.dir\main.cpp.s

# Object files for target void_void_int_function
void_void_int_function_OBJECTS = \
"CMakeFiles/void_void_int_function.dir/main.cpp.obj"

# External object files for target void_void_int_function
void_void_int_function_EXTERNAL_OBJECTS =

void_void_int_function.exe: CMakeFiles/void_void_int_function.dir/main.cpp.obj
void_void_int_function.exe: CMakeFiles/void_void_int_function.dir/build.make
void_void_int_function.exe: CMakeFiles/void_void_int_function.dir/linklibs.rsp
void_void_int_function.exe: CMakeFiles/void_void_int_function.dir/objects1.rsp
void_void_int_function.exe: CMakeFiles/void_void_int_function.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\shako\CLionProjects\c++\void+void+int_function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable void_void_int_function.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\void_void_int_function.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/void_void_int_function.dir/build: void_void_int_function.exe

.PHONY : CMakeFiles/void_void_int_function.dir/build

CMakeFiles/void_void_int_function.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\void_void_int_function.dir\cmake_clean.cmake
.PHONY : CMakeFiles/void_void_int_function.dir/clean

CMakeFiles/void_void_int_function.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\shako\CLionProjects\c++\void+void+int_function C:\Users\shako\CLionProjects\c++\void+void+int_function C:\Users\shako\CLionProjects\c++\void+void+int_function\cmake-build-debug C:\Users\shako\CLionProjects\c++\void+void+int_function\cmake-build-debug C:\Users\shako\CLionProjects\c++\void+void+int_function\cmake-build-debug\CMakeFiles\void_void_int_function.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/void_void_int_function.dir/depend

