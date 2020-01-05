//
// Created by SirMathhman on 1/5/2020.
//

#ifndef MAGMAKERNELC_THROWABLE_H
#define MAGMAKERNELC_THROWABLE_H

#include "Core.h"

#endif //MAGMAKERNELC_THROWABLE_H

typedef Instance Throwable;

Throwable Throwable_(string message);

string Throwable_message(Throwable throwable);

void Throwable$(Throwable throwable);