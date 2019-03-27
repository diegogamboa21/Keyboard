
#include <pic16f84a.h>
#include "tiempo.h"

char Tiempo_Atender (char atienda) 
{
	if (INTCONbits.T0IF)
    {
	    if (atienda)
     	INTCONbits.T0IF=0; // Baja la bandera (depende del hw
   		return SI;
   	} 
   	else
   		return NO;
}
