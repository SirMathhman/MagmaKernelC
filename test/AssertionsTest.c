//
// Created by SirMathhman on 1/5/2020.
//

#include "AssertionsTest.h"

void testAssertTrue() {
    assertTrue(1);
}

void testAssertFalse() {
    assertFalse(0);
}

void testAssertSame() {
    int x = 10;
    int *a = &x;
    int *b = &x;
    assertSame(a, b);
}

void AssertionTest_test() {
    assert("AssertTrue", testAssertTrue);
    assert("AssertFalse", testAssertFalse);
    assert("AssertSame", testAssertSame);
}