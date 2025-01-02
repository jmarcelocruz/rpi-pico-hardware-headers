#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace clocks {
#endif

typedef struct xosc_hw {
    rw32_t ctrl;
    rw32_t status;
    rw32_t dormant;
    rw32_t startup;
    uint32_t _pad0[3];
    rw32_t count;
} xosc_hw_t;

extern xosc_hw_t* XOSC;

#ifdef __cplusplus
}
}
}
#endif
