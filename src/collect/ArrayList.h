//
// Created by SirMathhman on 1/5/2020.
//

#ifndef MAGMAKERNELC_ARRAYLIST_H
#define MAGMAKERNELC_ARRAYLIST_H

#include "../Core.h"
#include "Array.h"

#endif //MAGMAKERNELC_ARRAYLIST_H

typedef Instance ArrayList;

ArrayList ArrayList_size(int *size);

ArrayList ArrayList_();

bool ArrayList_add(ArrayList list, Pointer pointer);

int ArrayList_length(ArrayList list);

int ArrayList_DEFAULT_SIZE = 10;