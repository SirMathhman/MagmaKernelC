cmake_minimum_required(VERSION 3.15)
project(MagmaKernelC C)

set(CMAKE_C_STANDARD 99)

add_executable(MagmaKernelC Main.c Core.h Assertions.c Assertions.h Main.h)