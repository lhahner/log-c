# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lennart/Dev/cla-collection

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lennart/Dev/cla-collection/build

# Include any dependencies generated for this target.
include CMakeFiles/readconfig.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/readconfig.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/readconfig.dir/flags.make

CMakeFiles/readconfig.dir/src/logger.c.o: CMakeFiles/readconfig.dir/flags.make
CMakeFiles/readconfig.dir/src/logger.c.o: ../src/logger.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lennart/Dev/cla-collection/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/readconfig.dir/src/logger.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/readconfig.dir/src/logger.c.o   -c /home/lennart/Dev/cla-collection/src/logger.c

CMakeFiles/readconfig.dir/src/logger.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/readconfig.dir/src/logger.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lennart/Dev/cla-collection/src/logger.c > CMakeFiles/readconfig.dir/src/logger.c.i

CMakeFiles/readconfig.dir/src/logger.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/readconfig.dir/src/logger.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lennart/Dev/cla-collection/src/logger.c -o CMakeFiles/readconfig.dir/src/logger.c.s

CMakeFiles/readconfig.dir/src/replacer.c.o: CMakeFiles/readconfig.dir/flags.make
CMakeFiles/readconfig.dir/src/replacer.c.o: ../src/replacer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lennart/Dev/cla-collection/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/readconfig.dir/src/replacer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/readconfig.dir/src/replacer.c.o   -c /home/lennart/Dev/cla-collection/src/replacer.c

CMakeFiles/readconfig.dir/src/replacer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/readconfig.dir/src/replacer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lennart/Dev/cla-collection/src/replacer.c > CMakeFiles/readconfig.dir/src/replacer.c.i

CMakeFiles/readconfig.dir/src/replacer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/readconfig.dir/src/replacer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lennart/Dev/cla-collection/src/replacer.c -o CMakeFiles/readconfig.dir/src/replacer.c.s

CMakeFiles/readconfig.dir/src/readconfig.c.o: CMakeFiles/readconfig.dir/flags.make
CMakeFiles/readconfig.dir/src/readconfig.c.o: ../src/readconfig.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lennart/Dev/cla-collection/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/readconfig.dir/src/readconfig.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/readconfig.dir/src/readconfig.c.o   -c /home/lennart/Dev/cla-collection/src/readconfig.c

CMakeFiles/readconfig.dir/src/readconfig.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/readconfig.dir/src/readconfig.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lennart/Dev/cla-collection/src/readconfig.c > CMakeFiles/readconfig.dir/src/readconfig.c.i

CMakeFiles/readconfig.dir/src/readconfig.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/readconfig.dir/src/readconfig.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lennart/Dev/cla-collection/src/readconfig.c -o CMakeFiles/readconfig.dir/src/readconfig.c.s

# Object files for target readconfig
readconfig_OBJECTS = \
"CMakeFiles/readconfig.dir/src/logger.c.o" \
"CMakeFiles/readconfig.dir/src/replacer.c.o" \
"CMakeFiles/readconfig.dir/src/readconfig.c.o"

# External object files for target readconfig
readconfig_EXTERNAL_OBJECTS =

readconfig: CMakeFiles/readconfig.dir/src/logger.c.o
readconfig: CMakeFiles/readconfig.dir/src/replacer.c.o
readconfig: CMakeFiles/readconfig.dir/src/readconfig.c.o
readconfig: CMakeFiles/readconfig.dir/build.make
readconfig: /usr/local/lib/libxml2.so
readconfig: CMakeFiles/readconfig.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lennart/Dev/cla-collection/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable readconfig"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/readconfig.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/readconfig.dir/build: readconfig

.PHONY : CMakeFiles/readconfig.dir/build

CMakeFiles/readconfig.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/readconfig.dir/cmake_clean.cmake
.PHONY : CMakeFiles/readconfig.dir/clean

CMakeFiles/readconfig.dir/depend:
	cd /home/lennart/Dev/cla-collection/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lennart/Dev/cla-collection /home/lennart/Dev/cla-collection /home/lennart/Dev/cla-collection/build /home/lennart/Dev/cla-collection/build /home/lennart/Dev/cla-collection/build/CMakeFiles/readconfig.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/readconfig.dir/depend

