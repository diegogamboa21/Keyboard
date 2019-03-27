
#include "tiempo.h"

char Tm_Hubo_periodico (const Tm_Control *ctp,Tm_Num num)
{
	return ((ctp->pp + num)->banderas & TM_PER_B_TC);
}
