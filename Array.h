//
// Created by SirMathhman on 1/5/2020.
//

#ifndef MAGMAKERNELC_ARRAY_H
#define MAGMAKERNELC_ARRAY_H

#include "Core.h"
#include "Optional.h"

#endif //MAGMAKERNELC_ARRAY_H

typedef Instance Array;

static const int ARRAY_CONTENT = 0;

static const int ARRAY_LENGTH = 1;

Array Array_(int *length);

Any **Array_native(Array array);

void Array$(Array array);

int Array_length(Array array);

Optional Array_get(Array array, int index);

Optional Array_set(Array array, int index, Any value);

