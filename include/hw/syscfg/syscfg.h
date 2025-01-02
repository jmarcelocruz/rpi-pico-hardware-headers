#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace syscfg {
#endif

typedef struct syscfg_hw {
    rw32_t proc0_nmi_mask;
    rw32_t proc1_nmi_mask;
    rw32_t proc_config;
    rw32_t proc_in_sync_bypass;
    rw32_t proc_in_sync_bypass_hi;
    rw32_t dbgforce;
    rw32_t mempowerdown;
} syscfg_hw_t;

extern syscfg_hw_t* SYSCFG;

#ifdef __cplusplus
}
}
}
#endif
