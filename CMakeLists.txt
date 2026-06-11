cmake_minimum_required(VERSION 3.16)
project(DS_A_in_CPP)

# Automatically generate compile_commands.json in the build directory
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(chapters/ch01_cpp_primer)
add_subdirectory(chapters/ch02_oop)
add_subdirectory(chapters/ch03_arr_lst_recursion)
add_subdirectory(chapters/ch04_analysis_tools)
