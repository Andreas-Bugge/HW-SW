# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.8/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.8/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mathiesschou/Desktop/HW-SW/AlarmSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mathiesschou/Desktop/HW-SW/build

# Include any dependencies generated for this target.
include CMakeFiles/Alarmlib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Alarmlib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Alarmlib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Alarmlib.dir/flags.make

CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.o: CMakeFiles/Alarmlib.dir/flags.make
CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.o: /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Login.cpp
CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.o: CMakeFiles/Alarmlib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mathiesschou/Desktop/HW-SW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.o -MF CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.o.d -o CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.o -c /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Login.cpp

CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Login.cpp > CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.i

CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Login.cpp -o CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.s

CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.o: CMakeFiles/Alarmlib.dir/flags.make
CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.o: /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/StateManagement.cpp
CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.o: CMakeFiles/Alarmlib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mathiesschou/Desktop/HW-SW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.o -MF CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.o.d -o CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.o -c /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/StateManagement.cpp

CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/StateManagement.cpp > CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.i

CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/StateManagement.cpp -o CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.s

CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.o: CMakeFiles/Alarmlib.dir/flags.make
CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.o: /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Sensors.cpp
CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.o: CMakeFiles/Alarmlib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mathiesschou/Desktop/HW-SW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.o -MF CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.o.d -o CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.o -c /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Sensors.cpp

CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Sensors.cpp > CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.i

CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Sensors.cpp -o CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.s

CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.o: CMakeFiles/Alarmlib.dir/flags.make
CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.o: /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Camera.cpp
CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.o: CMakeFiles/Alarmlib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mathiesschou/Desktop/HW-SW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.o -MF CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.o.d -o CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.o -c /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Camera.cpp

CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Camera.cpp > CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.i

CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/Camera.cpp -o CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.s

CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.o: CMakeFiles/Alarmlib.dir/flags.make
CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.o: /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/SharedData.cpp
CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.o: CMakeFiles/Alarmlib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mathiesschou/Desktop/HW-SW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.o -MF CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.o.d -o CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.o -c /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/SharedData.cpp

CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/SharedData.cpp > CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.i

CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/SharedData.cpp -o CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.s

CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.o: CMakeFiles/Alarmlib.dir/flags.make
CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.o: /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/IntrusionDetector.cpp
CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.o: CMakeFiles/Alarmlib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mathiesschou/Desktop/HW-SW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.o -MF CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.o.d -o CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.o -c /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/IntrusionDetector.cpp

CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/IntrusionDetector.cpp > CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.i

CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mathiesschou/Desktop/HW-SW/AlarmSystem/sourcefiles/IntrusionDetector.cpp -o CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.s

# Object files for target Alarmlib
Alarmlib_OBJECTS = \
"CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.o" \
"CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.o" \
"CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.o" \
"CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.o" \
"CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.o" \
"CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.o"

# External object files for target Alarmlib
Alarmlib_EXTERNAL_OBJECTS =

libAlarmlib.a: CMakeFiles/Alarmlib.dir/sourcefiles/Login.cpp.o
libAlarmlib.a: CMakeFiles/Alarmlib.dir/sourcefiles/StateManagement.cpp.o
libAlarmlib.a: CMakeFiles/Alarmlib.dir/sourcefiles/Sensors.cpp.o
libAlarmlib.a: CMakeFiles/Alarmlib.dir/sourcefiles/Camera.cpp.o
libAlarmlib.a: CMakeFiles/Alarmlib.dir/sourcefiles/SharedData.cpp.o
libAlarmlib.a: CMakeFiles/Alarmlib.dir/sourcefiles/IntrusionDetector.cpp.o
libAlarmlib.a: CMakeFiles/Alarmlib.dir/build.make
libAlarmlib.a: CMakeFiles/Alarmlib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/mathiesschou/Desktop/HW-SW/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libAlarmlib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Alarmlib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Alarmlib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Alarmlib.dir/build: libAlarmlib.a
.PHONY : CMakeFiles/Alarmlib.dir/build

CMakeFiles/Alarmlib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Alarmlib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Alarmlib.dir/clean

CMakeFiles/Alarmlib.dir/depend:
	cd /Users/mathiesschou/Desktop/HW-SW/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mathiesschou/Desktop/HW-SW/AlarmSystem /Users/mathiesschou/Desktop/HW-SW/AlarmSystem /Users/mathiesschou/Desktop/HW-SW/build /Users/mathiesschou/Desktop/HW-SW/build /Users/mathiesschou/Desktop/HW-SW/build/CMakeFiles/Alarmlib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Alarmlib.dir/depend

