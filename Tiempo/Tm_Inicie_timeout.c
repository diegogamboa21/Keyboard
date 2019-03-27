
#include "Tiempo.h"

void Tm_Inicie_timeout (Tm_Control *ctp, 
								Tm_Num num, 
								Tm_Contador tiempo)
	{
	ctp->tp[num] = tiempo;
	}
