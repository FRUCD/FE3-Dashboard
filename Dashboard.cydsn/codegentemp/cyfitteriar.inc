#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* HV */
HV__0__INTTYPE EQU CYREG_PICU3_INTTYPE1
HV__0__MASK EQU 0x02
HV__0__PC EQU CYREG_PRT3_PC1
HV__0__PORT EQU 3
HV__0__SHIFT EQU 1
HV__AG EQU CYREG_PRT3_AG
HV__AMUX EQU CYREG_PRT3_AMUX
HV__BIE EQU CYREG_PRT3_BIE
HV__BIT_MASK EQU CYREG_PRT3_BIT_MASK
HV__BYP EQU CYREG_PRT3_BYP
HV__CTL EQU CYREG_PRT3_CTL
HV__DM0 EQU CYREG_PRT3_DM0
HV__DM1 EQU CYREG_PRT3_DM1
HV__DM2 EQU CYREG_PRT3_DM2
HV__DR EQU CYREG_PRT3_DR
HV__INP_DIS EQU CYREG_PRT3_INP_DIS
HV__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
HV__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
HV__LCD_EN EQU CYREG_PRT3_LCD_EN
HV__MASK EQU 0x02
HV__PORT EQU 3
HV__PRT EQU CYREG_PRT3_PRT
HV__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
HV__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
HV__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
HV__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
HV__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
HV__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
HV__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
HV__PS EQU CYREG_PRT3_PS
HV__SHIFT EQU 1
HV__SLW EQU CYREG_PRT3_SLW

/* RX */
RX__0__INTTYPE EQU CYREG_PICU3_INTTYPE5
RX__0__MASK EQU 0x20
RX__0__PC EQU CYREG_PRT3_PC5
RX__0__PORT EQU 3
RX__0__SHIFT EQU 5
RX__AG EQU CYREG_PRT3_AG
RX__AMUX EQU CYREG_PRT3_AMUX
RX__BIE EQU CYREG_PRT3_BIE
RX__BIT_MASK EQU CYREG_PRT3_BIT_MASK
RX__BYP EQU CYREG_PRT3_BYP
RX__CTL EQU CYREG_PRT3_CTL
RX__DM0 EQU CYREG_PRT3_DM0
RX__DM1 EQU CYREG_PRT3_DM1
RX__DM2 EQU CYREG_PRT3_DM2
RX__DR EQU CYREG_PRT3_DR
RX__INP_DIS EQU CYREG_PRT3_INP_DIS
RX__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
RX__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
RX__LCD_EN EQU CYREG_PRT3_LCD_EN
RX__MASK EQU 0x20
RX__PORT EQU 3
RX__PRT EQU CYREG_PRT3_PRT
RX__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
RX__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
RX__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
RX__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
RX__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
RX__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
RX__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
RX__PS EQU CYREG_PRT3_PS
RX__SHIFT EQU 5
RX__SLW EQU CYREG_PRT3_SLW

/* TX */
TX__0__INTTYPE EQU CYREG_PICU3_INTTYPE4
TX__0__MASK EQU 0x10
TX__0__PC EQU CYREG_PRT3_PC4
TX__0__PORT EQU 3
TX__0__SHIFT EQU 4
TX__AG EQU CYREG_PRT3_AG
TX__AMUX EQU CYREG_PRT3_AMUX
TX__BIE EQU CYREG_PRT3_BIE
TX__BIT_MASK EQU CYREG_PRT3_BIT_MASK
TX__BYP EQU CYREG_PRT3_BYP
TX__CTL EQU CYREG_PRT3_CTL
TX__DM0 EQU CYREG_PRT3_DM0
TX__DM1 EQU CYREG_PRT3_DM1
TX__DM2 EQU CYREG_PRT3_DM2
TX__DR EQU CYREG_PRT3_DR
TX__INP_DIS EQU CYREG_PRT3_INP_DIS
TX__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
TX__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
TX__LCD_EN EQU CYREG_PRT3_LCD_EN
TX__MASK EQU 0x10
TX__PORT EQU 3
TX__PRT EQU CYREG_PRT3_PRT
TX__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
TX__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
TX__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
TX__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
TX__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
TX__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
TX__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
TX__PS EQU CYREG_PRT3_PS
TX__SHIFT EQU 4
TX__SLW EQU CYREG_PRT3_SLW

/* CAN_CanIP */
CAN_CanIP__CSR_BUF_SR EQU CYREG_CAN0_CSR_BUF_SR
CAN_CanIP__CSR_CFG EQU CYREG_CAN0_CSR_CFG
CAN_CanIP__CSR_CMD EQU CYREG_CAN0_CSR_CMD
CAN_CanIP__CSR_ERR_SR EQU CYREG_CAN0_CSR_ERR_SR
CAN_CanIP__CSR_INT_EN EQU CYREG_CAN0_CSR_INT_EN
CAN_CanIP__CSR_INT_SR EQU CYREG_CAN0_CSR_INT_SR
CAN_CanIP__PM_ACT_CFG EQU CYREG_PM_ACT_CFG6
CAN_CanIP__PM_ACT_MSK EQU 0x01
CAN_CanIP__PM_STBY_CFG EQU CYREG_PM_STBY_CFG6
CAN_CanIP__PM_STBY_MSK EQU 0x01
CAN_CanIP__RX0_ACR EQU CYREG_CAN0_RX0_ACR
CAN_CanIP__RX0_ACRD EQU CYREG_CAN0_RX0_ACRD
CAN_CanIP__RX0_AMR EQU CYREG_CAN0_RX0_AMR
CAN_CanIP__RX0_AMRD EQU CYREG_CAN0_RX0_AMRD
CAN_CanIP__RX0_CMD EQU CYREG_CAN0_RX0_CMD
CAN_CanIP__RX0_DH EQU CYREG_CAN0_RX0_DH
CAN_CanIP__RX0_DL EQU CYREG_CAN0_RX0_DL
CAN_CanIP__RX0_ID EQU CYREG_CAN0_RX0_ID
CAN_CanIP__RX1_ACR EQU CYREG_CAN0_RX1_ACR
CAN_CanIP__RX1_ACRD EQU CYREG_CAN0_RX1_ACRD
CAN_CanIP__RX1_AMR EQU CYREG_CAN0_RX1_AMR
CAN_CanIP__RX1_AMRD EQU CYREG_CAN0_RX1_AMRD
CAN_CanIP__RX1_CMD EQU CYREG_CAN0_RX1_CMD
CAN_CanIP__RX1_DH EQU CYREG_CAN0_RX1_DH
CAN_CanIP__RX1_DL EQU CYREG_CAN0_RX1_DL
CAN_CanIP__RX1_ID EQU CYREG_CAN0_RX1_ID
CAN_CanIP__RX10_ACR EQU CYREG_CAN0_RX10_ACR
CAN_CanIP__RX10_ACRD EQU CYREG_CAN0_RX10_ACRD
CAN_CanIP__RX10_AMR EQU CYREG_CAN0_RX10_AMR
CAN_CanIP__RX10_AMRD EQU CYREG_CAN0_RX10_AMRD
CAN_CanIP__RX10_CMD EQU CYREG_CAN0_RX10_CMD
CAN_CanIP__RX10_DH EQU CYREG_CAN0_RX10_DH
CAN_CanIP__RX10_DL EQU CYREG_CAN0_RX10_DL
CAN_CanIP__RX10_ID EQU CYREG_CAN0_RX10_ID
CAN_CanIP__RX11_ACR EQU CYREG_CAN0_RX11_ACR
CAN_CanIP__RX11_ACRD EQU CYREG_CAN0_RX11_ACRD
CAN_CanIP__RX11_AMR EQU CYREG_CAN0_RX11_AMR
CAN_CanIP__RX11_AMRD EQU CYREG_CAN0_RX11_AMRD
CAN_CanIP__RX11_CMD EQU CYREG_CAN0_RX11_CMD
CAN_CanIP__RX11_DH EQU CYREG_CAN0_RX11_DH
CAN_CanIP__RX11_DL EQU CYREG_CAN0_RX11_DL
CAN_CanIP__RX11_ID EQU CYREG_CAN0_RX11_ID
CAN_CanIP__RX12_ACR EQU CYREG_CAN0_RX12_ACR
CAN_CanIP__RX12_ACRD EQU CYREG_CAN0_RX12_ACRD
CAN_CanIP__RX12_AMR EQU CYREG_CAN0_RX12_AMR
CAN_CanIP__RX12_AMRD EQU CYREG_CAN0_RX12_AMRD
CAN_CanIP__RX12_CMD EQU CYREG_CAN0_RX12_CMD
CAN_CanIP__RX12_DH EQU CYREG_CAN0_RX12_DH
CAN_CanIP__RX12_DL EQU CYREG_CAN0_RX12_DL
CAN_CanIP__RX12_ID EQU CYREG_CAN0_RX12_ID
CAN_CanIP__RX13_ACR EQU CYREG_CAN0_RX13_ACR
CAN_CanIP__RX13_ACRD EQU CYREG_CAN0_RX13_ACRD
CAN_CanIP__RX13_AMR EQU CYREG_CAN0_RX13_AMR
CAN_CanIP__RX13_AMRD EQU CYREG_CAN0_RX13_AMRD
CAN_CanIP__RX13_CMD EQU CYREG_CAN0_RX13_CMD
CAN_CanIP__RX13_DH EQU CYREG_CAN0_RX13_DH
CAN_CanIP__RX13_DL EQU CYREG_CAN0_RX13_DL
CAN_CanIP__RX13_ID EQU CYREG_CAN0_RX13_ID
CAN_CanIP__RX14_ACR EQU CYREG_CAN0_RX14_ACR
CAN_CanIP__RX14_ACRD EQU CYREG_CAN0_RX14_ACRD
CAN_CanIP__RX14_AMR EQU CYREG_CAN0_RX14_AMR
CAN_CanIP__RX14_AMRD EQU CYREG_CAN0_RX14_AMRD
CAN_CanIP__RX14_CMD EQU CYREG_CAN0_RX14_CMD
CAN_CanIP__RX14_DH EQU CYREG_CAN0_RX14_DH
CAN_CanIP__RX14_DL EQU CYREG_CAN0_RX14_DL
CAN_CanIP__RX14_ID EQU CYREG_CAN0_RX14_ID
CAN_CanIP__RX15_ACR EQU CYREG_CAN0_RX15_ACR
CAN_CanIP__RX15_ACRD EQU CYREG_CAN0_RX15_ACRD
CAN_CanIP__RX15_AMR EQU CYREG_CAN0_RX15_AMR
CAN_CanIP__RX15_AMRD EQU CYREG_CAN0_RX15_AMRD
CAN_CanIP__RX15_CMD EQU CYREG_CAN0_RX15_CMD
CAN_CanIP__RX15_DH EQU CYREG_CAN0_RX15_DH
CAN_CanIP__RX15_DL EQU CYREG_CAN0_RX15_DL
CAN_CanIP__RX15_ID EQU CYREG_CAN0_RX15_ID
CAN_CanIP__RX2_ACR EQU CYREG_CAN0_RX2_ACR
CAN_CanIP__RX2_ACRD EQU CYREG_CAN0_RX2_ACRD
CAN_CanIP__RX2_AMR EQU CYREG_CAN0_RX2_AMR
CAN_CanIP__RX2_AMRD EQU CYREG_CAN0_RX2_AMRD
CAN_CanIP__RX2_CMD EQU CYREG_CAN0_RX2_CMD
CAN_CanIP__RX2_DH EQU CYREG_CAN0_RX2_DH
CAN_CanIP__RX2_DL EQU CYREG_CAN0_RX2_DL
CAN_CanIP__RX2_ID EQU CYREG_CAN0_RX2_ID
CAN_CanIP__RX3_ACR EQU CYREG_CAN0_RX3_ACR
CAN_CanIP__RX3_ACRD EQU CYREG_CAN0_RX3_ACRD
CAN_CanIP__RX3_AMR EQU CYREG_CAN0_RX3_AMR
CAN_CanIP__RX3_AMRD EQU CYREG_CAN0_RX3_AMRD
CAN_CanIP__RX3_CMD EQU CYREG_CAN0_RX3_CMD
CAN_CanIP__RX3_DH EQU CYREG_CAN0_RX3_DH
CAN_CanIP__RX3_DL EQU CYREG_CAN0_RX3_DL
CAN_CanIP__RX3_ID EQU CYREG_CAN0_RX3_ID
CAN_CanIP__RX4_ACR EQU CYREG_CAN0_RX4_ACR
CAN_CanIP__RX4_ACRD EQU CYREG_CAN0_RX4_ACRD
CAN_CanIP__RX4_AMR EQU CYREG_CAN0_RX4_AMR
CAN_CanIP__RX4_AMRD EQU CYREG_CAN0_RX4_AMRD
CAN_CanIP__RX4_CMD EQU CYREG_CAN0_RX4_CMD
CAN_CanIP__RX4_DH EQU CYREG_CAN0_RX4_DH
CAN_CanIP__RX4_DL EQU CYREG_CAN0_RX4_DL
CAN_CanIP__RX4_ID EQU CYREG_CAN0_RX4_ID
CAN_CanIP__RX5_ACR EQU CYREG_CAN0_RX5_ACR
CAN_CanIP__RX5_ACRD EQU CYREG_CAN0_RX5_ACRD
CAN_CanIP__RX5_AMR EQU CYREG_CAN0_RX5_AMR
CAN_CanIP__RX5_AMRD EQU CYREG_CAN0_RX5_AMRD
CAN_CanIP__RX5_CMD EQU CYREG_CAN0_RX5_CMD
CAN_CanIP__RX5_DH EQU CYREG_CAN0_RX5_DH
CAN_CanIP__RX5_DL EQU CYREG_CAN0_RX5_DL
CAN_CanIP__RX5_ID EQU CYREG_CAN0_RX5_ID
CAN_CanIP__RX6_ACR EQU CYREG_CAN0_RX6_ACR
CAN_CanIP__RX6_ACRD EQU CYREG_CAN0_RX6_ACRD
CAN_CanIP__RX6_AMR EQU CYREG_CAN0_RX6_AMR
CAN_CanIP__RX6_AMRD EQU CYREG_CAN0_RX6_AMRD
CAN_CanIP__RX6_CMD EQU CYREG_CAN0_RX6_CMD
CAN_CanIP__RX6_DH EQU CYREG_CAN0_RX6_DH
CAN_CanIP__RX6_DL EQU CYREG_CAN0_RX6_DL
CAN_CanIP__RX6_ID EQU CYREG_CAN0_RX6_ID
CAN_CanIP__RX7_ACR EQU CYREG_CAN0_RX7_ACR
CAN_CanIP__RX7_ACRD EQU CYREG_CAN0_RX7_ACRD
CAN_CanIP__RX7_AMR EQU CYREG_CAN0_RX7_AMR
CAN_CanIP__RX7_AMRD EQU CYREG_CAN0_RX7_AMRD
CAN_CanIP__RX7_CMD EQU CYREG_CAN0_RX7_CMD
CAN_CanIP__RX7_DH EQU CYREG_CAN0_RX7_DH
CAN_CanIP__RX7_DL EQU CYREG_CAN0_RX7_DL
CAN_CanIP__RX7_ID EQU CYREG_CAN0_RX7_ID
CAN_CanIP__RX8_ACR EQU CYREG_CAN0_RX8_ACR
CAN_CanIP__RX8_ACRD EQU CYREG_CAN0_RX8_ACRD
CAN_CanIP__RX8_AMR EQU CYREG_CAN0_RX8_AMR
CAN_CanIP__RX8_AMRD EQU CYREG_CAN0_RX8_AMRD
CAN_CanIP__RX8_CMD EQU CYREG_CAN0_RX8_CMD
CAN_CanIP__RX8_DH EQU CYREG_CAN0_RX8_DH
CAN_CanIP__RX8_DL EQU CYREG_CAN0_RX8_DL
CAN_CanIP__RX8_ID EQU CYREG_CAN0_RX8_ID
CAN_CanIP__RX9_ACR EQU CYREG_CAN0_RX9_ACR
CAN_CanIP__RX9_ACRD EQU CYREG_CAN0_RX9_ACRD
CAN_CanIP__RX9_AMR EQU CYREG_CAN0_RX9_AMR
CAN_CanIP__RX9_AMRD EQU CYREG_CAN0_RX9_AMRD
CAN_CanIP__RX9_CMD EQU CYREG_CAN0_RX9_CMD
CAN_CanIP__RX9_DH EQU CYREG_CAN0_RX9_DH
CAN_CanIP__RX9_DL EQU CYREG_CAN0_RX9_DL
CAN_CanIP__RX9_ID EQU CYREG_CAN0_RX9_ID
CAN_CanIP__TX0_CMD EQU CYREG_CAN0_TX0_CMD
CAN_CanIP__TX0_DH EQU CYREG_CAN0_TX0_DH
CAN_CanIP__TX0_DL EQU CYREG_CAN0_TX0_DL
CAN_CanIP__TX0_ID EQU CYREG_CAN0_TX0_ID
CAN_CanIP__TX1_CMD EQU CYREG_CAN0_TX1_CMD
CAN_CanIP__TX1_DH EQU CYREG_CAN0_TX1_DH
CAN_CanIP__TX1_DL EQU CYREG_CAN0_TX1_DL
CAN_CanIP__TX1_ID EQU CYREG_CAN0_TX1_ID
CAN_CanIP__TX2_CMD EQU CYREG_CAN0_TX2_CMD
CAN_CanIP__TX2_DH EQU CYREG_CAN0_TX2_DH
CAN_CanIP__TX2_DL EQU CYREG_CAN0_TX2_DL
CAN_CanIP__TX2_ID EQU CYREG_CAN0_TX2_ID
CAN_CanIP__TX3_CMD EQU CYREG_CAN0_TX3_CMD
CAN_CanIP__TX3_DH EQU CYREG_CAN0_TX3_DH
CAN_CanIP__TX3_DL EQU CYREG_CAN0_TX3_DL
CAN_CanIP__TX3_ID EQU CYREG_CAN0_TX3_ID
CAN_CanIP__TX4_CMD EQU CYREG_CAN0_TX4_CMD
CAN_CanIP__TX4_DH EQU CYREG_CAN0_TX4_DH
CAN_CanIP__TX4_DL EQU CYREG_CAN0_TX4_DL
CAN_CanIP__TX4_ID EQU CYREG_CAN0_TX4_ID
CAN_CanIP__TX5_CMD EQU CYREG_CAN0_TX5_CMD
CAN_CanIP__TX5_DH EQU CYREG_CAN0_TX5_DH
CAN_CanIP__TX5_DL EQU CYREG_CAN0_TX5_DL
CAN_CanIP__TX5_ID EQU CYREG_CAN0_TX5_ID
CAN_CanIP__TX6_CMD EQU CYREG_CAN0_TX6_CMD
CAN_CanIP__TX6_DH EQU CYREG_CAN0_TX6_DH
CAN_CanIP__TX6_DL EQU CYREG_CAN0_TX6_DL
CAN_CanIP__TX6_ID EQU CYREG_CAN0_TX6_ID
CAN_CanIP__TX7_CMD EQU CYREG_CAN0_TX7_CMD
CAN_CanIP__TX7_DH EQU CYREG_CAN0_TX7_DH
CAN_CanIP__TX7_DL EQU CYREG_CAN0_TX7_DL
CAN_CanIP__TX7_ID EQU CYREG_CAN0_TX7_ID

/* CAN_isr */
CAN_isr__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
CAN_isr__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
CAN_isr__INTC_MASK EQU 0x10000
CAN_isr__INTC_NUMBER EQU 16
CAN_isr__INTC_PRIOR_NUM EQU 7
CAN_isr__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_16
CAN_isr__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
CAN_isr__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* CAN_Timer_TimerHW */
CAN_Timer_TimerHW__CAP0 EQU CYREG_TMR0_CAP0
CAN_Timer_TimerHW__CAP1 EQU CYREG_TMR0_CAP1
CAN_Timer_TimerHW__CFG0 EQU CYREG_TMR0_CFG0
CAN_Timer_TimerHW__CFG1 EQU CYREG_TMR0_CFG1
CAN_Timer_TimerHW__CFG2 EQU CYREG_TMR0_CFG2
CAN_Timer_TimerHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
CAN_Timer_TimerHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
CAN_Timer_TimerHW__PER0 EQU CYREG_TMR0_PER0
CAN_Timer_TimerHW__PER1 EQU CYREG_TMR0_PER1
CAN_Timer_TimerHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
CAN_Timer_TimerHW__PM_ACT_MSK EQU 0x01
CAN_Timer_TimerHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
CAN_Timer_TimerHW__PM_STBY_MSK EQU 0x01
CAN_Timer_TimerHW__RT0 EQU CYREG_TMR0_RT0
CAN_Timer_TimerHW__RT1 EQU CYREG_TMR0_RT1
CAN_Timer_TimerHW__SR0 EQU CYREG_TMR0_SR0

/* LCD_LCDPort */
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

/* LED */
LED__0__INTTYPE EQU CYREG_PICU6_INTTYPE0
LED__0__MASK EQU 0x01
LED__0__PC EQU CYREG_PRT6_PC0
LED__0__PORT EQU 6
LED__0__SHIFT EQU 0
LED__AG EQU CYREG_PRT6_AG
LED__AMUX EQU CYREG_PRT6_AMUX
LED__BIE EQU CYREG_PRT6_BIE
LED__BIT_MASK EQU CYREG_PRT6_BIT_MASK
LED__BYP EQU CYREG_PRT6_BYP
LED__CTL EQU CYREG_PRT6_CTL
LED__DM0 EQU CYREG_PRT6_DM0
LED__DM1 EQU CYREG_PRT6_DM1
LED__DM2 EQU CYREG_PRT6_DM2
LED__DR EQU CYREG_PRT6_DR
LED__INP_DIS EQU CYREG_PRT6_INP_DIS
LED__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU6_BASE
LED__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
LED__LCD_EN EQU CYREG_PRT6_LCD_EN
LED__MASK EQU 0x01
LED__PORT EQU 6
LED__PRT EQU CYREG_PRT6_PRT
LED__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
LED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
LED__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
LED__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
LED__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
LED__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
LED__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
LED__PS EQU CYREG_PRT6_PS
LED__SHIFT EQU 0
LED__SLW EQU CYREG_PRT6_SLW

/* Tach */
Tach__0__INTTYPE EQU CYREG_PICU1_INTTYPE5
Tach__0__MASK EQU 0x20
Tach__0__PC EQU CYREG_PRT1_PC5
Tach__0__PORT EQU 1
Tach__0__SHIFT EQU 5
Tach__AG EQU CYREG_PRT1_AG
Tach__AMUX EQU CYREG_PRT1_AMUX
Tach__BIE EQU CYREG_PRT1_BIE
Tach__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Tach__BYP EQU CYREG_PRT1_BYP
Tach__CTL EQU CYREG_PRT1_CTL
Tach__DM0 EQU CYREG_PRT1_DM0
Tach__DM1 EQU CYREG_PRT1_DM1
Tach__DM2 EQU CYREG_PRT1_DM2
Tach__DR EQU CYREG_PRT1_DR
Tach__INP_DIS EQU CYREG_PRT1_INP_DIS
Tach__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
Tach__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Tach__LCD_EN EQU CYREG_PRT1_LCD_EN
Tach__MASK EQU 0x20
Tach__PORT EQU 1
Tach__PRT EQU CYREG_PRT1_PRT
Tach__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Tach__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Tach__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Tach__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Tach__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Tach__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Tach__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Tach__PS EQU CYREG_PRT1_PS
Tach__SHIFT EQU 5
Tach__SLW EQU CYREG_PRT1_SLW

/* Drive */
Drive__0__INTTYPE EQU CYREG_PICU3_INTTYPE0
Drive__0__MASK EQU 0x01
Drive__0__PC EQU CYREG_PRT3_PC0
Drive__0__PORT EQU 3
Drive__0__SHIFT EQU 0
Drive__AG EQU CYREG_PRT3_AG
Drive__AMUX EQU CYREG_PRT3_AMUX
Drive__BIE EQU CYREG_PRT3_BIE
Drive__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Drive__BYP EQU CYREG_PRT3_BYP
Drive__CTL EQU CYREG_PRT3_CTL
Drive__DM0 EQU CYREG_PRT3_DM0
Drive__DM1 EQU CYREG_PRT3_DM1
Drive__DM2 EQU CYREG_PRT3_DM2
Drive__DR EQU CYREG_PRT3_DR
Drive__INP_DIS EQU CYREG_PRT3_INP_DIS
Drive__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Drive__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Drive__LCD_EN EQU CYREG_PRT3_LCD_EN
Drive__MASK EQU 0x01
Drive__PORT EQU 3
Drive__PRT EQU CYREG_PRT3_PRT
Drive__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Drive__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Drive__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Drive__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Drive__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Drive__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Drive__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Drive__PS EQU CYREG_PRT3_PS
Drive__SHIFT EQU 0
Drive__SLW EQU CYREG_PRT3_SLW

/* Buzzer */
Buzzer__0__INTTYPE EQU CYREG_PICU3_INTTYPE2
Buzzer__0__MASK EQU 0x04
Buzzer__0__PC EQU CYREG_PRT3_PC2
Buzzer__0__PORT EQU 3
Buzzer__0__SHIFT EQU 2
Buzzer__AG EQU CYREG_PRT3_AG
Buzzer__AMUX EQU CYREG_PRT3_AMUX
Buzzer__BIE EQU CYREG_PRT3_BIE
Buzzer__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Buzzer__BYP EQU CYREG_PRT3_BYP
Buzzer__CTL EQU CYREG_PRT3_CTL
Buzzer__DM0 EQU CYREG_PRT3_DM0
Buzzer__DM1 EQU CYREG_PRT3_DM1
Buzzer__DM2 EQU CYREG_PRT3_DM2
Buzzer__DR EQU CYREG_PRT3_DR
Buzzer__INP_DIS EQU CYREG_PRT3_INP_DIS
Buzzer__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Buzzer__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Buzzer__LCD_EN EQU CYREG_PRT3_LCD_EN
Buzzer__MASK EQU 0x04
Buzzer__PORT EQU 3
Buzzer__PRT EQU CYREG_PRT3_PRT
Buzzer__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Buzzer__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Buzzer__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Buzzer__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Buzzer__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Buzzer__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Buzzer__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Buzzer__PS EQU CYREG_PRT3_PS
Buzzer__SHIFT EQU 2
Buzzer__SLW EQU CYREG_PRT3_SLW

/* RGB1_1 */
RGB1_1__0__INTTYPE EQU CYREG_PICU12_INTTYPE6
RGB1_1__0__MASK EQU 0x40
RGB1_1__0__PC EQU CYREG_PRT12_PC6
RGB1_1__0__PORT EQU 12
RGB1_1__0__SHIFT EQU 6
RGB1_1__AG EQU CYREG_PRT12_AG
RGB1_1__BIE EQU CYREG_PRT12_BIE
RGB1_1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
RGB1_1__BYP EQU CYREG_PRT12_BYP
RGB1_1__DM0 EQU CYREG_PRT12_DM0
RGB1_1__DM1 EQU CYREG_PRT12_DM1
RGB1_1__DM2 EQU CYREG_PRT12_DM2
RGB1_1__DR EQU CYREG_PRT12_DR
RGB1_1__INP_DIS EQU CYREG_PRT12_INP_DIS
RGB1_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
RGB1_1__MASK EQU 0x40
RGB1_1__PORT EQU 12
RGB1_1__PRT EQU CYREG_PRT12_PRT
RGB1_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
RGB1_1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
RGB1_1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
RGB1_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
RGB1_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
RGB1_1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
RGB1_1__PS EQU CYREG_PRT12_PS
RGB1_1__SHIFT EQU 6
RGB1_1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
RGB1_1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
RGB1_1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
RGB1_1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
RGB1_1__SLW EQU CYREG_PRT12_SLW

/* RGB1_2 */
RGB1_2__0__INTTYPE EQU CYREG_PICU5_INTTYPE7
RGB1_2__0__MASK EQU 0x80
RGB1_2__0__PC EQU CYREG_PRT5_PC7
RGB1_2__0__PORT EQU 5
RGB1_2__0__SHIFT EQU 7
RGB1_2__AG EQU CYREG_PRT5_AG
RGB1_2__AMUX EQU CYREG_PRT5_AMUX
RGB1_2__BIE EQU CYREG_PRT5_BIE
RGB1_2__BIT_MASK EQU CYREG_PRT5_BIT_MASK
RGB1_2__BYP EQU CYREG_PRT5_BYP
RGB1_2__CTL EQU CYREG_PRT5_CTL
RGB1_2__DM0 EQU CYREG_PRT5_DM0
RGB1_2__DM1 EQU CYREG_PRT5_DM1
RGB1_2__DM2 EQU CYREG_PRT5_DM2
RGB1_2__DR EQU CYREG_PRT5_DR
RGB1_2__INP_DIS EQU CYREG_PRT5_INP_DIS
RGB1_2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
RGB1_2__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
RGB1_2__LCD_EN EQU CYREG_PRT5_LCD_EN
RGB1_2__MASK EQU 0x80
RGB1_2__PORT EQU 5
RGB1_2__PRT EQU CYREG_PRT5_PRT
RGB1_2__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
RGB1_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
RGB1_2__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
RGB1_2__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
RGB1_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
RGB1_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
RGB1_2__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
RGB1_2__PS EQU CYREG_PRT5_PS
RGB1_2__SHIFT EQU 7
RGB1_2__SLW EQU CYREG_PRT5_SLW

/* RGB2_1 */
RGB2_1__0__INTTYPE EQU CYREG_PICU1_INTTYPE7
RGB2_1__0__MASK EQU 0x80
RGB2_1__0__PC EQU CYREG_PRT1_PC7
RGB2_1__0__PORT EQU 1
RGB2_1__0__SHIFT EQU 7
RGB2_1__AG EQU CYREG_PRT1_AG
RGB2_1__AMUX EQU CYREG_PRT1_AMUX
RGB2_1__BIE EQU CYREG_PRT1_BIE
RGB2_1__BIT_MASK EQU CYREG_PRT1_BIT_MASK
RGB2_1__BYP EQU CYREG_PRT1_BYP
RGB2_1__CTL EQU CYREG_PRT1_CTL
RGB2_1__DM0 EQU CYREG_PRT1_DM0
RGB2_1__DM1 EQU CYREG_PRT1_DM1
RGB2_1__DM2 EQU CYREG_PRT1_DM2
RGB2_1__DR EQU CYREG_PRT1_DR
RGB2_1__INP_DIS EQU CYREG_PRT1_INP_DIS
RGB2_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
RGB2_1__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
RGB2_1__LCD_EN EQU CYREG_PRT1_LCD_EN
RGB2_1__MASK EQU 0x80
RGB2_1__PORT EQU 1
RGB2_1__PRT EQU CYREG_PRT1_PRT
RGB2_1__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
RGB2_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
RGB2_1__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
RGB2_1__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
RGB2_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
RGB2_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
RGB2_1__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
RGB2_1__PS EQU CYREG_PRT1_PS
RGB2_1__SHIFT EQU 7
RGB2_1__SLW EQU CYREG_PRT1_SLW

/* RGB2_2 */
RGB2_2__0__INTTYPE EQU CYREG_PICU5_INTTYPE6
RGB2_2__0__MASK EQU 0x40
RGB2_2__0__PC EQU CYREG_PRT5_PC6
RGB2_2__0__PORT EQU 5
RGB2_2__0__SHIFT EQU 6
RGB2_2__AG EQU CYREG_PRT5_AG
RGB2_2__AMUX EQU CYREG_PRT5_AMUX
RGB2_2__BIE EQU CYREG_PRT5_BIE
RGB2_2__BIT_MASK EQU CYREG_PRT5_BIT_MASK
RGB2_2__BYP EQU CYREG_PRT5_BYP
RGB2_2__CTL EQU CYREG_PRT5_CTL
RGB2_2__DM0 EQU CYREG_PRT5_DM0
RGB2_2__DM1 EQU CYREG_PRT5_DM1
RGB2_2__DM2 EQU CYREG_PRT5_DM2
RGB2_2__DR EQU CYREG_PRT5_DR
RGB2_2__INP_DIS EQU CYREG_PRT5_INP_DIS
RGB2_2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
RGB2_2__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
RGB2_2__LCD_EN EQU CYREG_PRT5_LCD_EN
RGB2_2__MASK EQU 0x40
RGB2_2__PORT EQU 5
RGB2_2__PRT EQU CYREG_PRT5_PRT
RGB2_2__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
RGB2_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
RGB2_2__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
RGB2_2__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
RGB2_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
RGB2_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
RGB2_2__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
RGB2_2__PS EQU CYREG_PRT5_PS
RGB2_2__SHIFT EQU 6
RGB2_2__SLW EQU CYREG_PRT5_SLW

/* RGB3_1 */
RGB3_1__0__INTTYPE EQU CYREG_PICU1_INTTYPE6
RGB3_1__0__MASK EQU 0x40
RGB3_1__0__PC EQU CYREG_PRT1_PC6
RGB3_1__0__PORT EQU 1
RGB3_1__0__SHIFT EQU 6
RGB3_1__AG EQU CYREG_PRT1_AG
RGB3_1__AMUX EQU CYREG_PRT1_AMUX
RGB3_1__BIE EQU CYREG_PRT1_BIE
RGB3_1__BIT_MASK EQU CYREG_PRT1_BIT_MASK
RGB3_1__BYP EQU CYREG_PRT1_BYP
RGB3_1__CTL EQU CYREG_PRT1_CTL
RGB3_1__DM0 EQU CYREG_PRT1_DM0
RGB3_1__DM1 EQU CYREG_PRT1_DM1
RGB3_1__DM2 EQU CYREG_PRT1_DM2
RGB3_1__DR EQU CYREG_PRT1_DR
RGB3_1__INP_DIS EQU CYREG_PRT1_INP_DIS
RGB3_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
RGB3_1__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
RGB3_1__LCD_EN EQU CYREG_PRT1_LCD_EN
RGB3_1__MASK EQU 0x40
RGB3_1__PORT EQU 1
RGB3_1__PRT EQU CYREG_PRT1_PRT
RGB3_1__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
RGB3_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
RGB3_1__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
RGB3_1__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
RGB3_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
RGB3_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
RGB3_1__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
RGB3_1__PS EQU CYREG_PRT1_PS
RGB3_1__SHIFT EQU 6
RGB3_1__SLW EQU CYREG_PRT1_SLW

/* RGB3_2 */
RGB3_2__0__INTTYPE EQU CYREG_PICU5_INTTYPE5
RGB3_2__0__MASK EQU 0x20
RGB3_2__0__PC EQU CYREG_PRT5_PC5
RGB3_2__0__PORT EQU 5
RGB3_2__0__SHIFT EQU 5
RGB3_2__AG EQU CYREG_PRT5_AG
RGB3_2__AMUX EQU CYREG_PRT5_AMUX
RGB3_2__BIE EQU CYREG_PRT5_BIE
RGB3_2__BIT_MASK EQU CYREG_PRT5_BIT_MASK
RGB3_2__BYP EQU CYREG_PRT5_BYP
RGB3_2__CTL EQU CYREG_PRT5_CTL
RGB3_2__DM0 EQU CYREG_PRT5_DM0
RGB3_2__DM1 EQU CYREG_PRT5_DM1
RGB3_2__DM2 EQU CYREG_PRT5_DM2
RGB3_2__DR EQU CYREG_PRT5_DR
RGB3_2__INP_DIS EQU CYREG_PRT5_INP_DIS
RGB3_2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
RGB3_2__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
RGB3_2__LCD_EN EQU CYREG_PRT5_LCD_EN
RGB3_2__MASK EQU 0x20
RGB3_2__PORT EQU 5
RGB3_2__PRT EQU CYREG_PRT5_PRT
RGB3_2__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
RGB3_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
RGB3_2__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
RGB3_2__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
RGB3_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
RGB3_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
RGB3_2__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
RGB3_2__PS EQU CYREG_PRT5_PS
RGB3_2__SHIFT EQU 5
RGB3_2__SLW EQU CYREG_PRT5_SLW

/* isr_can */
isr_can__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_can__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_can__INTC_MASK EQU 0x01
isr_can__INTC_NUMBER EQU 0
isr_can__INTC_PRIOR_NUM EQU 7
isr_can__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
isr_can__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_can__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* WaveDAC8_1_DacClk */
WaveDAC8_1_DacClk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
WaveDAC8_1_DacClk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
WaveDAC8_1_DacClk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
WaveDAC8_1_DacClk__CFG2_SRC_SEL_MASK EQU 0x07
WaveDAC8_1_DacClk__INDEX EQU 0x00
WaveDAC8_1_DacClk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
WaveDAC8_1_DacClk__PM_ACT_MSK EQU 0x01
WaveDAC8_1_DacClk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
WaveDAC8_1_DacClk__PM_STBY_MSK EQU 0x01

/* WaveDAC8_1_VDAC8_viDAC8 */
WaveDAC8_1_VDAC8_viDAC8__CR0 EQU CYREG_DAC1_CR0
WaveDAC8_1_VDAC8_viDAC8__CR1 EQU CYREG_DAC1_CR1
WaveDAC8_1_VDAC8_viDAC8__D EQU CYREG_DAC1_D
WaveDAC8_1_VDAC8_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
WaveDAC8_1_VDAC8_viDAC8__PM_ACT_MSK EQU 0x02
WaveDAC8_1_VDAC8_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
WaveDAC8_1_VDAC8_viDAC8__PM_STBY_MSK EQU 0x02
WaveDAC8_1_VDAC8_viDAC8__STROBE EQU CYREG_DAC1_STROBE
WaveDAC8_1_VDAC8_viDAC8__SW0 EQU CYREG_DAC1_SW0
WaveDAC8_1_VDAC8_viDAC8__SW2 EQU CYREG_DAC1_SW2
WaveDAC8_1_VDAC8_viDAC8__SW3 EQU CYREG_DAC1_SW3
WaveDAC8_1_VDAC8_viDAC8__SW4 EQU CYREG_DAC1_SW4
WaveDAC8_1_VDAC8_viDAC8__TR EQU CYREG_DAC1_TR
WaveDAC8_1_VDAC8_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M1
WaveDAC8_1_VDAC8_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M2
WaveDAC8_1_VDAC8_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M3
WaveDAC8_1_VDAC8_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M4
WaveDAC8_1_VDAC8_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M5
WaveDAC8_1_VDAC8_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M6
WaveDAC8_1_VDAC8_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M7
WaveDAC8_1_VDAC8_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M8
WaveDAC8_1_VDAC8_viDAC8__TST EQU CYREG_DAC1_TST

/* WaveDAC8_1_Wave1_DMA */
WaveDAC8_1_Wave1_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC8_1_Wave1_DMA__DRQ_NUMBER EQU 0
WaveDAC8_1_Wave1_DMA__NUMBEROF_TDS EQU 0
WaveDAC8_1_Wave1_DMA__PRIORITY EQU 2
WaveDAC8_1_Wave1_DMA__TERMIN_EN EQU 0
WaveDAC8_1_Wave1_DMA__TERMIN_SEL EQU 0
WaveDAC8_1_Wave1_DMA__TERMOUT0_EN EQU 0
WaveDAC8_1_Wave1_DMA__TERMOUT0_SEL EQU 0
WaveDAC8_1_Wave1_DMA__TERMOUT1_EN EQU 0
WaveDAC8_1_Wave1_DMA__TERMOUT1_SEL EQU 0

/* WaveDAC8_1_Wave2_DMA */
WaveDAC8_1_Wave2_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC8_1_Wave2_DMA__DRQ_NUMBER EQU 1
WaveDAC8_1_Wave2_DMA__NUMBEROF_TDS EQU 0
WaveDAC8_1_Wave2_DMA__PRIORITY EQU 2
WaveDAC8_1_Wave2_DMA__TERMIN_EN EQU 0
WaveDAC8_1_Wave2_DMA__TERMIN_SEL EQU 0
WaveDAC8_1_Wave2_DMA__TERMOUT0_EN EQU 0
WaveDAC8_1_Wave2_DMA__TERMOUT0_SEL EQU 0
WaveDAC8_1_Wave2_DMA__TERMOUT1_EN EQU 0
WaveDAC8_1_Wave2_DMA__TERMOUT1_SEL EQU 0

/* timer_clock */
timer_clock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
timer_clock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
timer_clock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
timer_clock__CFG2_SRC_SEL_MASK EQU 0x07
timer_clock__INDEX EQU 0x01
timer_clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
timer_clock__PM_ACT_MSK EQU 0x02
timer_clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
timer_clock__PM_STBY_MSK EQU 0x02

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 19
CYDEV_CHIP_DIE_PSOC4A EQU 11
CYDEV_CHIP_DIE_PSOC5LP EQU 18
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 11
CYDEV_CHIP_MEMBER_4C EQU 16
CYDEV_CHIP_MEMBER_4D EQU 7
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 12
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 10
CYDEV_CHIP_MEMBER_4I EQU 15
CYDEV_CHIP_MEMBER_4J EQU 8
CYDEV_CHIP_MEMBER_4K EQU 9
CYDEV_CHIP_MEMBER_4L EQU 14
CYDEV_CHIP_MEMBER_4M EQU 13
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 18
CYDEV_CHIP_MEMBER_5B EQU 17
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_VDDIO0_MV EQU 3300
CYDEV_VDDIO1_MV EQU 3300
CYDEV_VDDIO2_MV EQU 3300
CYDEV_VDDIO3_MV EQU 3300
CYDEV_VIO0_MV EQU 3300
CYDEV_VIO1_MV EQU 3300
CYDEV_VIO2_MV EQU 3300
CYDEV_VIO3_MV EQU 3300
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000003
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */