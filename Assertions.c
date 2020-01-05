//
// Created by SirMathhman on 1/5/2020.
//
#include "Assertions.h"

void assert(string name, void (*fun)()) {
    printf("%s", name);
    printf("%s", ": ");
    fun();
    printf("%s", "\n");
}

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

void assertSame(void *expected, void *actual) {
    if (expected == actual) {
        pass();
    } else {
        fail("Pointer values were not the same.");
    }
}