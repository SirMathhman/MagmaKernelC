//
// Created by SirMathhman on 1/5/2020.
//

#include "Optional.h"

Throwable *Optional_exception = NULL;
class *OptionalClass;
int ZERO = 0;

Optional Optional_of(Any value) {
    Optional optional = instantiate(OptionalClass, 1);
    setField(optional, Optional_value, value);
    return optional;
}

Optional Optional_empty() {
    return Optional_of(&ZERO);
}

bool Optional_isEmpty(Optional optional) {
    return getField(optional, Optional_value) == NULL;
}

bool Optional_isPresent(Optional optional) {
    return !Optional_isEmpty(optional);
}

Any Optional_get(Optional optional) {
    return getField(optional, Optional_value);
}

Any Optional_orElse(Optional optional, Any other) {
    return Optional_isEmpty(optional) ? other : Optional_get(optional);
}

Any Optional_orElseThrow(Optional optional) {
    if (Optional_isEmpty(optional)) {
        Optional_exception = *Throwable_("Optional is empty.");
        return NULL;
    } else {
        Optional_exception = NULL;
        return Optional_get(optional);
    }
}

Optional Optional_catch() {
    return Optional_of(Optional_exception);
}

void Optional$(Optional optional, void (*delete)(Any)) {
    if (Optional_isPresent(optional)) {
        delete(Optional_get(optional));
    }
    free(optional);
}