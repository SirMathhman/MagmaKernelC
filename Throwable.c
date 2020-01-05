//
// Created by SirMathhman on 1/5/2020.
//

#include "Throwable.h"

Throwable Throwable_(string message) {
    Throwable throwable = instantiate(0, 1);
    throwable[0] = &message;
    return throwable;
}

string Throwable_message(Throwable throwable) {
    return *((string *) throwable[0]);
}

void Throwable$(Throwable throwable) {
    free(throwable);
}