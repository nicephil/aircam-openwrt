# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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
CMAKE_COMMAND = /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4/Bootstrap.cmk/cmake

# The command to remove a file.
RM = /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4/Bootstrap.cmk/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4

# Utility rule file for ContinuousMemCheck.

CMakeFiles/ContinuousMemCheck:
	CMAKE_CTEST_COMMAND-NOTFOUND -D ContinuousMemCheck

ContinuousMemCheck: CMakeFiles/ContinuousMemCheck
ContinuousMemCheck: CMakeFiles/ContinuousMemCheck.dir/build.make
.PHONY : ContinuousMemCheck

# Rule to build all files generated by this target.
CMakeFiles/ContinuousMemCheck.dir/build: ContinuousMemCheck
.PHONY : CMakeFiles/ContinuousMemCheck.dir/build

CMakeFiles/ContinuousMemCheck.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ContinuousMemCheck.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ContinuousMemCheck.dir/clean

CMakeFiles/ContinuousMemCheck.dir/depend:
	cd /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4 /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4 /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4 /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4 /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/host/cmake-2.8.4/CMakeFiles/ContinuousMemCheck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ContinuousMemCheck.dir/depend
