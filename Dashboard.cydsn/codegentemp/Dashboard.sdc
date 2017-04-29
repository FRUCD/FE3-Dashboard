# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Schuyler\Documents\PSoC Creator\Dashboard\FE3-Dashboard\Dashboard.cydsn\Dashboard.cyprj
# Date: Fri, 03 Mar 2017 04:26:39 GMT
#set_units -time ns
create_clock -name {WaveDAC8_1_DacClk(routed)} -period 5000 -waveform {0 2500} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {CyBUS_CLK(fixed-function)} -period 41.666666666666664 -waveform {0 20.8333333333333} [get_pins {ClockBlock/clk_bus_glb_ff}]
create_generated_clock -name {WaveDAC8_1_DacClk} -source [get_pins {ClockBlock/clk_sync}] -edges {1 121 241} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {timer_clock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 24001 48001} [list [get_pins {ClockBlock/dclk_glb_1}]]
create_clock -name {timer_clock(fixed-function)} -period 1000000 -waveform {0 41.6666666666667} [get_pins {ClockBlock/dclk_glb_ff_1}]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\Schuyler\Documents\PSoC Creator\Dashboard\FE3-Dashboard\Dashboard.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Schuyler\Documents\PSoC Creator\Dashboard\FE3-Dashboard\Dashboard.cydsn\Dashboard.cyprj
# Date: Fri, 03 Mar 2017 04:26:21 GMT
