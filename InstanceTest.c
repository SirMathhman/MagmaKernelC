//
// Created by SirMathhman on 1/5/2020.
//

#include "InstanceTest.h"

void InstanceTest_construct() {
    int expected = 5;
    Instance array = Instance_new(1);
    Instance_set(array, 1, &expected);
    int actual = *((int *) Instance_get(array, 1));
    assertIntEquals(expected, actual);
    free(array);
}

void InstanceTest_test() {
    assert("ConstructInstance", InstanceTest_construct);
}
