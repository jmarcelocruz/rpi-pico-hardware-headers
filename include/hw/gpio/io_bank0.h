#pragma once

#include <hw/types.h>
#include <hw/gpio/gpio.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace gpio {
#endif

typedef struct io_bank0_hw {
    gpio_hw_t gpio[30];
    rw32_t intr[4];
    rw32_t proc0_inte[4];
    rw32_t proc0_intf[4];
    ro32_t proc0_ints[4];
    rw32_t proc1_inte[4];
    rw32_t proc1_intf[4];
    ro32_t proc1_ints[4];
    rw32_t dormant_wake_inte[4];
    rw32_t dormant_wake_intf[4];
    ro32_t dormant_wake_ints[4];
} io_bank0_hw_t;

extern io_bank0_hw_t* IO_BANK0;

#ifdef __cplusplus
}
}
}
#endif
