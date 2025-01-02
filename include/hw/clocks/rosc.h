#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace clocks {
#endif

typedef struct rosc_hw {
    rw32_t ctrl;
    rw32_t freqa;
    rw32_t freqb;
    rw32_t dormant;
    rw32_t div;
    rw32_t phase;
    rw32_t status;
    ro32_t randombit;
    rw32_t count;
} rosc_hw_t;

extern rosc_hw_t* ROSC;

#ifdef __cplusplus
}
}
}
#endif
