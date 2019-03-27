#include <pic16f84a.h>
#include"Varios\Config_micro.h"
#include "Teclado.h"

static Estructura_general Control;

int main (){
    
    TRISA=0X00;
    TRISB=0XFF;
    
    Control=Inicializar(Control);
    Control=Polarizar_Columna (Control);
    Control=Leer_Filas(Control);
    Control=codificar(Control);
    
    
    

}