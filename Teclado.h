/* 
 * File:   Teclado.h
 * Author: Diego
 *
 * Created on 17 de noviembre de 2015, 09:01 PM
 */

#ifndef TECLADO_H
#define	TECLADO_H

#include <pic16f84a.h>
#include"Varios\Config_micro.h"

//--------------------------***----------------------------//



typedef struct {

	unsigned char columna;
	unsigned char Numero_Encontrado;

	unsigned int Numero_codificado;
    
    unsigned char anterior_Fila1;
	unsigned char actual_Fila1;

	unsigned char anterior_Fila2;
	unsigned char actual_Fila2;

	unsigned char anterior_Fila3;
	unsigned char actual_Fila3;

	unsigned char anterior_Fila4;
	unsigned char actual_Fila4;

}Estructura_general;
//--------------------------***----------------------------//

Estructura_general Inicializar (Estructura_general Control);
Estructura_general Polarizar_Columna (Estructura_general Control);
Estructura_general Leer_Filas(Estructura_general Control);
Estructura_general codificar(Estructura_general Control);
//--------------------------***----------------------------//


#endif	/* TECLADO_H */

