#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace resets {
#endif

typedef struct resets_hw {
    rw32_t reset;
    rw32_t wdsel;
    ro32_t reset_done;
} resets_hw_t;

extern resets_hw_t* RESETS;

#ifdef __cplusplus
}
}
}
#endif
