#pragma once

#include <hw/types.h>

#ifdef __cplusplus
extern "C" {
namespace hw {
namespace dma {
#endif

typedef struct dma_channel_hw {
    rw32_t read_addr;
    rw32_t write_addr;
    rw32_t trans_count;
    rw32_t ctrl_trig;
    rw32_t al1_ctrl;
    rw32_t al1_read_addr;
    rw32_t al1_write_addr;
    rw32_t al1_trans_count_trig;
    rw32_t al2_ctrl;
    rw32_t al2_trans_count;
    rw32_t al2_read_addr;
    rw32_t al2_write_addr_trig;
    rw32_t al3_ctrl;
    rw32_t al3_write_addr;
    rw32_t al3_trans_count;
    rw32_t al3_read_addr_trig;
} dma_channel_hw_t;

typedef struct dma_channel_dbg_hw {
    rw32_t ctdreq;
    ro32_t tcr;
    uint32_t _pad0[14];
} dma_channel_dbg_hw_t;

typedef struct dma_hw {
    dma_channel_hw_t channel[12];
    uint32_t _pad0[64];
    rw32_t intr;
    rw32_t inte0;
    rw32_t intf0;
    rw32_t ints0;
    uint32_t _pad1;
    rw32_t inte1;
    rw32_t intf1;
    rw32_t ints1;
    rw32_t timer[4];
    rw32_t multi_chan_trigger;
    rw32_t sniff_ctrl;
    rw32_t sniff_data;
    uint32_t _pad2;
    ro32_t fifo_levels;
    rw32_t chan_abort;
    ro32_t n_channels;
    uint32_t _pad3[237];
    dma_channel_dbg_hw_t channel_dbg[12];
} dma_hw_t;

extern dma_hw_t* DMA;

#ifdef __cplusplus
}
}
}
#endif
