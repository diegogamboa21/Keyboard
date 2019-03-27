

#include "tiempo.h"

void Tm_Termine_periodico (Tm_Control *ctp,
                           Tm_Num num)
   {
	(ctp->pp + num)->banderas &= ~TM_PER_B_ACTIVO;
	}
