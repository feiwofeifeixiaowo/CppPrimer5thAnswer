cmake_minimum_required(VERSION 3.3)
project(Cpp_Primer_5E_Learning)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Chapter10/E10.34_35_36_37.cpp)
add_executable(Cpp_Primer_5E_Learning ${SOURCE_FILES})