cmake_minimum_required(VERSION 3.15)
project(MagmaKernelC C)

set(CMAKE_C_STANDARD 99)

add_executable(MagmaKernelC Core.c Core.h Main.c Array.c Array.h Throwable.c Throwable.h Optional.c Optional.h)