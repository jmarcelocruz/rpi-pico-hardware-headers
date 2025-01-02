#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace clocks {
#endif

typedef struct pll_hw {
    rw32_t cs;
    rw32_t pwr;
    rw32_t fbdiv_int;
    rw32_t prim;
} pll_hw_t;

extern pll_hw_t* PLL_SYS;
extern pll_hw_t* PLL_USB;

#ifdef __cplusplus
}
}
}
#endif
