/*
 * File:   main.c
 * Author: Kazusa
 *
 * Created on 2018/09/08, 23:06
 */

// PIC16F1508 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTOSC    // Oscillator Selection Bits (INTOSC oscillator: I/O function on CLKIN pin)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = OFF       // Internal/External Switchover Mode (Internal/External Switchover Mode is disabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config LPBOR = OFF      // Low-Power Brown Out Reset (Low-Power BOR is disabled)
#pragma config LVP = OFF        // Low-Voltage Programming Enable (High-voltage on MCLR/VPP must be used for programming)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include <stdint.h>
#include <stdlib.h>
#include "SSD1306tiny.h"
#include "I2CMaster.h"

#define _XTAL_FREQ 4000000

void init_port(void);
void init_system(void);
void init_timer0(void);

uint8_t Tm0_OF = 0;
uint8_t DispInvert = 1;

void __interrupt() ISR(void){
    INTCONbits.GIE = 0;
    //TODO: write something routine
    if(INTCONbits.TMR0IF == 1){
        INTCONbits.TMR0IF = 0;
        Tm0_OF++;
    }
    isr_I2C();
}

void main(void) {
    char s;
    init_system();
    init_port();
    init_timer0();
    init_I2C();
    initDisplay();
    clearDisplay();
    for(uint8_t i = 0; i < 10; i++){
        //itoa(&s, i, 10);
        s = (char)(i + 0x30);
        putChar_Display(i, 0, &s);
    }
    for(uint8_t i = 0; i < 10; i++){
        //itoa(&s, i, 10);
        s = (char)(i + 0x41);
        putChar_Display(i, 2, &s);
    }
    while(1){
        while(Tm0_OF < 4){
            asm("nop");
            asm("nop");
            asm("nop");
            asm("nop");
        }
        Tm0_OF = 0;
        LATBbits.LATB7 = (uint8_t)~LATBbits.LATB7;
        invertDisplay(DispInvert);
        DispInvert = (uint8_t)~DispInvert;
    }
    return;
}

void init_port(void){
    PORTA = 0;
    LATA = 0;
    ANSELA = 0;
    TRISA = 0xFF;
    PORTB = 0;
    LATB = 0;
    ANSELB = 0;
    TRISB = 0x7F;
    PORTC = 0;
    LATC = 0;
    ANSELC = 0;
    TRISC = 0xFF;
    return;
}

void init_system(void){
    OSCCON = 0b01101010;
    OPTION_REG = 0b01111111;
    APFCONbits.CLC1SEL = 1;
    INTCON = 0b10000000;
    return;
}

void init_timer0(void){
    INTCON = 0b11100000;
    OPTION_REG = 0b01010111;
    return;
}