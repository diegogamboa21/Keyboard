#include <pic16f84a.h>
#include "Varios/Config_micro.h"
#include "Teclado.h"

Estructura_general Inicializar(Estructura_general Control){
    
    Control->Columna=0;
    
    Control->anterior_Fila1=0;
    Control->anterior_Fila2=0;
    Control->anterior_Fila3=0;
    Control->anterior_Fila4=0;
    
    Control->actual_Fila1=0;
    Control->actual_Fila2=0;
    Control->actual_Fila3=0;
    Control->actual_Fila4=0;
    
    return Control;
    
}
