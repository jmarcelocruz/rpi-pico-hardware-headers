#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace sysinfo {
#endif

typedef struct sysinfo_hw {
    ro32_t chip_id;
    ro32_t platform;
    uint32_t _pad0[14];
    ro32_t gitref_rp2040;
} sysinfo_hw_t;

extern sysinfo_hw_t* SYSINFO;

#ifdef __cplusplus
}
}
}
#endif
