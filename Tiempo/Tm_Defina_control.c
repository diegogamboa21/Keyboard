
#include "tiempo.h"

void Tm_Defina_control (Tm_Control *ctp, 
							Tm_Periodico *t_periodico,
						Tm_Num l_periodico,
                        	Tm_Timeout *t_timeout, 
                        Tm_Num l_timeout)
{
	Tm_Periodico *pp;
	Tm_Timeout *tp;
	Tm_Num num;
	
	// Condicion inicial de la tabla de contadores periodicos: todos inactivos
	for (pp = t_periodico, num = l_periodico;
		  num;
		  ++pp, --num)
		pp->banderas = 0;
	ctp->pp = t_periodico;
	ctp->max_p = l_periodico;

   // Condicion inicial de la tabla de contadores de timeout: todos inactivos
	for (tp = t_timeout, num = l_timeout;
		  num;
		  ++tp, --num)
		*tp = 0;
	ctp->tp = t_timeout;
	ctp->max_t = l_timeout;

	Tiempo_Init();
	
}
