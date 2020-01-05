//
// Created by SirMathhman on 1/5/2020.
//

#include "stdio.h"

typedef char *string;
const int false = 0;
const int true = 1;

void pass() { printf("%s", "Pass"); }

void fail(string message) {
    printf("%s", "Fail: ");
    printf("%s", message);
}

void assertFalse(int condition) {
    if (condition) {
        fail("Expected true condition.");
    } else {
        pass();
    }
}

void assertTrue(int condition) {
    if (!condition) {
        fail("Expected false condition.");
    } else {
        pass();
    }
}

void testAssertTrue() {
    assertTrue(true);
}

void testAssertFalse() {
    assertFalse(false);
}

void test(string name, void (*fun)()) {
    printf("%s", name);
    printf("%s", ": ");
    fun();
    printf("%s", "\n");
}

int main() {
    test("AssertTrue", testAssertTrue);
    test("AssertFalse", testAssertFalse);
    return 0;
}