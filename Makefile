# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/lennart/Nextcloud/dev/cla-collection

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lennart/Nextcloud/dev/cla-collection

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/lennart/Nextcloud/dev/cla-collection/CMakeFiles /home/lennart/Nextcloud/dev/cla-collection/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/lennart/Nextcloud/dev/cla-collection/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named readconfig

# Build rule for target.
readconfig: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 readconfig
.PHONY : readconfig

# fast build rule for target.
readconfig/fast:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/build
.PHONY : readconfig/fast

src/logger.o: src/logger.c.o

.PHONY : src/logger.o

# target to build an object file
src/logger.c.o:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/src/logger.c.o
.PHONY : src/logger.c.o

src/logger.i: src/logger.c.i

.PHONY : src/logger.i

# target to preprocess a source file
src/logger.c.i:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/src/logger.c.i
.PHONY : src/logger.c.i

src/logger.s: src/logger.c.s

.PHONY : src/logger.s

# target to generate assembly for a file
src/logger.c.s:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/src/logger.c.s
.PHONY : src/logger.c.s

src/readconfig.o: src/readconfig.c.o

.PHONY : src/readconfig.o

# target to build an object file
src/readconfig.c.o:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/src/readconfig.c.o
.PHONY : src/readconfig.c.o

src/readconfig.i: src/readconfig.c.i

.PHONY : src/readconfig.i

# target to preprocess a source file
src/readconfig.c.i:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/src/readconfig.c.i
.PHONY : src/readconfig.c.i

src/readconfig.s: src/readconfig.c.s

.PHONY : src/readconfig.s

# target to generate assembly for a file
src/readconfig.c.s:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/src/readconfig.c.s
.PHONY : src/readconfig.c.s

src/replacer.o: src/replacer.c.o

.PHONY : src/replacer.o

# target to build an object file
src/replacer.c.o:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/src/replacer.c.o
.PHONY : src/replacer.c.o

src/replacer.i: src/replacer.c.i

.PHONY : src/replacer.i

# target to preprocess a source file
src/replacer.c.i:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/src/replacer.c.i
.PHONY : src/replacer.c.i

src/replacer.s: src/replacer.c.s

.PHONY : src/replacer.s

# target to generate assembly for a file
src/replacer.c.s:
	$(MAKE) -f CMakeFiles/readconfig.dir/build.make CMakeFiles/readconfig.dir/src/replacer.c.s
.PHONY : src/replacer.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... readconfig"
	@echo "... src/logger.o"
	@echo "... src/logger.i"
	@echo "... src/logger.s"
	@echo "... src/readconfig.o"
	@echo "... src/readconfig.i"
	@echo "... src/readconfig.s"
	@echo "... src/replacer.o"
	@echo "... src/replacer.i"
	@echo "... src/replacer.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

