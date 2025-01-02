#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace psm {
#endif

typedef struct psm_hw {
    rw32_t frce_on;
    rw32_t frce_off;
    rw32_t wdsel;
    ro32_t done;
} psm_hw_t;

extern psm_hw_t* PSM;

#ifdef __cplusplus
}
}
}
#endif
