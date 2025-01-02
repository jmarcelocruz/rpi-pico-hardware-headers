#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
#endif

typedef volatile const uint32_t ro32_t;
typedef volatile uint32_t rw32_t;
typedef volatile uint32_t wo32_t; /* C/C++ type system cannot actually enforce write-only semantics */

#ifdef __cplusplus
}
}
#endif
