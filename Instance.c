//
// Created by SirMathhman on 1/5/2020.
//

#include "Instance.h"

Instance Instance_new(int size) {
    return malloc((size + 1) * sizeof(Pointer));
}

Pointer Instance_get(Instance instance, int index) {
    return instance[index + 1];
}

Pointer Instance_set(Instance instance, int index, Pointer value) {
    Pointer previous = Instance_get(instance, index);
    instance[index + 1] = value;
    return previous;
}