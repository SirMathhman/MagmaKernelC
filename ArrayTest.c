//
// Created by SirMathhman on 1/5/2020.
//

#include "ArrayTest.h"

void ArrayTest_length() {
    int length = 4;
    Array array = Array_(&length);
    assertIntEquals(length, Array_length(array));
    Array$(array);
}

void ArrayTest_get() {
    int length = 4;
    int value = 10;
    int *expected = &value;
    Array array = Array_(&length);
    PointerArray inner = Instance_get(array, 0);
    inner[0] = expected;
    Pointer actual = Array_get(array, 0);
    assertSame(expected, actual);
    Array$(array);
}

void ArrayTest_set() {
    int length = 10;
    int expected = 3;
    Array array = Array_(&length);
    Array_set(array, 0, &expected);
    int actual = *((int *) Array_get(array, 0));
    assertIntEquals(expected, actual);
}

void ArrayTest_test() {
    assert("ArrayLength", ArrayTest_length);
    assert("ArrayGet", ArrayTest_get);
    assert("ArraySet", ArrayTest_set);
}