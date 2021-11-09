///===========================================[MAIN CONFIGURATION]=========================================
#include <16F877A.h>
#device ADC=10
#FUSES WDT                      //Watch Dog Timer enabled!
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#use delay(crystal=4MHz)
#use rs232(uart1, baud = 9600, xmit = PIN_C6, rcv = PIN_C7,bits=8, stop=1)
#use i2c(master,fast, sda=PIN_C4, scl=PIN_C3)
//==========================================[DEFINITIONS]=================================================
#include <GLCD2.c> //GLCD kütüphanesi tanımı
#define EEPROM_SDA  PIN_C4 //eeprom pini tanımı
#define EEPROM_SCL  PIN_C3 //eeprom pini tanımı
#include <241025.c> //eeprom kütüphanesi
#IGNORE_WARNINGS 203, 205, 216 //gereksiz uyarıların kaldırılması

#byte T1CON = 0x10 // T1CON tanımlaması
#byte TMR1L = 0x0E // TMR1L tanımlaması
#byte TMR1H = 0x0F // TMR1L tanımlaması


//==========================================[FUNCTIONS]=================================================


void main(){
	//This project is not open-source.
}