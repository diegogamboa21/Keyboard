/* 
 * File:   Config.h
 * Author: Miguel
 *
 * Created on August 30, 2015, 7:27 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif


// PIC16F84A Configuration Bit Settings

// 'C' source line config statements

#include <xc.h>

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (Power-up Timer is enabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#ifdef	__cplusplus
}
#endif

#endif	/* CONFIG_H */

