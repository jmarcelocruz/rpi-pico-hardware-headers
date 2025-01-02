#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace bus {
#endif

typedef struct bus_perf_hw {
    rw32_t ctr;
    rw32_t sel;
} bus_perf_hw_t;

typedef struct busctrl_hw {
    rw32_t bus_priority;
    ro32_t bus_priority_ack;
    bus_perf_hw_t perf[4];
} busctrl_hw_t;

extern busctrl_hw_t* BUSCTRL;

#ifdef __cplusplus
}
}
}
#endif
