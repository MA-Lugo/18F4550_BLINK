/* 
 * File:   main.c
 * Author: MA-Lugo
 *
 * Created on 28 de junio de 2020, 07:30 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#define _XTAL_FREQ 10000000
/*
 *  
 */

void PORTB_INIT(){
    LATB =  0;
    TRISBbits.RB1 = 0;
    
}


void main (void){
    PORTB_INIT();
    while(1){
        PORTBbits.RB1 = 1;
        __delay_ms(500);
        PORTBbits.RB1 = 0;
        __delay_ms(500);
        
    }
    
    
}

