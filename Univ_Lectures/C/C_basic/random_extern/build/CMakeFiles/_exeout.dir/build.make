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
CMAKE_SOURCE_DIR = /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/build

# Include any dependencies generated for this target.
include CMakeFiles/_exeout.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_exeout.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_exeout.dir/flags.make

CMakeFiles/_exeout.dir/main.c.o: CMakeFiles/_exeout.dir/flags.make
CMakeFiles/_exeout.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/_exeout.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/_exeout.dir/main.c.o   -c /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/main.c

CMakeFiles/_exeout.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/_exeout.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/main.c > CMakeFiles/_exeout.dir/main.c.i

CMakeFiles/_exeout.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/_exeout.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/main.c -o CMakeFiles/_exeout.dir/main.c.s

CMakeFiles/_exeout.dir/random.c.o: CMakeFiles/_exeout.dir/flags.make
CMakeFiles/_exeout.dir/random.c.o: ../random.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/_exeout.dir/random.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/_exeout.dir/random.c.o   -c /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/random.c

CMakeFiles/_exeout.dir/random.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/_exeout.dir/random.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/random.c > CMakeFiles/_exeout.dir/random.c.i

CMakeFiles/_exeout.dir/random.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/_exeout.dir/random.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/random.c -o CMakeFiles/_exeout.dir/random.c.s

# Object files for target _exeout
_exeout_OBJECTS = \
"CMakeFiles/_exeout.dir/main.c.o" \
"CMakeFiles/_exeout.dir/random.c.o"

# External object files for target _exeout
_exeout_EXTERNAL_OBJECTS =

_exeout: CMakeFiles/_exeout.dir/main.c.o
_exeout: CMakeFiles/_exeout.dir/random.c.o
_exeout: CMakeFiles/_exeout.dir/build.make
_exeout: CMakeFiles/_exeout.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable _exeout"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_exeout.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_exeout.dir/build: _exeout

.PHONY : CMakeFiles/_exeout.dir/build

CMakeFiles/_exeout.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/_exeout.dir/cmake_clean.cmake
.PHONY : CMakeFiles/_exeout.dir/clean

CMakeFiles/_exeout.dir/depend:
	cd /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/build /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/build /home/kimbob/Git/Study/Univ_Lectures/C/C_basic/random_extern/build/CMakeFiles/_exeout.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_exeout.dir/depend
