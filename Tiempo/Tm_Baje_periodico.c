
#include "tiempo.h"

#include <pic16f84a.h>

void Tm_Baje_periodico (Tm_Control *ctp,Tm_Num num)
{
	(ctp->pp + num)->banderas &= ~TM_PER_B_TC;
}
