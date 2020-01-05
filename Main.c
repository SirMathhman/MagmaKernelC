//
// Created by SirMathhman on 1/5/2020.
//

#include "test/AssertionsTest.h"
#include "test/InstanceTest.h"
#include "stdlib.h"

#include "test/ArrayTest.h"
#include "src/collect/Array.h"

int main() {
    AssertionTest_test();
    InstanceTest_test();
    ArrayTest_test();
    return 0;
}