//
// Created by SirMathhman on 1/5/2020.
//

#include "Array.h"

Array Array_(int *length) {
    PointerArray content = malloc(*length * sizeof(void *));
    Instance instance = Instance_new(2);
    Instance_set(instance, 0, content);
    Instance_set(instance, 1, length);
    return instance;
}

PointerArray content(Array array) {
    return Instance_get(array, 0);
}

Pointer Array_get(Array array, int index) {
    return content(array)[index];
}

void Array_set(Array array, int index, Pointer value) {
    content(array)[index] = value;
}

int Array_length(Array array) {
    return *((long *) Instance_get(array, 1));
}

void Array$(Array array) {
    free(content(array));
    free(array);
}