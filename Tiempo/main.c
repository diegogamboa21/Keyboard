#include <pic16f84a.h>
#include"..\Varios\Config_micro.h"
#include"Tiempo.h"
#include"..\Varios\Varios.h"

static Tm_Control control_timer;
static Tm_Periodico t_periodico[2];
static Tm_Timeout t_timeout[1];

int main() {
    unsigned char testigo1=0;
    unsigned char testigo2=0;
    TRISA=0X0;
    PORTA=0X0;
    Tm_Defina_control (&control_timer, t_periodico, 2, t_timeout, 1);
    Tm_Inicie_periodico (&control_timer, 0, 5);
    Tm_Inicie_periodico (&control_timer, 1, 13);
    Tm_Inicie_timeout (&control_timer, 0, 100);

    while(1)
	{
		if(Tm_Hubo_periodico (&control_timer, 0))
		{
			Tm_Baje_periodico (&control_timer, 0);
            if(testigo1)
            {
                PORTA=SUBIR_BANDERA(PORTA, BIT_4);
                testigo1=0;
            }else
            {
                testigo1=1;
                PORTA=BAJAR_BANDERA(PORTA, BIT_4);
            }
        }
        if(Tm_Hubo_periodico (&control_timer, 1))
		{
			Tm_Baje_periodico (&control_timer, 1);
            if(testigo2)
            {
                PORTA=SUBIR_BANDERA(PORTA, BIT_2);
                testigo2=0;
            }else
            {
                testigo2=1;
                PORTA=BAJAR_BANDERA(PORTA, BIT_2);
            }
        }
        if(Tm_Hubo_timeout (&control_timer, 0))
        {
            PORTA=SUBIR_BANDERA(PORTA, BIT_3);
        }
        if(Tiempo_Atender (NO))
		{
			Tm_Procese_tiempo (&control_timer);
		}
    }
    return 0;
}