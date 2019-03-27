#if !defined(VARIOS_H) 
	
#define VARIOS_H 	
/*************************************************************
*     				 	FUNCIONES VARIAS                     *
*									 						 *
*  Nombre Archivo: Varios.h         						 *
*  Tipo: Source File                						 *
**************************************************************/

/*  ---------------------- CONSTANTES  -------------------- */

# define SI 				1
# define NO 				0

# define BIT_1				0X1
# define BIT_2				0X2
# define BIT_3				0X4
# define BIT_4				0X8
# define BIT_5				0X10
# define BIT_6				0X20
# define BIT_7				0X40
# define BIT_8				0X80
# define BIT_9				0X100
# define BIT_10				0X200
# define BIT_11				0X400
# define BIT_12				0X800
# define BIT_13				0X1000
# define BIT_14				0X2000
# define BIT_15				0X4000
# define BIT_16				0X8000


/*  ---------------------  TIPO DE DATOS ----------------- */



/*  ---------------------- RUTINAS  ---------------------- */


// Función que Baja banderas

#define BAJAR_BANDERA(banderas, mascara) (banderas &= ~mascara)
#define SUBIR_BANDERA(banderas, mascara) (banderas |= mascara)

# endif
