# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/sf_wspol/niewiem/trunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/sf_wspol/niewiem/trunk/target

# Include any dependencies generated for this target.
include biblioteka/CMakeFiles/TestBibl.dir/depend.make

# Include the progress variables for this target.
include biblioteka/CMakeFiles/TestBibl.dir/progress.make

# Include the compile flags for this target's objects.
include biblioteka/CMakeFiles/TestBibl.dir/flags.make

biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o: biblioteka/CMakeFiles/TestBibl.dir/flags.make
biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o: ../biblioteka/test/master.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/sf_wspol/niewiem/trunk/target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o"
	cd /media/sf_wspol/niewiem/trunk/target/biblioteka && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestBibl.dir/test/master.cpp.o -c /media/sf_wspol/niewiem/trunk/biblioteka/test/master.cpp

biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestBibl.dir/test/master.cpp.i"
	cd /media/sf_wspol/niewiem/trunk/target/biblioteka && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_wspol/niewiem/trunk/biblioteka/test/master.cpp > CMakeFiles/TestBibl.dir/test/master.cpp.i

biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestBibl.dir/test/master.cpp.s"
	cd /media/sf_wspol/niewiem/trunk/target/biblioteka && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_wspol/niewiem/trunk/biblioteka/test/master.cpp -o CMakeFiles/TestBibl.dir/test/master.cpp.s

biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o.requires:

.PHONY : biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o.requires

biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o.provides: biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o.requires
	$(MAKE) -f biblioteka/CMakeFiles/TestBibl.dir/build.make biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o.provides.build
.PHONY : biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o.provides

biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o.provides.build: biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o


biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o: biblioteka/CMakeFiles/TestBibl.dir/flags.make
biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o: ../biblioteka/test/ClientTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/sf_wspol/niewiem/trunk/target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o"
	cd /media/sf_wspol/niewiem/trunk/target/biblioteka && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o -c /media/sf_wspol/niewiem/trunk/biblioteka/test/ClientTest.cpp

biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestBibl.dir/test/ClientTest.cpp.i"
	cd /media/sf_wspol/niewiem/trunk/target/biblioteka && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_wspol/niewiem/trunk/biblioteka/test/ClientTest.cpp > CMakeFiles/TestBibl.dir/test/ClientTest.cpp.i

biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestBibl.dir/test/ClientTest.cpp.s"
	cd /media/sf_wspol/niewiem/trunk/target/biblioteka && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_wspol/niewiem/trunk/biblioteka/test/ClientTest.cpp -o CMakeFiles/TestBibl.dir/test/ClientTest.cpp.s

biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o.requires:

.PHONY : biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o.requires

biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o.provides: biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o.requires
	$(MAKE) -f biblioteka/CMakeFiles/TestBibl.dir/build.make biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o.provides.build
.PHONY : biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o.provides

biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o.provides.build: biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o


# Object files for target TestBibl
TestBibl_OBJECTS = \
"CMakeFiles/TestBibl.dir/test/master.cpp.o" \
"CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o"

# External object files for target TestBibl
TestBibl_EXTERNAL_OBJECTS =

biblioteka/TestBibl: biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o
biblioteka/TestBibl: biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o
biblioteka/TestBibl: biblioteka/CMakeFiles/TestBibl.dir/build.make
biblioteka/TestBibl: biblioteka/libBiblioteka.a
biblioteka/TestBibl: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so
biblioteka/TestBibl: biblioteka/CMakeFiles/TestBibl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/sf_wspol/niewiem/trunk/target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TestBibl"
	cd /media/sf_wspol/niewiem/trunk/target/biblioteka && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestBibl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
biblioteka/CMakeFiles/TestBibl.dir/build: biblioteka/TestBibl

.PHONY : biblioteka/CMakeFiles/TestBibl.dir/build

biblioteka/CMakeFiles/TestBibl.dir/requires: biblioteka/CMakeFiles/TestBibl.dir/test/master.cpp.o.requires
biblioteka/CMakeFiles/TestBibl.dir/requires: biblioteka/CMakeFiles/TestBibl.dir/test/ClientTest.cpp.o.requires

.PHONY : biblioteka/CMakeFiles/TestBibl.dir/requires

biblioteka/CMakeFiles/TestBibl.dir/clean:
	cd /media/sf_wspol/niewiem/trunk/target/biblioteka && $(CMAKE_COMMAND) -P CMakeFiles/TestBibl.dir/cmake_clean.cmake
.PHONY : biblioteka/CMakeFiles/TestBibl.dir/clean

biblioteka/CMakeFiles/TestBibl.dir/depend:
	cd /media/sf_wspol/niewiem/trunk/target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/sf_wspol/niewiem/trunk /media/sf_wspol/niewiem/trunk/biblioteka /media/sf_wspol/niewiem/trunk/target /media/sf_wspol/niewiem/trunk/target/biblioteka /media/sf_wspol/niewiem/trunk/target/biblioteka/CMakeFiles/TestBibl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : biblioteka/CMakeFiles/TestBibl.dir/depend

