
#include "tiempo.h"

void Tm_Procese_tiempo (Tm_Control *ctp)
	{
	Tm_Periodico *pp;
	Tm_Timeout *tp;
	Tm_Num num;
	
	if ( !Tiempo_Atender (SI) )
		return;
	
	for (pp = ctp->pp, num = ctp->max_p;
		  num;
		  ++pp, --num)	//PERIODOS
		if (pp->banderas & TM_PER_B_ACTIVO)
			{
			--(pp->contador);
			if ( !(pp->contador) )
				{
				pp->contador = pp->periodo;
				pp->banderas |= TM_PER_B_TC;
				};
			};
	

	for (tp = ctp->tp, num = ctp->max_t; 
        num > 0; --num, ++tp) //MEDICION TIEMPO FIJO
      if (*tp)
		   --(*tp);
	};
