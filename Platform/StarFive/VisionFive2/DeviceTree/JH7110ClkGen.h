/** @file
  This header provide all JH7110 clock generator device tree bindings

  Copyright (c) 2023, StarFive Technology Co., Ltd. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef __DT_BINDINGS_JH7110_CLK_GEN_H__
#define __DT_BINDINGS_JH7110_CLK_GEN_H__

/* sys regisger */
#define JH7110_CPU_ROOT                     0
#define JH7110_CPU_CORE                     1
#define JH7110_CPU_BUS                      2
#define JH7110_GPU_ROOT                     3
#define JH7110_PERH_ROOT                    4
#define JH7110_BUS_ROOT                     5
#define JH7110_NOCSTG_BUS                   6
#define JH7110_AXI_CFG0                     7
#define JH7110_STG_AXIAHB                   8
#define JH7110_AHB0                         9
#define JH7110_AHB1                         10
#define JH7110_APB_BUS_FUNC                 11
#define JH7110_APB0                         12
#define JH7110_PLL0_DIV2                    13
#define JH7110_PLL1_DIV2                    14
#define JH7110_PLL2_DIV2                    15
#define JH7110_AUDIO_ROOT                   16
#define JH7110_MCLK_INNER                   17
#define JH7110_MCLK                         18
#define JH7110_MCLK_OUT                     19
#define JH7110_ISP_2X                       20
#define JH7110_ISP_AXI                      21
#define JH7110_GCLK0                        22
#define JH7110_GCLK1                        23
#define JH7110_GCLK2                        24
#define JH7110_U7_CORE_CLK                  25
#define JH7110_U7_CORE_CLK1                 26
#define JH7110_U7_CORE_CLK2                 27
#define JH7110_U7_CORE_CLK3                 28
#define JH7110_U7_CORE_CLK4                 29
#define JH7110_U7_DEBUG_CLK                 30
#define JH7110_U7_RTC_TOGGLE                31
#define JH7110_U7_TRACE_CLK0                32
#define JH7110_U7_TRACE_CLK1                33
#define JH7110_U7_TRACE_CLK2                34
#define JH7110_U7_TRACE_CLK3                35
#define JH7110_U7_TRACE_CLK4                36
#define JH7110_U7_TRACE_COM_CLK             37
#define JH7110_NOC_BUS_CLK_CPU_AXI          38
#define JH7110_NOC_BUS_CLK_AXICFG0_AXI      39
#define JH7110_OSC_DIV2                     40
#define JH7110_PLL1_DIV4                    41
#define JH7110_PLL1_DIV8                    42
#define JH7110_DDR_BUS                      43
#define JH7110_DDR_CLK_AXI                  44
#define JH7110_GPU_CORE                     45
#define JH7110_GPU_CORE_CLK                 46
#define JH7110_GPU_SYS_CLK                  47
#define JH7110_GPU_CLK_APB                  48
#define JH7110_GPU_RTC_TOGGLE               49
#define JH7110_NOC_BUS_CLK_GPU_AXI          50
#define JH7110_ISP_TOP_CLK_ISPCORE_2X       51
#define JH7110_ISP_TOP_CLK_ISP_AXI          52
#define JH7110_NOC_BUS_CLK_ISP_AXI          53
#define JH7110_HIFI4_CORE                   54
#define JH7110_HIFI4_AXI                    55
#define JH7110_AXI_CFG1_DEC_CLK_MAIN        56
#define JH7110_AXI_CFG1_DEC_CLK_AHB         57
#define JH7110_VOUT_SRC                     58
#define JH7110_VOUT_AXI                     59
#define JH7110_NOC_BUS_CLK_DISP_AXI         60
#define JH7110_VOUT_TOP_CLK_VOUT_AHB        61
#define JH7110_VOUT_TOP_CLK_VOUT_AXI        62
#define JH7110_VOUT_TOP_CLK_HDMITX0_MCLK    63
#define JH7110_VOUT_TOP_CLK_MIPIPHY_REF     64
#define JH7110_JPEGC_AXI                    65
#define JH7110_CODAJ12_CLK_AXI              66
#define JH7110_CODAJ12_CLK_CORE             67
#define JH7110_CODAJ12_CLK_APB              68
#define JH7110_VDEC_AXI                     69
#define JH7110_WAVE511_CLK_AXI              70
#define JH7110_WAVE511_CLK_BPU              71
#define JH7110_WAVE511_CLK_VCE              72
#define JH7110_WAVE511_CLK_APB              73
#define JH7110_VDEC_JPG_ARB_JPGCLK          74
#define JH7110_VDEC_JPG_ARB_MAINCLK         75
#define JH7110_NOC_BUS_CLK_VDEC_AXI         76
#define JH7110_VENC_AXI                     77
#define JH7110_WAVE420L_CLK_AXI             78
#define JH7110_WAVE420L_CLK_BPU             79
#define JH7110_WAVE420L_CLK_VCE             80
#define JH7110_WAVE420L_CLK_APB             81
#define JH7110_NOC_BUS_CLK_VENC_AXI         82
#define JH7110_AXI_CFG0_DEC_CLK_MAIN_DIV    83
#define JH7110_AXI_CFG0_DEC_CLK_MAIN        84
#define JH7110_AXI_CFG0_DEC_CLK_HIFI4       85
#define JH7110_AXIMEM2_128B_CLK_AXI         86
#define JH7110_QSPI_CLK_AHB                 87
#define JH7110_QSPI_CLK_APB                 88
#define JH7110_QSPI_REF_SRC                 89
#define JH7110_QSPI_CLK_REF                 90
#define JH7110_SDIO0_CLK_AHB                91
#define JH7110_SDIO1_CLK_AHB                92
#define JH7110_SDIO0_CLK_SDCARD             93
#define JH7110_SDIO1_CLK_SDCARD             94
#define JH7110_USB_125M                     95
#define JH7110_NOC_BUS_CLK_STG_AXI          96
#define JH7110_GMAC5_CLK_AHB                97
#define JH7110_GMAC5_CLK_AXI                98
#define JH7110_GMAC_SRC                     99
#define JH7110_GMAC1_GTXCLK                 100
#define JH7110_GMAC1_RMII_RTX               101
#define JH7110_GMAC5_CLK_PTP                102
#define JH7110_GMAC5_CLK_RX                 103
#define JH7110_GMAC5_CLK_RX_INV             104
#define JH7110_GMAC5_CLK_TX                 105
#define JH7110_GMAC5_CLK_TX_INV             106
#define JH7110_GMAC1_GTXC                   107
#define JH7110_GMAC0_GTXCLK                 108
#define JH7110_GMAC0_PTP                    109
#define JH7110_GMAC_PHY                     110
#define JH7110_GMAC0_GTXC                   111
#define JH7110_SYS_IOMUX_PCLK               112
#define JH7110_MAILBOX_CLK_APB              113
#define JH7110_INT_CTRL_CLK_APB             114
#define JH7110_CAN0_CTRL_CLK_APB            115
#define JH7110_CAN0_CTRL_CLK_TIMER          116
#define JH7110_CAN0_CTRL_CLK_CAN            117
#define JH7110_CAN1_CTRL_CLK_APB            118
#define JH7110_CAN1_CTRL_CLK_TIMER          119
#define JH7110_CAN1_CTRL_CLK_CAN            120
#define JH7110_PWM_CLK_APB                  121
#define JH7110_DSKIT_WDT_CLK_APB            122
#define JH7110_DSKIT_WDT_CLK_WDT            123
#define JH7110_TIMER_CLK_APB                124
#define JH7110_TIMER_CLK_TIMER0             125
#define JH7110_TIMER_CLK_TIMER1             126
#define JH7110_TIMER_CLK_TIMER2             127
#define JH7110_TIMER_CLK_TIMER3             128
#define JH7110_TEMP_SENSOR_CLK_APB          129
#define JH7110_TEMP_SENSOR_CLK_TEMP         130
#define JH7110_SPI0_CLK_APB                 131
#define JH7110_SPI1_CLK_APB                 132
#define JH7110_SPI2_CLK_APB                 133
#define JH7110_SPI3_CLK_APB                 134
#define JH7110_SPI4_CLK_APB                 135
#define JH7110_SPI5_CLK_APB                 136
#define JH7110_SPI6_CLK_APB                 137
#define JH7110_I2C0_CLK_APB                 138
#define JH7110_I2C1_CLK_APB                 139
#define JH7110_I2C2_CLK_APB                 140
#define JH7110_I2C3_CLK_APB                 141
#define JH7110_I2C4_CLK_APB                 142
#define JH7110_I2C5_CLK_APB                 143
#define JH7110_I2C6_CLK_APB                 144
#define JH7110_UART0_CLK_APB                145
#define JH7110_UART0_CLK_CORE               146
#define JH7110_UART1_CLK_APB                147
#define JH7110_UART1_CLK_CORE               148
#define JH7110_UART2_CLK_APB                149
#define JH7110_UART2_CLK_CORE               150
#define JH7110_UART3_CLK_APB                151
#define JH7110_UART3_CLK_CORE               152
#define JH7110_UART4_CLK_APB                153
#define JH7110_UART4_CLK_CORE               154
#define JH7110_UART5_CLK_APB                155
#define JH7110_UART5_CLK_CORE               156
#define JH7110_PWMDAC_CLK_APB               157
#define JH7110_PWMDAC_CLK_CORE              158
#define JH7110_SPDIF_CLK_APB                159
#define JH7110_SPDIF_CLK_CORE               160
#define JH7110_I2STX0_4CHCLK_APB            161
#define JH7110_I2STX_4CH0_BCLK_MST          162
#define JH7110_I2STX_4CH0_BCLK_MST_INV      163
#define JH7110_I2STX_4CH0_LRCK_MST          164
#define JH7110_I2STX0_4CHBCLK               165
#define JH7110_I2STX0_4CHBCLK_N             166
#define JH7110_I2STX0_4CHLRCK               167
#define JH7110_I2STX1_4CHCLK_APB            168
#define JH7110_I2STX_4CH1_BCLK_MST          169
#define JH7110_I2STX_4CH1_BCLK_MST_INV      170
#define JH7110_I2STX_4CH1_LRCK_MST          171
#define JH7110_I2STX1_4CHBCLK               172
#define JH7110_I2STX1_4CHBCLK_N             173
#define JH7110_I2STX1_4CHLRCK               174
#define JH7110_I2SRX0_3CH_CLK_APB           175
#define JH7110_I2SRX_3CH_BCLK_MST           176
#define JH7110_I2SRX_3CH_BCLK_MST_INV       177
#define JH7110_I2SRX_3CH_LRCK_MST           178
#define JH7110_I2SRX0_3CH_BCLK              179
#define JH7110_I2SRX0_3CH_BCLK_N            180
#define JH7110_I2SRX0_3CH_LRCK              181
#define JH7110_PDM_CLK_DMIC                 182
#define JH7110_PDM_CLK_APB                  183
#define JH7110_TDM_CLK_AHB                  184
#define JH7110_TDM_CLK_APB                  185
#define JH7110_TDM_INTERNAL                 186
#define JH7110_TDM_CLK_TDM                  187
#define JH7110_TDM_CLK_TDM_N                188
#define JH7110_JTAG_CERTIFICATION_TRNG_CLK  189

#define JH7110_CLK_SYS_REG_END  190

/* stg regisger */
#define JH7110_HIFI4_CLK_CORE          190
#define JH7110_USB0_CLK_USB_APB        191
#define JH7110_USB0_CLK_UTMI_APB       192
#define JH7110_USB0_CLK_AXI            193
#define JH7110_USB0_CLK_LPM            194
#define JH7110_USB0_CLK_STB            195
#define JH7110_USB0_CLK_APP_125        196
#define JH7110_USB0_REFCLK             197
#define JH7110_PCIE0_CLK_AXI_MST0      198
#define JH7110_PCIE0_CLK_APB           199
#define JH7110_PCIE0_CLK_TL            200
#define JH7110_PCIE1_CLK_AXI_MST0      201
#define JH7110_PCIE1_CLK_APB           202
#define JH7110_PCIE1_CLK_TL            203
#define JH7110_PCIE01_SLV_DEC_MAINCLK  204
#define JH7110_SEC_HCLK                205
#define JH7110_SEC_MISCAHB_CLK         206
#define JH7110_STG_MTRX_GRP0_CLK_MAIN  207
#define JH7110_STG_MTRX_GRP0_CLK_BUS   208
#define JH7110_STG_MTRX_GRP0_CLK_STG   209
#define JH7110_STG_MTRX_GRP1_CLK_MAIN  210
#define JH7110_STG_MTRX_GRP1_CLK_BUS   211
#define JH7110_STG_MTRX_GRP1_CLK_STG   212
#define JH7110_STG_MTRX_GRP1_CLK_HIFI  213
#define JH7110_E2_RTC_CLK              214
#define JH7110_E2_CLK_CORE             215
#define JH7110_E2_CLK_DBG              216
#define JH7110_DMA1P_CLK_AXI           217
#define JH7110_DMA1P_CLK_AHB           218

#define JH7110_CLK_STG_REG_END  219

/* aon regisger */
#define JH7110_OSC_DIV4             219
#define JH7110_AON_APB_FUNC         220
#define JH7110_U0_GMAC5_CLK_AHB     221
#define JH7110_U0_GMAC5_CLK_AXI     222
#define JH7110_GMAC0_RMII_RTX       223
#define JH7110_U0_GMAC5_CLK_TX      224
#define JH7110_U0_GMAC5_CLK_TX_INV  225
#define JH7110_U0_GMAC5_CLK_RX      226
#define JH7110_U0_GMAC5_CLK_RX_INV  227
#define JH7110_OTPC_CLK_APB         228
#define JH7110_RTC_HMS_CLK_APB      229
#define JH7110_RTC_INTERNAL         230
#define JH7110_RTC_HMS_CLK_OSC32K   231
#define JH7110_RTC_HMS_CLK_CAL      232

#define JH7110_CLK_REG_END  233

/* sys other */
#define JH7110_PLL0_OUT                      233
#define JH7110_PLL1_OUT                      234
#define JH7110_PLL2_OUT                      235
#define JH7110_AON_APB                       236
#define JH7110_RESET1_CTRL_CLK_SRC           237
#define JH7110_DDR_ROOT                      238
#define JH7110_VDEC_ROOT                     239
#define JH7110_VENC_ROOT                     240
#define JH7110_VOUT_ROOT                     241
#define JH7110_GMACUSB_ROOT                  242
#define JH7110_PCLK2_MUX_FUNC_PCLK           243
#define JH7110_PCLK2_MUX_BIST_PCLK           244
#define JH7110_APB_BUS                       245
#define JH7110_APB12                         246
#define JH7110_AXI_CFG1                      247
#define JH7110_PLL_WRAP_CRG_GCLK0            248
#define JH7110_PLL_WRAP_CRG_GCLK1            249
#define JH7110_PLL_WRAP_CRG_GCLK2            250
#define JH7110_JTAG2APB_PCLK                 251
#define JH7110_U7_BUS_CLK                    252
#define JH7110_U7_IRQ_SYNC_BUS_CLK           253
#define JH7110_NOC_BUS_CLK2_CPU_AXI          254
#define JH7110_NOC_BUS_CLK_APB_BUS           255
#define JH7110_NOC_BUS_CLK2_APB_BUS          256
#define JH7110_NOC_BUS_CLK2_AXICFG0_AXI      257
#define JH7110_DDR_CLK_DDRPHY_PLL_BYPASS     258
#define JH7110_DDR_CLK_OSC                   259
#define JH7110_DDR_CLK_APB                   260
#define JH7110_NOC_BUS_CLK_DDRC              261
#define JH7110_NOC_BUS_CLK2_DDRC             262
#define JH7110_SYS_AHB_DEC_CLK_AHB           263
#define JH7110_STG_AHB_DEC_CLK_AHB           264
#define JH7110_NOC_BUS_CLK2_GPU_AXI          265
#define JH7110_ISP_TOP_CLK_DVP               266
#define JH7110_NOC_BUS_CLK2_ISP_AXI          267
#define JH7110_ISP_TOP_CLK_BIST_APB          268
#define JH7110_NOC_BUS_CLK2_DISP_AXI         269
#define JH7110_VOUT_TOP_CLK_HDMITX0_BCLK     270
#define JH7110_VOUT_TOP_U0_HDMI_TX_PIN_WS    271
#define JH7110_VOUT_TOP_CLK_HDMIPHY_REF      272
#define JH7110_VOUT_TOP_BIST_PCLK            273
#define JH7110_AXIMEM0_128B_CLK_AXI          274
#define JH7110_VDEC_INTSRAM_CLK_VDEC_AXI     275
#define JH7110_NOC_BUS_CLK2_VDEC_AXI         276
#define JH7110_AXIMEM1_128B_CLK_AXI          277
#define JH7110_VENC_INTSRAM_CLK_VENC_AXI     278
#define JH7110_NOC_BUS_CLK2_VENC_AXI         279
#define JH7110_SRAM_CLK_ROM                  280
#define JH7110_NOC_BUS_CLK2_STG_AXI          281
#define JH7110_GMAC5_CLK_RMII                282
#define JH7110_AON_AHB                       283
#define JH7110_SYS_CRG_PCLK                  284
#define JH7110_SYS_SYSCON_PCLK               285
#define JH7110_SPI0_CLK_CORE                 286
#define JH7110_SPI1_CLK_CORE                 287
#define JH7110_SPI2_CLK_CORE                 288
#define JH7110_SPI3_CLK_CORE                 289
#define JH7110_SPI4_CLK_CORE                 290
#define JH7110_SPI5_CLK_CORE                 291
#define JH7110_SPI6_CLK_CORE                 292
#define JH7110_I2C0_CLK_CORE                 293
#define JH7110_I2C1_CLK_CORE                 294
#define JH7110_I2C2_CLK_CORE                 295
#define JH7110_I2C3_CLK_CORE                 296
#define JH7110_I2C4_CLK_CORE                 297
#define JH7110_I2C5_CLK_CORE                 298
#define JH7110_I2C6_CLK_CORE                 299
#define JH7110_I2STX_BCLK_MST                300
#define JH7110_I2STX_LRCK_MST                301
#define JH7110_I2SRX_BCLK_MST                302
#define JH7110_I2SRX_LRCK_MST                303
#define JH7110_PDM_CLK_DMIC0_BCLK_SLV        304
#define JH7110_PDM_CLK_DMIC0_LRCK_SLV        305
#define JH7110_PDM_CLK_DMIC1_BCLK_SLV        306
#define JH7110_PDM_CLK_DMIC1_LRCK_SLV        307
#define JH7110_TDM_CLK_MST                   308
#define JH7110_AHB2APB_CLK_AHB               309
#define JH7110_P2P_ASYNC_CLK_APBS            310
#define JH7110_P2P_ASYNC_CLK_APBM            311
#define JH7110_JTAG_DAISY_CHAIN_JTAG_TCK     312
#define JH7110_U7_DEBUG_SYSTEMJTAG_JTAG_TCK  313
#define JH7110_E2_DEBUG_SYSTEMJTAG_TCK       314
#define JH7110_JTAG_CERTIFICATION_TCK        315
#define JH7110_SEC_SKP_CLK                   316
#define JH7110_U2_PCLK_MUX_PCLK              317

#define JH7110_CLK_SYS_END  318

/* stg other */
#define JH7110_PCIE0_CLK_AXI_SLV0    318
#define JH7110_PCIE0_CLK_AXI_SLV     319
#define JH7110_PCIE0_CLK_OSC         320
#define JH7110_PCIE1_CLK_AXI_SLV0    321
#define JH7110_PCIE1_CLK_AXI_SLV     322
#define JH7110_PCIE1_CLK_OSC         323
#define JH7110_E2_IRQ_SYNC_CLK_CORE  324
#define JH7110_STG_CRG_PCLK          325
#define JH7110_STG_SYSCON_PCLK       326

#define JH7110_CLK_STG_END  327

/* aon other */
#define JH7110_U0_GMAC5_CLK_PTP      327
#define JH7110_U0_GMAC5_CLK_RMII     328
#define JH7110_AON_SYSCON_PCLK       329
#define JH7110_AON_IOMUX_PCLK        330
#define JH7110_AON_CRG_PCLK          331
#define JH7110_PMU_CLK_APB           332
#define JH7110_PMU_CLK_WKUP          333
#define JH7110_RTC_HMS_CLK_OSC32K_G  334
#define JH7110_32K_OUT               335
#define JH7110_RESET0_CTRL_CLK_SRC   336
/* aon other and source */
#define JH7110_PCLK_MUX_FUNC_PCLK  337
#define JH7110_PCLK_MUX_BIST_PCLK  338

#define JH7110_CLK_END  339

/* sys external clocks */
#define JH7110_OSC               (JH7110_CLK_END + 0)
#define JH7110_GMAC1_RMII_REFIN  (JH7110_CLK_END + 1)
#define JH7110_GMAC1_RGMII_RXIN  (JH7110_CLK_END + 2)
#define JH7110_I2STX_BCLK_EXT    (JH7110_CLK_END + 3)
#define JH7110_I2STX_LRCK_EXT    (JH7110_CLK_END + 4)
#define JH7110_I2SRX_BCLK_EXT    (JH7110_CLK_END + 5)
#define JH7110_I2SRX_LRCK_EXT    (JH7110_CLK_END + 6)
#define JH7110_TDM_EXT           (JH7110_CLK_END + 7)
#define JH7110_MCLK_EXT          (JH7110_CLK_END + 8)
#define JH7110_JTAG_TCK_INNER    (JH7110_CLK_END + 9)
#define JH7110_BIST_APB          (JH7110_CLK_END + 10)

/* stg external clocks */
#define JH7110_STG_APB  (JH7110_CLK_END + 11)

/* aon external clocks */
#define JH7110_GMAC0_RMII_REFIN  (JH7110_CLK_END + 12)
#define JH7110_GMAC0_RGMII_RXIN  (JH7110_CLK_END + 13)
#define JH7110_CLK_RTC           (JH7110_CLK_END + 14)

#endif /* __DT_BINDINGS_JH7110_CLK_GEN_H__ */