/***********************************************************************************************************************
 * Copyright [2020] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
 *
 * This software is supplied by Renesas Electronics America Inc. and may only be used with products of Renesas
 * Electronics Corp. and its affiliates ("Renesas").  No other uses are authorized.  This software is protected under
 * all applicable laws, including copyright laws. Renesas reserves the right to change or discontinue this software.
 * THE SOFTWARE IS DELIVERED TO YOU "AS IS," AND RENESAS MAKES NO REPRESENTATIONS OR WARRANTIES, AND TO THE FULLEST
 * EXTENT PERMISSIBLE UNDER APPLICABLE LAW,DISCLAIMS ALL WARRANTIES, WHETHER EXPLICITLY OR IMPLICITLY, INCLUDING
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT, WITH RESPECT TO THE SOFTWARE.
 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT WILL RENESAS BE LIABLE TO YOU IN CONNECTION WITH THE SOFTWARE
 * (OR ANY PERSON OR ENTITY CLAIMING RIGHTS DERIVED FROM YOU) FOR ANY LOSS, DAMAGES, OR CLAIMS WHATSOEVER, INCLUDING,
 * WITHOUT LIMITATION, ANY DIRECT, CONSEQUENTIAL, SPECIAL, INDIRECT, PUNITIVE, OR INCIDENTAL DAMAGES; ANY LOST PROFITS,
 * OTHER ECONOMIC DAMAGE, PROPERTY DAMAGE, OR PERSONAL INJURY; AND EVEN IF RENESAS HAS BEEN ADVISED OF THE POSSIBILITY
 * OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS.
 **********************************************************************************************************************/

#ifndef BSP_FEATURE_H
#define BSP_FEATURE_H

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/** The main oscillator drive value is based upon the oscillator frequency selected in the configuration */
#if (BSP_CFG_XTAL_HZ > (19999999))
 #define CGC_MAINCLOCK_DRIVE    (0x00U)
#elif (BSP_CFG_XTAL_HZ > (15999999)) && (BSP_CFG_XTAL_HZ < (20000000))
 #define CGC_MAINCLOCK_DRIVE    (0x01U)
#elif (BSP_CFG_XTAL_HZ > (7999999)) && (BSP_CFG_XTAL_HZ < (16000000))
 #define CGC_MAINCLOCK_DRIVE    (0x02U)
#else
 #define CGC_MAINCLOCK_DRIVE    (0x03U)
#endif

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private global variables and functions
 **********************************************************************************************************************/

#define BSP_FEATURE_ACMPHS_MIN_WAIT_TIME_US            (1U) // This comes from the Electrical Characteristics in the hardware manual. Rounding up to nearest microsecond.
#define BSP_FEATURE_ACMPHS_VREF                        (ACMPHS_REFERENCE_IVREF2)

#define BSP_FEATURE_ACMPLP_HAS_COMPSEL_REGISTERS       (0)  // Feature not available on this MCU
#define BSP_FEATURE_ACMPLP_MIN_WAIT_TIME_US            (0)  // Feature not available on this MCU

#define BSP_FEATURE_ADC_ADDITION_SUPPORTED             (1U)
#define BSP_FEATURE_ADC_CALIBRATION_REG_AVAILABLE      (0U)
#define BSP_FEATURE_ADC_CLOCK_SOURCE                   (FSP_PRIV_CLOCK_PCLKC)
#define BSP_FEATURE_ADC_GROUP_B_SENSORS_ALLOWED        (1U)
#define BSP_FEATURE_ADC_HAS_ADCER_ADPRC                (1U)
#define BSP_FEATURE_ADC_HAS_ADCER_ADRFMT               (1U)
#define BSP_FEATURE_ADC_HAS_PGA                        (1U)
#define BSP_FEATURE_ADC_HAS_SAMPLE_HOLD_REG            (1U)
#define BSP_FEATURE_ADC_MAX_RESOLUTION_BITS            (12U)
#define BSP_FEATURE_ADC_SENSORS_EXCLUSIVE              (0U)
#define BSP_FEATURE_ADC_SENSOR_MIN_SAMPLING_TIME       (4150U)
#define BSP_FEATURE_ADC_TSN_CALIBRATION_AVAILABLE      (1U)
#define BSP_FEATURE_ADC_TSN_CONTROL_AVAILABLE          (1U)
#define BSP_FEATURE_ADC_TSN_SLOPE                      (4000)
#define BSP_FEATURE_ADC_UNIT_0_CHANNELS                (0x1700EF) // 0 to 3, 5 to 7, 16 to 18, and 20 in unit 0 and 0 to 2, 5 to 7, 16 to 17 in unit 1
#define BSP_FEATURE_ADC_UNIT_1_CHANNELS                (0x300E7)
#define BSP_FEATURE_ADC_VALID_UNIT_MASK                (3U)
#define BSP_FEATURE_ADC_HAS_VREFAMPCNT                 (0U)

#define BSP_FEATURE_BSP_FLASH_CACHE                    (1)
#define BSP_FEATURE_BSP_FLASH_PREFETCH_BUFFER          (0)
#define BSP_FEATURE_BSP_HAS_SCE5                       (0)  // Feature not available on this MCU
#define BSP_FEATURE_BSP_HAS_SCE_ON_RA2                 (0)  // Feature not available on this MCU
#define BSP_FEATURE_BSP_HAS_USB_CLOCK_SEL              (0U)
#define BSP_FEATURE_BSP_HAS_USB_CLOCK_SEL_ALT          (0U)
#define BSP_FEATURE_BSP_MPU_REGION0_MASK               (0x00FFFFFFU)
#define BSP_FEATURE_BSP_MSTP_GPT_MSTPD5_MAX_CH         (7U) // Largest channel number associated with lower MSTP bit for GPT on this MCU.
#define BSP_FEATURE_BSP_OFS1_HOCOFRQ_MASK              (0xFFFFF9FFU)
#define BSP_FEATURE_BSP_OFS1_HOCOFRQ_OFFSET            (9U)
#define BSP_FEATURE_BSP_OSIS_PADDING                   (0U)
#define BSP_FEATURE_BSP_POWER_CHANGE_MSTP_REQUIRED     (1U)
#define BSP_FEATURE_BSP_RESET_TRNG                     (0U)
#define BSP_FEATURE_BSP_VBATT_HAS_VBTCR1_BPWSWSTP      (0U)

#define BSP_FEATURE_CAN_CHECK_PCLKB_RATIO              (0U)
#define BSP_FEATURE_CAN_CLOCK                          (0U)
#define BSP_FEATURE_CAN_MCLOCK_ONLY                    (0U)
#define BSP_FEATURE_CAN_NUM_CHANNELS                   (2U)

#define BSP_FEATURE_CGC_HAS_BCLK                       (1U)
#define BSP_FEATURE_CGC_HAS_FCLK                       (1U)
#define BSP_FEATURE_CGC_HAS_FLDWAITR                   (0U)
#define BSP_FEATURE_CGC_HAS_FLWT                       (1U)
#define BSP_FEATURE_CGC_HAS_HOCOWTCR                   (1U)
#define BSP_FEATURE_CGC_HAS_MEMWAIT                    (0U)
#define BSP_FEATURE_CGC_HAS_PCLKA                      (1U)
#define BSP_FEATURE_CGC_HAS_PCLKB                      (1U)
#define BSP_FEATURE_CGC_HAS_PCLKC                      (1U)
#define BSP_FEATURE_CGC_HAS_PCLKD                      (1U)
#define BSP_FEATURE_CGC_HAS_PLL                        (1U)
#define BSP_FEATURE_CGC_HAS_SRAMWTSC                   (1U)
#define BSP_FEATURE_CGC_HOCOSF_BEFORE_OPCCR            (0U)
#define BSP_FEATURE_CGC_HOCOWTCR_64MHZ_ONLY            (0U)
#define BSP_FEATURE_CGC_ICLK_DIV_RESET                 (BSP_CLOCKS_SYS_CLOCK_DIV_4)
#define BSP_FEATURE_CGC_LOCO_STABILIZATION_MAX_US      (61U)
#define BSP_FEATURE_CGC_LOW_SPEED_MAX_FREQ_HZ          (1000000U) ///< This MCU does have Low Speed Mode, up to 1MHz
#define BSP_FEATURE_CGC_LOW_VOLTAGE_MAX_FREQ_HZ        (0U)       ///< This MCU does not have Low Voltage Mode
#define BSP_FEATURE_CGC_MIDDLE_SPEED_MAX_FREQ_HZ       (0U)       ///< This MCU does not have Middle Speed Mode
#define BSP_FEATURE_CGC_MOCO_STABILIZATION_MAX_US      (15U)
#define BSP_FEATURE_CGC_MODRV_MASK                     (0x30U)
#define BSP_FEATURE_CGC_MODRV_SHIFT                    (0x4U)
#define BSP_FEATURE_CGC_PLLCCR_TYPE                    (1U)
#define BSP_FEATURE_CGC_PLLCCR_WAIT_US                 (0U) // No wait between setting PLLCCR and clearing PLLSTP
#define BSP_FEATURE_CGC_SCKDIVCR_BCLK_MATCHES_PCLKB    (0)
#define BSP_FEATURE_CGC_SODRV_MASK                     (0x02U)
#define BSP_FEATURE_CGC_SODRV_SHIFT                    (0x1U)

#define BSP_FEATURE_CRYPTO_HAS_AES                     (1)
#define BSP_FEATURE_CRYPTO_HAS_AES_WRAPPED             (1)
#define BSP_FEATURE_CRYPTO_HAS_ECC                     (1)
#define BSP_FEATURE_CRYPTO_HAS_ECC_WRAPPED             (1)
#define BSP_FEATURE_CRYPTO_HAS_HASH                    (1)
#define BSP_FEATURE_CRYPTO_HAS_RSA                     (1)
#define BSP_FEATURE_CRYPTO_HAS_RSA_WRAPPED             (1)

#define BSP_FEATURE_CTSU_CTSUCHAC_REGISTER_COUNT       (2U)
#define BSP_FEATURE_CTSU_CTSUCHTRC_REGISTER_COUNT      (2U)
#define BSP_FEATURE_CTSU_HAS_TXVSEL                    (1)
#define BSP_FEATURE_CTSU_VERSION                       (1)

#define BSP_FEATURE_DAC8_HAS_CHARGEPUMP                (0) // Feature not available on this MCU
#define BSP_FEATURE_DAC8_HAS_DA_AD_SYNCHRONIZE         (0) // Feature not available on this MCU
#define BSP_FEATURE_DAC8_HAS_REALTIME_MODE             (0) // Feature not available on this MCU
#define BSP_FEATURE_DAC8_MAX_CHANNELS                  (0) // Feature not available on this MCU

#define BSP_FEATURE_DAC_HAS_CHARGEPUMP                 (0U)
#define BSP_FEATURE_DAC_HAS_DAVREFCR                   (0U)
#define BSP_FEATURE_DAC_HAS_OUTPUT_AMPLIFIER           (1U)
#define BSP_FEATURE_DAC_MAX_CHANNELS                   (2U)

#define BSP_FEATURE_DMAC_MAX_CHANNEL                   (8U)

#define BSP_FEATURE_DWT_CYCCNT                         (1U)          // RA6M1 has Data Watchpoint Cycle Count Register

#define BSP_FEATURE_ELC_PERIPHERAL_MASK                (0x0007FFFFU) // Positions of event link set registers (ELSRs) available on this MCU

#define BSP_FEATURE_ETHER_FIFO_DEPTH                   (0)           // Feature not available on this MCU
#define BSP_FEATURE_ETHER_MAX_CHANNELS                 (0)           // Feature not available on this MCU

#define BSP_FEATURE_FLASH_HP_CF_REGION0_BLOCK_SIZE     (0x2000U)
#define BSP_FEATURE_FLASH_HP_CF_REGION0_SIZE           (0x10000U)
#define BSP_FEATURE_FLASH_HP_CF_REGION1_BLOCK_SIZE     (0x8000U)
#define BSP_FEATURE_FLASH_HP_CF_WRITE_SIZE             (128U)
#define BSP_FEATURE_FLASH_HP_DF_BLOCK_SIZE             (64U)
#define BSP_FEATURE_FLASH_HP_DF_WRITE_SIZE             (4U)
#define BSP_FEATURE_FLASH_HP_VERSION                   (40U)
#define BSP_FEATURE_FLASH_LP_AWS_FAW_MASK              (0) // Feature not available on this MCU
#define BSP_FEATURE_FLASH_LP_AWS_FAW_SHIFT             (0) // Feature not available on this MCU
#define BSP_FEATURE_FLASH_LP_CF_BLOCK_SIZE             (0) // Feature not available on this MCU
#define BSP_FEATURE_FLASH_LP_CF_WRITE_SIZE             (0) // Feature not available on this MCU
#define BSP_FEATURE_FLASH_LP_DF_BLOCK_SIZE             (0) // Feature not available on this MCU
#define BSP_FEATURE_FLASH_LP_DF_WRITE_SIZE             (0) // Feature not available on this MCU
#define BSP_FEATURE_FLASH_LP_FLASH_CLOCK_SRC           (0) // Feature not available on this MCU
#define BSP_FEATURE_FLASH_LP_VERSION                   (0) // Feature not available on this MCU

#define BSP_FEATURE_GPTEH_CHANNEL_MASK                 (0xF)
#define BSP_FEATURE_GPTE_CHANNEL_MASK                  (0xF0)
#define BSP_FEATURE_GPT_32BIT_CHANNEL_MASK             (0x1FFF)
#define BSP_FEATURE_GPT_VALID_CHANNEL_MASK             (0x1FFF)

#define BSP_FEATURE_ICU_IRQ_CHANNELS_MASK              (0x3FFFU)
#define BSP_FEATURE_ICU_WUPEN_MASK                     (0xFB4FFFFFU)

#define BSP_FEATURE_IIC_FAST_MODE_PLUS                 (1U << 0U)

#define BSP_FEATURE_IOPORT_ELC_PORTS                   (4)
#define BSP_FEATURE_IOPORT_HAS_ETHERNET                (0U)

#define BSP_FEATURE_LPM_CHANGE_MSTP_ARRAY              {{1, 31}, {2, 5}}
#define BSP_FEATURE_LPM_CHANGE_MSTP_REQUIRED           (1U)
#define BSP_FEATURE_LPM_DPSIEGR_MASK                   (0x00133FFFU)
#define BSP_FEATURE_LPM_DPSIER_MASK                    (0x051F3FFFU)
#define BSP_FEATURE_LPM_HAS_DEEP_STANDBY               (1U)
#define BSP_FEATURE_LPM_HAS_SBYCR_OPE                  (1U)
#define BSP_FEATURE_LPM_SBYCR_WRITE1_B14               (0)
#define BSP_FEATURE_LPM_SNZEDCR_MASK                   (0x000000FFU)
#define BSP_FEATURE_LPM_SNZREQCR_MASK                  (0x7342FFFFU)

#define BSP_FEATURE_LVD_HAS_DIGITAL_FILTER             (1U)
#define BSP_FEATURE_LVD_MONITOR_1_HI_THRESHOLD         (LVD_THRESHOLD_MONITOR_1_LEVEL_2_99V) // 2.99V
#define BSP_FEATURE_LVD_MONITOR_1_LOW_THRESHOLD        (LVD_THRESHOLD_MONITOR_1_LEVEL_2_85V) // 2.85V
#define BSP_FEATURE_LVD_MONITOR_2_HI_THRESHOLD         (LVD_THRESHOLD_MONITOR_2_LEVEL_2_99V) // 2.99V
#define BSP_FEATURE_LVD_MONITOR_2_LOW_THRESHOLD        (LVD_THRESHOLD_MONITOR_2_LEVEL_2_85V) // 2.85V
#define BSP_FEATURE_LVD_STABILIZATION_TIME_US          (10U)                                 // Time in microseconds required for LVD to stabilize

#define BSP_FEATURE_OPAMP_MIN_WAIT_TIME_HS_US          (0)                                   // Feature not available on this MCU
#define BSP_FEATURE_OPAMP_MIN_WAIT_TIME_LP_US          (0)                                   // Feature not available on this MCU
#define BSP_FEATURE_OPAMP_MIN_WAIT_TIME_MS_US          (0)                                   // Feature not available on this MCU

#define BSP_FEATURE_POEG_CHANNEL_MASK                  (0xFU)

#define BSP_FEATURE_SCI_CHANNELS                       (0x31FU)
#define BSP_FEATURE_SCI_CLOCK                          (FSP_PRIV_CLOCK_PCLKA)
#define BSP_FEATURE_SCI_UART_FIFO_CHANNELS             (0x31FU)
#define BSP_FEATURE_SCI_UART_FIFO_DEPTH                (16U)

#define BSP_FEATURE_SDHI_HAS_CARD_DETECTION            (1U)
#define BSP_FEATURE_SDHI_SUPPORTS_8_BIT_MMC            (0U)
#define BSP_FEATURE_SDHI_VALID_CHANNEL_MASK            (0x3U)

#define BSP_FEATURE_SLCDC_MAX_NUM_SEG                  (0) // Feature not available on this MCU

#define BSP_FEATURE_SPI_CLK                            (FSP_PRIV_CLOCK_PCLKA)
#define BSP_FEATURE_SPI_HAS_BYTE_SWAP                  (1U)
#define BSP_FEATURE_SPI_HAS_SSL_LEVEL_KEEP             (1U)
#define BSP_FEATURE_SPI_MAX_CHANNEL                    (2U)

#define BSP_FEATURE_SSI_FIFO_NUM_STAGES                (32U)
#define BSP_FEATURE_SSI_VALID_CHANNEL_MASK             (1U)

#endif