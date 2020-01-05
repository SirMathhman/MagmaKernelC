//
// Created by SirMathhman on 1/5/2020.
//

#ifndef MAGMAKERNELC_INSTANCE_H
#define MAGMAKERNELC_INSTANCE_H

#include "stdlib.h"

#endif //MAGMAKERNELC_INSTANCE_H

typedef void *Pointer;
typedef Pointer *PointerArray;

typedef PointerArray Instance;


Instance Instance_new(int size);

Pointer Instance_get(Instance instance, int index);

Pointer Instance_set(Instance instance, int index, Pointer value);
