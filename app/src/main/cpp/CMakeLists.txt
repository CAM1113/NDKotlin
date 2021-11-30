
# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

# cmake版本
cmake_minimum_required(VERSION 3.10.2)
#
#运行子目录下的CMakeList.txt
add_subdirectory(./security)
add_subdirectory(./image_process)




