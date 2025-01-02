#include <hw/bus/busctrl.h>
#include <hw/clocks/clocks.h>
#include <hw/clocks/pll.h>
#include <hw/clocks/rosc.h>
#include <hw/clocks/xosc.h>
#include <hw/dma/dma.h>
#include <hw/gpio/io_bank0.h>
#include <hw/gpio/io_qspi.h>
#include <hw/m0plus/m0plus.h>
#include <hw/psm/psm.h>
#include <hw/resets/resets.h>
#include <hw/syscfg/syscfg.h>
#include <hw/sysinfo/sysinfo.h>
#include <hw/vreg/vreg.h>

#ifdef __cplusplus
hw::bus::busctrl_hw_t*      BUSCTRL{reinterpret_cast<hw::bus::busctrl_hw_t*>(0x40030000)};
hw::clocks::clocks_hw_t*    CLOCKS{reinterpret_cast<hw::clocks::clocks_hw_t*>(0x40008000)};
hw::clocks::pll_hw_t*       PLL_SYS{reinterpret_cast<hw::clocks::pll_hw_t*>(0x40028000)};
hw::clocks::pll_hw_t*       PLL_USB{reinterpret_cast<hw::clocks::pll_hw_t*>(0x4002c000)};
hw::clocks::rosc_hw_t*      ROSC{reinterpret_cast<hw::clocks::rosc_hw_t*>(0x40060000)};
hw::clocks::xosc_hw_t*      XOSC{reinterpret_cast<hw::clocks::xosc_hw_t*>(0x40024000)};
hw::dma::dma_hw_t*          DMA{reinterpret_cast<hw::dma::dma_hw_t*>(0x50000000)};
hw::gpio::io_bank0_hw_t*    IO_BANK0{reinterpret_cast<hw::gpio::io_bank0_hw_t*>(0x40014000)};
hw::gpio::io_qspi_hw_t*     IO_QSPI{reinterpret_cast<hw::gpio::io_qspi_hw_t*>(0x40018000)};
hw::m0plus::systick_hw_t*   SYSTICK{reinterpret_cast<hw::m0plus::systick_hw_t*>(0xe000e010)};
hw::m0plus::nvic_hw_t*      NVIC{reinterpret_cast<hw::m0plus::nvic_hw_t*>(0xe000e100)};
hw::m0plus::sysctrl_hw_t*   SYSCTRL{reinterpret_cast<hw::m0plus::sysctrl_hw_t*>(0xe000ed00)};
hw::m0plus::mpu_hw_t*       MPU{reinterpret_cast<hw::m0plus::mpu_hw_t*>(0xe000ed90)};
hw::psm::psm_hw_t*          PSM{reinterpret_cast<hw::psm::psm_hw_t*>(0x40010000)};
hw::resets::resets_hw_t*    RESETS{reinterpret_cast<hw::resets::resets_hw_t*>(0x4000c000)};
hw::syscfg::syscfg_hw_t*    SYSCFG{reinterpret_cast<hw::syscfg::syscfg_hw_t*>(0x40004000)};
hw::sysinfo::sysinfo_hw_t*  SYSINFO{reinterpret_cast<hw::sysinfo::sysinfo_hw_t*>(0x40000000)};
hw::vreg::vreg_hw_t*        VREG{reinterpret_cast<hw::vreg::vreg_hw_t*>(0x40064000)};
#else
busctrl_hw_t*   BUSCTRL     = (busctrl_hw_t*)0x40030000;
clocks_hw_t*    CLOCKS      = (clocks_hw_t*)0x40008000;
pll_hw_t*       PLL_SYS     = (pll_hw_t*)0x40028000;
pll_hw_t*       PLL_USB     = (pll_hw_t*)0x4002c000;
rosc_hw_t*      ROSC        = (rosc_hw_t*)0x40060000;
xosc_hw_t*      XOSC        = (xosc_hw_t*)0x40024000;
dma_hw_t*       DMA         = (dma_hw_t*)0x50000000;
io_bank0_hw_t*  IO_BANK0    = (io_bank0_hw_t*)0x40014000;
io_qspi_hw_t*   IO_QSPI     = (io_qspi_hw_t*)0x40018000;
systick_hw_t*   SYSTICK     = (systick_hw_t*)0xe000e010;
nvic_hw_t*      NVIC        = (nvic_hw_t*)0xe000e100;
sysctrl_hw_t*   SYSCTRL     = (sysctrl_hw_t*)0xe000ed00;
mpu_hw_t*       MPU         = (mpu_hw_t*)0xe000ed90;
psm_hw_t*       PSM         = (psm_hw_t*)0x40010000;
resets_hw_t*    RESETS      = (resets_hw_t*)0x4000c000;
syscfg_hw_t*    SYSCFG      = (syscfg_hw_t*)0x40004000;
sysinfo_hw_t*   SYSINFO     = (sysinfo_hw_t*)0x40000000;
vreg_hw_t*      VREG        = (vreg_hw_t*)0x40064000;
#endif
