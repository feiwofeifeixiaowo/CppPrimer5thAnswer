# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cpp_Primer_5E_Learning.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cpp_Primer_5E_Learning.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cpp_Primer_5E_Learning.dir/flags.make

CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o: CMakeFiles/Cpp_Primer_5E_Learning.dir/flags.make
CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o: ../Chapter16/Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o -c /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/Chapter16/Test.cpp

CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/Chapter16/Test.cpp > CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.i

CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/Chapter16/Test.cpp -o CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.s

CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o.requires:

.PHONY : CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o.requires

CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o.provides: CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o.requires
	$(MAKE) -f CMakeFiles/Cpp_Primer_5E_Learning.dir/build.make CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o.provides.build
.PHONY : CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o.provides

CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o.provides.build: CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o


# Object files for target Cpp_Primer_5E_Learning
Cpp_Primer_5E_Learning_OBJECTS = \
"CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o"

# External object files for target Cpp_Primer_5E_Learning
Cpp_Primer_5E_Learning_EXTERNAL_OBJECTS =

Cpp_Primer_5E_Learning: CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o
Cpp_Primer_5E_Learning: CMakeFiles/Cpp_Primer_5E_Learning.dir/build.make
Cpp_Primer_5E_Learning: CMakeFiles/Cpp_Primer_5E_Learning.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Cpp_Primer_5E_Learning"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cpp_Primer_5E_Learning.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cpp_Primer_5E_Learning.dir/build: Cpp_Primer_5E_Learning

.PHONY : CMakeFiles/Cpp_Primer_5E_Learning.dir/build

CMakeFiles/Cpp_Primer_5E_Learning.dir/requires: CMakeFiles/Cpp_Primer_5E_Learning.dir/Chapter16/Test.cpp.o.requires

.PHONY : CMakeFiles/Cpp_Primer_5E_Learning.dir/requires

CMakeFiles/Cpp_Primer_5E_Learning.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cpp_Primer_5E_Learning.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cpp_Primer_5E_Learning.dir/clean

CMakeFiles/Cpp_Primer_5E_Learning.dir/depend:
	cd /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/cmake-build-debug /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/cmake-build-debug /Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/cmake-build-debug/CMakeFiles/Cpp_Primer_5E_Learning.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cpp_Primer_5E_Learning.dir/depend

