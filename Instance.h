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
typedef long class;

Instance Instance_new(int size);

Instance Instance_newWithClass(long class, int size);

Pointer Instance_get(Instance instance, int index);

Pointer Instance_set(Instance instance, int index, Pointer value);

class Instance_class(Instance instance);
