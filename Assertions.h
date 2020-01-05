
//
// Created by SirMathhman on 1/5/2020.
//

#ifndef MAGMAKERNELC_ASSERTIONS_H
#define MAGMAKERNELC_ASSERTIONS_H

#include <stdio.h>
#include "Core.h"

#endif //MAGMAKERNELC_ASSERTIONS_H

void assert(string name, void (*fun)());

void assertFalse(int condition);

void assertTrue(int condition);

void assertSame(void *expected, void *actual);

void assertIntEquals(int expected, int actual);