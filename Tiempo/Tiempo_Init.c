
#include <pic16f84a.h>
#include "Tiempo.h"

void Tiempo_Init(void)
{
    INTCONbits.T0IE=0;
	INTCONbits.T0IF=0;
	OPTION_REGbits.T0CS=0;
    OPTION_REGbits.PSA=0;
    OPTION_REGbits.PS=7;
    TMR0=0;
}
