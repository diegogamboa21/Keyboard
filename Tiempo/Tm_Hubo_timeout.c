
#include "tiempo.h"

char Tm_Hubo_timeout (const Tm_Control *ctp,  Tm_Num num)
	{
	return !(ctp->tp[num]);
	}
