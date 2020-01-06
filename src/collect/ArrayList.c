//
// Created by SirMathhman on 1/5/2020.
//

#include "ArrayList.h"

ArrayList ArrayList_size(int *size) {
    int count = 0;
    Instance instance = Instance_new(2);
    Instance_set(instance, 0, Array_(size));
    Instance_set(instance, 1, &count);
    return instance;
}

ArrayList ArrayList_() {
    return ArrayList_size(&ArrayList_DEFAULT_SIZE);
}

Array internal(ArrayList list) {
    return Instance_get(list, 0);
}

void ArrayList_expand(ArrayList list) {
    int length = ArrayList_length(list);
    Array array = internal(list);
    int newLength = length * 2;
    Array copy = Array_(&newLength);
    Array_copy(array, 0, copy, 0, length);
    Instance_set(list, 0, copy);
}

Pointer ArrayList_get(ArrayList list, int index) {
    return Array_get(internal(list), index);
}

Pointer ArrayList_set(ArrayList list, int index, Pointer pointer) {
    while (index >= Array_length(internal(list))) {
        ArrayList_expand(list);
    }
    Pointer previous = Array_get(internal(list), index);
    if (previous == NULL) {
        int size = *(int *) Instance_get(list, 1) + 1;
        Instance_set(list, 1, &size);
    }
    Array_set(internal(list), index, pointer);
    return previous;
}

bool ArrayList_add(ArrayList list, Pointer pointer) {
    int length = ArrayList_length(list);
    ArrayList_set(list, length, pointer);
    return 1;
}


int ArrayList_length(ArrayList list) {
    return *((int *) Instance_get(list, 1));
}