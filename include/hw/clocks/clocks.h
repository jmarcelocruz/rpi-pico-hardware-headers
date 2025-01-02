#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace clocks {
#endif

typedef struct clk_hw {
    rw32_t ctrl;
    rw32_t div;
    ro32_t selected;
} clk_hw_t;

typedef struct fc_hw {
    rw32_t ref_khz;
    rw32_t min_khz;
    rw32_t max_khz;
    rw32_t delay;
    rw32_t interval;
    rw32_t src;
    ro32_t status;
    ro32_t result;
} fc_hw_t;

typedef struct clocks_hw {
    clk_hw_t gpout[4];
    clk_hw_t ref;
    clk_hw_t sys;
    clk_hw_t peri;
    clk_hw_t usb;
    clk_hw_t adc;
    clk_hw_t rtc;
    clk_hw_t sys_resus;
    fc_hw_t fc0;
    rw32_t wake_en[2];
    rw32_t sleep_en[2];
    ro32_t enabled[2];
    ro32_t intr;
    rw32_t inte;
    rw32_t intf;
    ro32_t ints;
} clocks_hw_t;

extern clocks_hw_t* CLOCKS;

#ifdef __cplusplus
}
}
}
#endif
