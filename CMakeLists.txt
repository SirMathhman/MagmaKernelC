cmake_minimum_required(VERSION 3.15)
project(MagmaKernelC C)

set(CMAKE_C_STANDARD 99)

add_library(source SHARED Core.c Core.h)

add_executable(main Main.c)
target_link_libraries(main source)

add_executable(test Test.c)
target_link_libraries(test source)