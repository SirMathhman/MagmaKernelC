//
// Created by SirMathhman on 1/5/2020.
//

#include "Instance.h"

long counter = -1;

Instance Instance_new(int size) {
    counter++;
    return Instance_newWithClass(counter, size);
}

Instance Instance_newWithClass(class class, int size) {
    Instance toReturn = malloc((size + 1) * sizeof(Pointer));
    toReturn[0] = &class;
    return toReturn;
}

Pointer Instance_get(Instance instance, int index) {
    return instance[index + 1];
}

Pointer Instance_set(Instance instance, int index, Pointer value) {
    Pointer previous = Instance_get(instance, index);
    instance[index + 1] = value;
    return previous;
}

class Instance_class(Instance instance) {
    return *((class *) instance[0]);
}