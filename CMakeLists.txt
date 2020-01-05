cmake_minimum_required(VERSION 3.15)
project(MagmaKernelC C)

set(CMAKE_C_STANDARD 99)

add_executable(MagmaKernelC
        Main.c
        Main.h
        src/Core.h
        src/test/Assertions.c src/test/Assertions.h
        src/obj/Instance.c src/obj/Instance.h
        src/collect/Array.c src/collect/Array.h
        test/AssertionsTest.c test/AssertionsTest.h
        test/InstanceTest.c test/InstanceTest.h
        test/ArrayTest.c test/ArrayTest.h)