//
// Created by SirMathhman on 1/5/2020.
//

#include "Array.h"

Array Array_(int *length) {
    Any *content = malloc(*length * sizeof(Any));
    Array array = instantiate(0, 2);
    array[ARRAY_CONTENT] = &content;
    array[ARRAY_LENGTH] = length;
    return array;
}

Any **Array_native(Array array) {
    return array[ARRAY_CONTENT];
}

void Array$(Array array) {
    free(Array_native(array));
    free(array);
}

int Array_length(Array array) {
    return *((int *) array[ARRAY_LENGTH]);
}

Optional Array_get(Array array, int index) {
    if (index < Array_length(array)) {
        return Optional_of(*(Array_native(array)[index]));
    } else {
        return Optional_empty();
    }
}


Optional Array_set(Array array, int index, Any value) {
    Optional optional = Array_get(array, index);
    Array_native(array)[index] = value;
    return optional;
}