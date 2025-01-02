#pragma once

#include <hw/types.h>
#include <hw/gpio/gpio.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace gpio {
#endif

typedef struct io_qspi_hw {
    gpio_hw_t sclk;
    gpio_hw_t ss;
    gpio_hw_t sd[4];
    rw32_t intr;
    rw32_t proc0_inte;
    rw32_t proc0_intf;
    ro32_t proc0_ints;
    rw32_t proc1_inte;
    rw32_t proc1_intf;
    ro32_t proc1_ints;
    rw32_t dormant_wake_inte;
    rw32_t dormant_wake_intf;
    ro32_t dormant_wake_ints;
} io_qspi_hw_t;

extern io_qspi_hw_t* IO_QSPI;

#ifdef __cplusplus
}
}
}
#endif
