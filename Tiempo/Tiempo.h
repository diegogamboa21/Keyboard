/************************************************************
*     				 M�DULO TIEMPO                 	        *
*									 						*
*  	Nombre Archivo: Tiempo.h       	 						*
*	Tipo: Header File                						*
*	Autor: Flor �ngela										*
*************************************************************/

/* Definiciones del modulo de tiempo. */
#if !defined(TIEMPO_H)

#define TIEMPO_H

#define TIMERSTAT IFS0
#define TIMER_TC 0X80

#include "../Varios/Varios.h"
#include <stddef.h>
/* ------------------- Tipos de datos -------------------- */
// Contador
typedef unsigned char Tm_Contador;

// Numero de periodos o timeouts
typedef unsigned char Tm_Num;

// Estructura para generacion de referencias de tiempo periodicas

#define TM_PER_B_ACTIVO		0x01U
#define TM_PER_B_TC			0x02U
#define TM_MED_B_ACTIVO		0X01U
#define TM_MED_B_OVERFLOW	0X02U

typedef struct
	{
	Tm_Contador	contador,
				periodo;
	unsigned char banderas;
	}Tm_Periodico;


// Tipo para generacion de timeouts
typedef Tm_Contador Tm_Timeout;

/* Rutina que verifica y actualiza el timer en hardware: el parametro indica si 
     el timer debe atenderse (cuando lo requiera). Si el timer completo un conteo 
     retorna un valor diferente de 0 y si no fue asi retorna 0. */
typedef char Tm_Atender_timer (char atienda);

/* Estructura de control del timer */
typedef struct 
	{
	Tm_Periodico *pp;
	Tm_Num max_p;
	Tm_Timeout *tp;
	Tm_Num max_t;
	Tm_Atender_timer *r_atencion;
	}Tm_Control;

/* ----------------------- Rutinas ------------------------ */
/* Configura y da condicion inicial a la estructura de control del timer */
void Tm_Defina_control (Tm_Control *ctp, 
						Tm_Periodico *t_periodico,Tm_Num l_periodico,
                        Tm_Timeout *t_timeout, Tm_Num l_timeout);

/* Rutina que revisa el timer en hardware e implementa la funcionalidad de los
   contadores. */
void Tm_Procese_tiempo (Tm_Control *ctp);
						
/* Rutina para dar condicion inicial y empezar a utilizar un contador periodico */   
void Tm_Inicie_periodico (Tm_Control *ctp, Tm_Num num, Tm_Contador periodo);

/* Rutina para chequear si se completo un ciclo de conteo de un contador periodico */
char Tm_Hubo_periodico (const Tm_Control *ctp, Tm_Num num);

/* Rutina para bajar la bandera de fin de conteo. */
void Tm_Baje_periodico (Tm_Control *ctp, Tm_Num num);

/* Rutina para dejar de utilizar (inactivar) el contador. */
void Tm_Termine_periodico (Tm_Control *ctp, Tm_Num num);

/* Rutina para dar valor inicial a un contador de timeout. Para inactivar el 
   contador simplemente inicielo en 0. */
void Tm_Inicie_timeout (Tm_Control *ctp, Tm_Num num, Tm_Contador tiempo);

/* Rutina para ver si hubo timeout (esta en 0). */
char Tm_Hubo_timeout (const Tm_Control *ctp, Tm_Num num);

void Tiempo_Init(void);

char Tiempo_Atender (char atienda);

#endif
