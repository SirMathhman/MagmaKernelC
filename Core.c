//
// Created by SirMathhman on 1/5/2020.
//
#include "Core.h"

long counter = -1;

class new() {
    counter++;
    return counter;
}

Instance instantiate(class *c, int fieldCount) {
    if (c == NULL) {
        class c = new();
        c = &c;
    }
    Instance instance = malloc((fieldCount + 1) * sizeof(Any));
    instance[0] = c;
    return instance;
}

class getClass(Instance instance) {
    return *((class *) instance[0]);
}

Any getField(Instance instance, int index) {
    return instance[index + 1];
}

void setField(Instance instance, int index, Any value) {
    instance[index + 1] = value;
}