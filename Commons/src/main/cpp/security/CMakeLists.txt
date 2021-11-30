
#替换，相当于宏定义
set(MY_PROJECT_NAME_CAM security)
# Declares and names the project.
#项目名称，非必选
project(${MY_PROJECT_NAME_CAM})

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
#        库的名称
        ${MY_PROJECT_NAME_CAM}

        # 将库设置为.so动态连接库
        SHARED

        # Provides a relative path to your source file(s).
        # 添加动态库里包含的所有cpp文件，包括引用的lib里的cpp
        Security.cpp
        )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
#        库位置对应的名称，给其他地方使用
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
#        库生成的中间文件的位置
        log)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        ${MY_PROJECT_NAME_CAM}

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib})
