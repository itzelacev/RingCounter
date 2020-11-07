#include <18F4620.h>
#device ADC=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES WDT128                	//Watch Dog Timer uses 1:128 Postscale
#FUSES NOFCMEN               	//Fail-safe clock monitor disabled
#FUSES NOIESO                	//Internal External Switch Over mode disabled
#FUSES PUT                   	//Power Up Timer
#FUSES NOBROWNOUT            	//No brownout reset
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOXINST               	//Extended set extension and Indexed Addressing mode disabled (Legacy mode)

#use delay(crystal=16000000)

#use FAST_IO(A)

#define LSB 0x01
#define MSB 0x20
#define DELAY 1