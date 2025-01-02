#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace vreg {
#endif

typedef struct vreg_hw {
    rw32_t vreg;
    rw32_t bod;
    rw32_t chip_reset;
} vreg_hw_t;

extern vreg_hw_t* VREG;

#ifdef __cplusplus
}
}
}
#endif
