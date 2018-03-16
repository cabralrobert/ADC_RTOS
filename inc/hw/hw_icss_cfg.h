/*
* hw_icss_cfg.h
*
* Register-level header file for HW_ICSS_CFG
*
* Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
*
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*    Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/
#ifndef HW_ICSS_CFG_H_
#define HW_ICSS_CFG_H_

#ifdef __cplusplus
extern "C"
{
#endif


/****************************************************************************************************
* Register Definitions
****************************************************************************************************/
#define HW_ICSS_CFG_REVID                                      (0x0U)
#define HW_ICSS_CFG_SYSCFG									   (0x4U)		/* Not generated by IPXACT */
#define HW_ICSS_CFG_GPCFG0                                     (0x8U)
#define HW_ICSS_CFG_GPCFG1                                     (0xcU)
#define HW_ICSS_CFG_CGR                                        (0x10U)
#define HW_ICSS_CFG_ISRP                                       (0x14U)
#define HW_ICSS_CFG_ISP                                        (0x18U)
#define HW_ICSS_CFG_IESP                                       (0x1cU)
#define HW_ICSS_CFG_IECP                                       (0x20U)
#define HW_ICSS_CFG_SCRP                                       (0x24U)
#define HW_ICSS_CFG_PMAO                                       (0x28U)
#define HW_ICSS_CFG_MII_RT                                     (0x2cU)
#define HW_ICSS_CFG_IEPCLK                                     (0x30U)
#define HW_ICSS_CFG_SPP                                        (0x34U)
#define HW_ICSS_CFG_PIN_MX                                     (0x40U)


/****************************************************************************************************
* Field Definition Macros
****************************************************************************************************/

#define HW_ICSS_CFG_REVID_SHIFT                                (0U)
#define HW_ICSS_CFG_REVID_MASK                                 (0xffffffffU)

/* Not generated by IPXACT START*/
#define HW_ICSS_CFG_SYSCFG_IDLE_MODE_SHIFT                     (0U)
#define HW_ICSS_CFG_SYSCFG_IDLE_MODE_MASK                      (0x00000003U)

#define HW_ICSS_CFG_SYSCFG_STANDBY_MODE_SHIFT                  (2U)
#define HW_ICSS_CFG_SYSCFG_STANDBY_MODE_MASK                   (0x0000000cU)

#define HW_ICSS_CFG_SYSCFG_STANDBY_INIT_SHIFT                  (4U)
#define HW_ICSS_CFG_SYSCFG_STANDBY_INIT_MASK                   (0x00000010U)

#define HW_ICSS_CFG_SYSCFG_SUB_MWAIT_SHIFT                     (5U)
#define HW_ICSS_CFG_SYSCFG_SUB_MWAIT_MASK                      (0x00000020U)
/* Not generated by IPXACT END*/

#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_MODE_SHIFT                 (0U)
#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_MODE_MASK                  (0x00000003U)

#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_CLK_MODE_SHIFT             (2U)
#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_CLK_MODE_MASK              (0x00000004U)

#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_DIV0_SHIFT                 (3U)
#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_DIV0_MASK                  (0x000000f8U)

#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_DIV1_SHIFT                 (8U)
#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_DIV1_MASK                  (0x00001f00U)

#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_SB_SHIFT                   (13U)
#define HW_ICSS_CFG_GPCFG0_PRU0_GPI_SB_MASK                    (0x00002000U)

#define HW_ICSS_CFG_GPCFG0_PRU0_GPO_MODE_SHIFT                 (14U)
#define HW_ICSS_CFG_GPCFG0_PRU0_GPO_MODE_MASK                  (0x00004000U)

#define HW_ICSS_CFG_GPCFG0_PRU0_GPO_DIV0_SHIFT                 (15U)
#define HW_ICSS_CFG_GPCFG0_PRU0_GPO_DIV0_MASK                  (0x000f8000U)

#define HW_ICSS_CFG_GPCFG0_PRU0_GPO_DIV1_SHIFT                 (20U)
#define HW_ICSS_CFG_GPCFG0_PRU0_GPO_DIV1_MASK                  (0x01f00000U)

#define HW_ICSS_CFG_GPCFG0_PRU0_GPO_SH_SEL_SHIFT               (25U)
#define HW_ICSS_CFG_GPCFG0_PRU0_GPO_SH_SEL_MASK                (0x02000000U)

#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_MODE_SHIFT                 (0U)
#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_MODE_MASK                  (0x00000003U)

#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_CLK_MODE_SHIFT             (2U)
#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_CLK_MODE_MASK              (0x00000004U)

#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_DIV0_SHIFT                 (3U)
#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_DIV0_MASK                  (0x000000f8U)

#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_DIV1_SHIFT                 (8U)
#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_DIV1_MASK                  (0x00001f00U)

#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_SB_SHIFT                   (13U)
#define HW_ICSS_CFG_GPCFG1_PRU1_GPI_SB_MASK                    (0x00002000U)

#define HW_ICSS_CFG_GPCFG1_PRU1_GPO_MODE_SHIFT                 (14U)
#define HW_ICSS_CFG_GPCFG1_PRU1_GPO_MODE_MASK                  (0x00004000U)

#define HW_ICSS_CFG_GPCFG1_PRU1_GPO_DIV0_SHIFT                 (15U)
#define HW_ICSS_CFG_GPCFG1_PRU1_GPO_DIV0_MASK                  (0x000f8000U)

#define HW_ICSS_CFG_GPCFG1_PRU1_GPO_DIV1_SHIFT                 (20U)
#define HW_ICSS_CFG_GPCFG1_PRU1_GPO_DIV1_MASK                  (0x01f00000U)

#define HW_ICSS_CFG_GPCFG1_PRU1_GPO_SH_SEL_SHIFT               (25U)
#define HW_ICSS_CFG_GPCFG1_PRU1_GPO_SH_SEL_MASK                (0x02000000U)

#define HW_ICSS_CFG_CGR_PRU0_CLK_STOP_REQ_SHIFT                (0U)
#define HW_ICSS_CFG_CGR_PRU0_CLK_STOP_REQ_MASK                 (0x00000001U)

#define HW_ICSS_CFG_CGR_PRU0_CLK_STOP_ACK_SHIFT                (1U)
#define HW_ICSS_CFG_CGR_PRU0_CLK_STOP_ACK_MASK                 (0x00000002U)

#define HW_ICSS_CFG_CGR_PRU0_CLK_EN_SHIFT                      (2U)
#define HW_ICSS_CFG_CGR_PRU0_CLK_EN_MASK                       (0x00000004U)

#define HW_ICSS_CFG_CGR_PRU1_CLK_STOP_REQ_SHIFT                (3U)
#define HW_ICSS_CFG_CGR_PRU1_CLK_STOP_REQ_MASK                 (0x00000008U)

#define HW_ICSS_CFG_CGR_PRU1_CLK_STOP_ACK_SHIFT                (4U)
#define HW_ICSS_CFG_CGR_PRU1_CLK_STOP_ACK_MASK                 (0x00000010U)

#define HW_ICSS_CFG_CGR_PRU1_CLK_EN_SHIFT                      (5U)
#define HW_ICSS_CFG_CGR_PRU1_CLK_EN_MASK                       (0x00000020U)

#define HW_ICSS_CFG_CGR_INTC_CLK_STOP_REQ_SHIFT                (6U)
#define HW_ICSS_CFG_CGR_INTC_CLK_STOP_REQ_MASK                 (0x00000040U)

#define HW_ICSS_CFG_CGR_INTC_CLK_STOP_ACK_SHIFT                (7U)
#define HW_ICSS_CFG_CGR_INTC_CLK_STOP_ACK_MASK                 (0x00000080U)

#define HW_ICSS_CFG_CGR_INTC_CLK_EN_SHIFT                      (8U)
#define HW_ICSS_CFG_CGR_INTC_CLK_EN_MASK                       (0x00000100U)

#define HW_ICSS_CFG_CGR_UART_CLK_STOP_REQ_SHIFT                (9U)
#define HW_ICSS_CFG_CGR_UART_CLK_STOP_REQ_MASK                 (0x00000200U)

#define HW_ICSS_CFG_CGR_UART_CLK_STOP_ACK_SHIFT                (10U)
#define HW_ICSS_CFG_CGR_UART_CLK_STOP_ACK_MASK                 (0x00000400U)

#define HW_ICSS_CFG_CGR_UART_CLK_EN_SHIFT                      (11U)
#define HW_ICSS_CFG_CGR_UART_CLK_EN_MASK                       (0x00000800U)

#define HW_ICSS_CFG_CGR_ECAP_CLK_STOP_REQ_SHIFT                (12U)
#define HW_ICSS_CFG_CGR_ECAP_CLK_STOP_REQ_MASK                 (0x00001000U)

#define HW_ICSS_CFG_CGR_ECAP_CLK_STOP_ACK_SHIFT                (13U)
#define HW_ICSS_CFG_CGR_ECAP_CLK_STOP_ACK_MASK                 (0x00002000U)

#define HW_ICSS_CFG_CGR_ECAP_CLK_EN_SHIFT                      (14U)
#define HW_ICSS_CFG_CGR_ECAP_CLK_EN_MASK                       (0x00004000U)

#define HW_ICSS_CFG_CGR_IEP_CLK_STOP_REQ_SHIFT                 (15U)
#define HW_ICSS_CFG_CGR_IEP_CLK_STOP_REQ_MASK                  (0x00008000U)

#define HW_ICSS_CFG_CGR_IEP_CLK_STOP_ACK_SHIFT                 (16U)
#define HW_ICSS_CFG_CGR_IEP_CLK_STOP_ACK_MASK                  (0x00010000U)

#define HW_ICSS_CFG_CGR_IEP_CLK_EN_SHIFT                       (17U)
#define HW_ICSS_CFG_CGR_IEP_CLK_EN_MASK                        (0x00020000U)

#define HW_ICSS_CFG_ISRP_PRU0_IMEM_PE_RAW_SHIFT                (0U)
#define HW_ICSS_CFG_ISRP_PRU0_IMEM_PE_RAW_MASK                 (0x0000000fU)

#define HW_ICSS_CFG_ISRP_PRU0_DMEM_PE_RAW_SHIFT                (4U)
#define HW_ICSS_CFG_ISRP_PRU0_DMEM_PE_RAW_MASK                 (0x000000f0U)

#define HW_ICSS_CFG_ISRP_PRU1_IMEM_PE_RAW_SHIFT                (8U)
#define HW_ICSS_CFG_ISRP_PRU1_IMEM_PE_RAW_MASK                 (0x00000f00U)

#define HW_ICSS_CFG_ISRP_PRU1_DMEM_PE_RAW_SHIFT                (12U)
#define HW_ICSS_CFG_ISRP_PRU1_DMEM_PE_RAW_MASK                 (0x0000f000U)

#define HW_ICSS_CFG_ISRP_RAM_PE_RAW_SHIFT                      (16U)
#define HW_ICSS_CFG_ISRP_RAM_PE_RAW_MASK                       (0x000f0000U)

#define HW_ICSS_CFG_ISP_PRU0_IMEM_PE_SHIFT                     (0U)
#define HW_ICSS_CFG_ISP_PRU0_IMEM_PE_MASK                      (0x0000000fU)

#define HW_ICSS_CFG_ISP_PRU0_DMEM_PE_SHIFT                     (4U)
#define HW_ICSS_CFG_ISP_PRU0_DMEM_PE_MASK                      (0x000000f0U)

#define HW_ICSS_CFG_ISP_PRU1_IMEM_PE_SHIFT                     (8U)
#define HW_ICSS_CFG_ISP_PRU1_IMEM_PE_MASK                      (0x00000f00U)

#define HW_ICSS_CFG_ISP_PRU1_DMEM_PE_SHIFT                     (12U)
#define HW_ICSS_CFG_ISP_PRU1_DMEM_PE_MASK                      (0x0000f000U)

#define HW_ICSS_CFG_ISP_RAM_PE_SHIFT                           (16U)
#define HW_ICSS_CFG_ISP_RAM_PE_MASK                            (0x000f0000U)

#define HW_ICSS_CFG_IESP_PRU0_IMEM_PE_SET_SHIFT                (0U)
#define HW_ICSS_CFG_IESP_PRU0_IMEM_PE_SET_MASK                 (0x0000000fU)

#define HW_ICSS_CFG_IESP_PRU0_DMEM_PE_SET_SHIFT                (4U)
#define HW_ICSS_CFG_IESP_PRU0_DMEM_PE_SET_MASK                 (0x000000f0U)

#define HW_ICSS_CFG_IESP_PRU1_IMEM_PE_SET_SHIFT                (8U)
#define HW_ICSS_CFG_IESP_PRU1_IMEM_PE_SET_MASK                 (0x00000f00U)

#define HW_ICSS_CFG_IESP_PRU1_DMEM_PE_SET_SHIFT                (12U)
#define HW_ICSS_CFG_IESP_PRU1_DMEM_PE_SET_MASK                 (0x0000f000U)

#define HW_ICSS_CFG_IESP_RAM_PE_SET_SHIFT                      (16U)
#define HW_ICSS_CFG_IESP_RAM_PE_SET_MASK                       (0x000f0000U)

#define HW_ICSS_CFG_IECP_PRU0_IMEM_PE_CLR_SHIFT                (0U)
#define HW_ICSS_CFG_IECP_PRU0_IMEM_PE_CLR_MASK                 (0x0000000fU)

#define HW_ICSS_CFG_IECP_PRU0_DMEM_PE_CLR_SHIFT                (4U)
#define HW_ICSS_CFG_IECP_PRU0_DMEM_PE_CLR_MASK                 (0x000000f0U)

#define HW_ICSS_CFG_IECP_PRU1_IMEM_PE_CLR_SHIFT                (8U)
#define HW_ICSS_CFG_IECP_PRU1_IMEM_PE_CLR_MASK                 (0x00000f00U)

#define HW_ICSS_CFG_IECP_PRU1_DMEM_PE_CLR_SHIFT                (12U)
#define HW_ICSS_CFG_IECP_PRU1_DMEM_PE_CLR_MASK                 (0x0000f000U)

#define HW_ICSS_CFG_SCRP_1_SHIFT                               (0U)
#define HW_ICSS_CFG_SCRP_1_MASK                                (0x00000003U)

#define HW_ICSS_CFG_SCRP_2_SHIFT                               (2U)
#define HW_ICSS_CFG_SCRP_2_MASK                                (0x0000000cU)

#define HW_ICSS_CFG_SCRP_3_SHIFT                               (4U)
#define HW_ICSS_CFG_SCRP_3_MASK                                (0x00000030U)

#define HW_ICSS_CFG_SCRP_4_SHIFT                               (6U)
#define HW_ICSS_CFG_SCRP_4_MASK                                (0x000000c0U)

#define HW_ICSS_CFG_SCRP_5_SHIFT                               (8U)
#define HW_ICSS_CFG_SCRP_5_MASK                                (0x00000100U)

#define HW_ICSS_CFG_SCRP_6_SHIFT                               (9U)
#define HW_ICSS_CFG_SCRP_6_MASK                                (0x00000200U)

#define HW_ICSS_CFG_SCRP_7_SHIFT                               (10U)
#define HW_ICSS_CFG_SCRP_7_MASK                                (0x00000400U)

#define HW_ICSS_CFG_SCRP_8_SHIFT                               (11U)
#define HW_ICSS_CFG_SCRP_8_MASK                                (0x00000800U)

#define HW_ICSS_CFG_SCRP_9_SHIFT                               (12U)
#define HW_ICSS_CFG_SCRP_9_MASK                                (0x00001000U)

#define HW_ICSS_CFG_SCRP_10_SHIFT                              (13U)
#define HW_ICSS_CFG_SCRP_10_MASK                               (0x00002000U)

#define HW_ICSS_CFG_SCRP_11_SHIFT                              (14U)
#define HW_ICSS_CFG_SCRP_11_MASK                               (0x00004000U)

#define HW_ICSS_CFG_SCRP_12_SHIFT                              (15U)
#define HW_ICSS_CFG_SCRP_12_MASK                               (0x00008000U)

#define HW_ICSS_CFG_SCRP_13_SHIFT                              (16U)
#define HW_ICSS_CFG_SCRP_13_MASK                               (0x00010000U)

#define HW_ICSS_CFG_SCRP_14_SHIFT                              (17U)
#define HW_ICSS_CFG_SCRP_14_MASK                               (0x00020000U)

#define HW_ICSS_CFG_SCRP_15_SHIFT                              (18U)
#define HW_ICSS_CFG_SCRP_15_MASK                               (0x00040000U)

#define HW_ICSS_CFG_SCRP_16_SHIFT                              (19U)
#define HW_ICSS_CFG_SCRP_16_MASK                               (0x00080000U)

#define HW_ICSS_CFG_SCRP_17_SHIFT                              (20U)
#define HW_ICSS_CFG_SCRP_17_MASK                               (0x00100000U)

#define HW_ICSS_CFG_SCRP_18_SHIFT                              (21U)
#define HW_ICSS_CFG_SCRP_18_MASK                               (0x00200000U)

#define HW_ICSS_CFG_PMAO_PRU0_SHIFT                            (0U)
#define HW_ICSS_CFG_PMAO_PRU0_MASK                             (0x00000001U)

#define HW_ICSS_CFG_PMAO_PRU1_SHIFT                            (1U)
#define HW_ICSS_CFG_PMAO_PRU1_MASK                             (0x00000002U)

#define HW_ICSS_CFG_MII_RT_EVENT_EN_SHIFT                      (0U)
#define HW_ICSS_CFG_MII_RT_EVENT_EN_MASK                       (0x00000001U)

#define HW_ICSS_CFG_IEPCLK_OCP_EN_SHIFT                        (0U)
#define HW_ICSS_CFG_IEPCLK_OCP_EN_MASK                         (0x00000001U)

#define HW_ICSS_CFG_SPP_PRU1_PAD_HP_EN_SHIFT                   (0U)
#define HW_ICSS_CFG_SPP_PRU1_PAD_HP_EN_MASK                    (0x00000001U)

#define HW_ICSS_CFG_SPP_XFR_SHIFT_EN_SHIFT                     (1U)
#define HW_ICSS_CFG_SPP_XFR_SHIFT_EN_MASK                      (0x00000002U)

#define HW_ICSS_CFG_PIN_MX_MUX_SEL_SHIFT                       (0U)
#define HW_ICSS_CFG_PIN_MX_MUX_SEL_MASK                        (0x000000ffU)

#ifdef __cplusplus
}
#endif

#endif /* HW_ICSS_CFG_H_ */
