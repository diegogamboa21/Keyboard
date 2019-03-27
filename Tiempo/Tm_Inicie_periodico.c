
#include "tiempo.h"

void Tm_Inicie_periodico (Tm_Control *ctp, Tm_Num num, Tm_Contador periodo)
{
	Tm_Periodico *pp = ctp->pp + num;
	pp->banderas |= TM_PER_B_ACTIVO;
	pp->banderas &= ~TM_PER_B_TC;
	pp->contador = pp->periodo = periodo;
}
