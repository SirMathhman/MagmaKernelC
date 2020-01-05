//
// Created by SirMathhman on 1/5/2020.
//

#include "Main.h"

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

int main() {
    assert("AssertTrue", testAssertTrue);
    assert("AssertFalse", testAssertFalse);
    assert("AssertSame", testAssertSame);
    return 0;
}