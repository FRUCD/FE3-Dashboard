# Component constraints for C:\cygwin\home\ianrd\FRUCD-Dashboard\Dashboard.cydsn\TopDesign\TopDesign.cysch
# Project: C:\cygwin\home\ianrd\FRUCD-Dashboard\Dashboard.cydsn\Dashboard.cyprj
# Date: Sat, 22 Feb 2020 20:55:51 GMT
# TFT
# False paths present for both 8 and 16 bits Graphic LCD Interface configurations 
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd8:Lsb\/p_out_0}] -to [get_pins {\TFT:LsbReg\/status_0}]] : \
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Lsb\/p_out_0}] -to [get_pins {\TFT:LsbReg\/status_0}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd8:Lsb\/p_out_1}] -to [get_pins {\TFT:LsbReg\/status_1}]] : \
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Lsb\/p_out_1}] -to [get_pins {\TFT:LsbReg\/status_1}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd8:Lsb\/p_out_2}] -to [get_pins {\TFT:LsbReg\/status_2}]] : \
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Lsb\/p_out_2}] -to [get_pins {\TFT:LsbReg\/status_2}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd8:Lsb\/p_out_3}] -to [get_pins {\TFT:LsbReg\/status_3}]] : \
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Lsb\/p_out_3}] -to [get_pins {\TFT:LsbReg\/status_3}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd8:Lsb\/p_out_4}] -to [get_pins {\TFT:LsbReg\/status_4}]] : \
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Lsb\/p_out_4}] -to [get_pins {\TFT:LsbReg\/status_4}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd8:Lsb\/p_out_5}] -to [get_pins {\TFT:LsbReg\/status_5}]] : \
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Lsb\/p_out_5}] -to [get_pins {\TFT:LsbReg\/status_5}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd8:Lsb\/p_out_6}] -to [get_pins {\TFT:LsbReg\/status_6}]] : \
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Lsb\/p_out_6}] -to [get_pins {\TFT:LsbReg\/status_6}]]} 
 
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd8:Lsb\/p_out_7}] -to [get_pins {\TFT:LsbReg\/status_7}]] : \
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Lsb\/p_out_7}] -to [get_pins {\TFT:LsbReg\/status_7}]]} 
   
# False paths present only for 16 bits Graphic LCD Interface configuration
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Msb\/p_out_0}] -to [get_pins {\TFT:GraphLcd16:MsbReg\/status_0}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Msb\/p_out_1}] -to [get_pins {\TFT:GraphLcd16:MsbReg\/status_1}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Msb\/p_out_2}] -to [get_pins {\TFT:GraphLcd16:MsbReg\/status_2}]] : {}}

expr {(16) == 16 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Msb\/p_out_3}] -to [get_pins {\TFT:GraphLcd16:MsbReg\/status_3}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Msb\/p_out_4}] -to [get_pins {\TFT:GraphLcd16:MsbReg\/status_4}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Msb\/p_out_5}] -to [get_pins {\TFT:GraphLcd16:MsbReg\/status_5}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Msb\/p_out_6}] -to [get_pins {\TFT:GraphLcd16:MsbReg\/status_6}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\TFT:GraphLcd16:Msb\/p_out_7}] -to [get_pins {\TFT:GraphLcd16:MsbReg\/status_7}]] : {}}

