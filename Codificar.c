#include <pic16f84a.h>
#include "Varios/Config_micro.h"
#include "Teclado.h"

Estructura_general codificar(Estructura_general Control){

	if(Control->Numero_encontrado==1){

		if(Control->columna==0){
			Control->Numero_Codificado= 0XFFE;
		else{if(Control->columna==1){
			Control->Numero_Codificado= 0XFFD;
			}
			else{if(Control->columna==2){
				Control->Numero_Codificado= 0xFFB;
				}
			}
		}
	
	}

	if(Control->Numero_encontrado==2){

		if(Control->columna==0){
			Control->Numero_Codificado= 0XFF7;
		else{if(Control->columna==1){
			Control->Numero_Codificado= 0XFEF;
			}
			else{if(Control->columna==2){
				Control->Numero_Codificado= 0xFDF;
				}
			}
		}
	
	}

		if(Control->Numero_encontrado==3){

		if(Control->columna==0){
			Control->Numero_Codificado= 0XFBF;
		else{if(Control->columna==1){
			Control->Numero_Codificado= 0XF7F;
			}
			else{if(Control->columna==2){
				Control->Numero_Codificado= 0xEFF;
				}
			}
		}
	
	}

		if(Control->Numero_encontrado==4){

		if(Control->columna==0){
			Control->Numero_Codificado= 0XBFF;
		else{if(Control->columna==1){
			Control->Numero_Codificado= 0XDFF;
			}
			else{if(Control->columna==2){
				Control->Numero_Codificado= 0x7FF;
				}
			}
		}
	
	}	

return Control;

}
