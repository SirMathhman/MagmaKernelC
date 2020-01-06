//
// Created by SirMathhman on 1/5/2020.
//

#ifndef MAGMAKERNELC_NATIVEARRAY_H
#define MAGMAKERNELC_NATIVEARRAY_H

#include "../obj/Instance.h"

#endif //MAGMAKERNELC_NATIVEARRAY_H

typedef Instance Array;

Array Array_(int *length);

Pointer Array_get(Array array, int index);

void Array_set(Array array, int index, Pointer value);

int Array_length(Array array);

void Array$(Array array);

void Array_copy(Array src, int srcPos, Array dest, int destPos, int length);