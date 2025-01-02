#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace gpio {
#endif

typedef struct gpio_hw {
    ro32_t status;
    rw32_t ctrl;
} gpio_hw_t;

#ifdef __cplusplus
}
}
}
#endif
