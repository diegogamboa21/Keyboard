#include <pic16f84a.h>
#include "Varios/Config_micro.h"
#include "Teclado.h"


Estructura_general Leer_Filas(Estructura_general Control){


	Control->anterior_fila1=Control->actual_fila1;
	Control->actual_fila1=PORTB&(0x01);

	Control->anterior_fila2=Control->actual_fila2;
	Control->actual_fila2=PORTB&(0x02);
    
    Control->anterior_fila3=Control->actual_fila3;
	Control->actual_fila3=PORTB&(0x04);
    
	Control->anterior_fila4=Control->actual_fila4;
	Control->actual_fila4=PORTB&(0x08);


	if(Control->anterior_fila1==1 && Control->actual_fila1==0){
		
		A.Numero_encontrado=1;
		return Control;		

	}else{

		if(Control->anterior_fila2==1 && Control->actual_fila2==0){
		
			A.Numero_encontrado=2;
			return Control;		

		}else{

			if(Control->anterior_fila3==1 && Control->actual_fila3==0){
		
				Control.Numero_encontrado=3;
				return Control;		

			}else{

				if(Control->anterior_fila4==1 && Control->actual_fila4==0){
		
					Control.Numero_encontrado=4;
					return Control;		

				}else{
			
					Control.Numero_encontrado=0;
					return Control;					

				}
			}
		}
	}


}