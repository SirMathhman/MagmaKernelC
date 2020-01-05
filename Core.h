//
// Created by SirMathhman on 1/5/2020.
//

#ifndef MAGMAKERNELC_CORE_H
#define MAGMAKERNELC_CORE_H

#include "stdlib.h"

#endif //MAGMAKERNELC_CORE_H

typedef int bool;
typedef char *string;

typedef void *Any;
typedef Any *Instance;
typedef long class;

class new();

Instance instantiate(class *c, int fieldCount);

class getClass(Instance instance);

Any getField(Instance instance, int index);

void setField(Instance instance, int index, Any value);