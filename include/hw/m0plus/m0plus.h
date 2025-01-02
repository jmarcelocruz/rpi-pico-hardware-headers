#pragma once

#include <stdint.h>
#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace m0plus {
#endif

typedef struct systick_hw {
    rw32_t csr;
    rw32_t rvr;
    rw32_t cvr;
    ro32_t calib;
} systick_hw_t;

extern systick_hw_t* SYSTICK;

typedef struct nvic_hw {
    rw32_t iser;
    uint32_t _pad0[31];
    rw32_t icer;
    uint32_t _pad1[31];
    rw32_t ispr;
    uint32_t _pad2[31];
    rw32_t icpr;
    uint32_t _pad3[95];
    rw32_t ipr[8];
} nvic_hw_t;

extern nvic_hw_t* NVIC;

typedef struct sysctrl_hw {
    ro32_t cpuid;
    rw32_t icsr;
    rw32_t vtor;
    rw32_t aircr;
    rw32_t scr;
    ro32_t ccr;
    uint32_t _pad0;
    rw32_t shpr2;
    rw32_t shpr3;
    rw32_t shcsr;
} sysctrl_hw_t;

extern sysctrl_hw_t* SYSCTRL;

typedef struct mpu_hw {
    ro32_t type;
    rw32_t ctrl;
    rw32_t rnr;
    rw32_t rbar;
    rw32_t rasr;
} mpu_hw_t;

extern mpu_hw_t* MPU;

#ifdef __cplusplus
}
}
}
#endif
