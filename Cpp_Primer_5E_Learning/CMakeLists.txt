# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.3)

# 项目信息
project(Cpp_Primer_5E_Learning)

# 设置编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#aux_source_directory(. DIR_SRCS)

# 添加 StrBlobPtr 子目录
add_subdirectory(Chapter12/E12.22)

# 执行文件 入口函数所在文件
set(SOURCE_FILES  main.cpp)

# 指定生成目标
add_executable(Cpp_Primer_5E_Learning ${SOURCE_FILES})

# 添加链接库
target_link_libraries(Cpp_Primer_5E_Learning ConstStrBlobPtr)