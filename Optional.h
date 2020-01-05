//
// Created by SirMathhman on 1/5/2020.
//

#ifndef MAGMAKERNELC_OPTIONAL_H
#define MAGMAKERNELC_OPTIONAL_H

#include "Core.h"
#include "Throwable.h"

#endif //MAGMAKERNELC_OPTIONAL_H

typedef Instance Optional;

static const int Optional_value = 0;

Optional Optional_of(Any value);

Optional Optional_empty();

bool Optional_isEmpty(Optional optional);

bool Optional_isPresent(Optional optional);

Any Optional_get(Optional optional);

Any Optional_orElse(Optional optional, Any other);

Any Optional_orElseThrow(Optional optional);

Optional Optional_catch();

void Optional$(Optional optional, void (*delete)(Any));