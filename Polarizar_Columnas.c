
#include "Teclado.h"
#include <pic16f84a.h>
#include "Varios/Config_micro.h"

Estructura_general Polarizar_Columna (Estructura_general Control){
    
    
    PORTA=PORTA|0X01<<(Control->Columna);
    PORTA=PORTA&0X01<<(Control->Columna);
    
    Control->Columna=((Control->Columna)+1);
    
    	if(Control->Columna==3){

		Control->Columna=0;

	}
    return Control;
} 

    