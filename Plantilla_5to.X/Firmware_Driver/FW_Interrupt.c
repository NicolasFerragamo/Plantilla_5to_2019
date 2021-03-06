/****************************************************************************************************
 *
 * \file		FW_Interrupt.c
 * \brief		Contiene la funciOn de interrupcion
 * \date		23 de abril de 2019
 * \author		Nicolas Ferragamo nferragamo@est.frba.utn.edu.ar
 * \version     1.0.0
****************************************************************************************************/

/****************************************************************************************************
 *** INCLUDES
****************************************************************************************************/
#include <xc.h>
#include "EntradasDigitales.h"
#include "Tdatos.h"
#include "BaseBoard.h"
#include "Display7Segmentos.h"

/****************************************************************************************************
 *** DEFINES PRIVADOS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** MACROS PRIVADAS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** TIPOS DE DATOS PRIVADOS AL MODUL
****************************************************************************************************/

/****************************************************************************************************
 *** TABLAS PRIVADAS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** VARIABLES GLOBALES PUBLICAS
****************************************************************************************************/

/****************************************************************************************************
 *** VARIABLES GLOBALES PRIVADAS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** PROTOTIPO DE FUNCIONES PRIVADAS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** FUNCIONES PRIVADAS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** FUNCIONES GLOBALES AL MODULO
****************************************************************************************************/
/**
	\fn         __interrupt() myISR
	\brief      Funcion de interrupcion
 	\author     Nicolas Ferragamo
 	\date       23 de abril de 2019
 	\param      [in] void
 	\param      [out] void
	\return     void
*/

void __interrupt() myISR(void)
{
    /*Aqu� se ejecuta el c�digo de las interrupciones que hayan sucedido,
     *por defecto el XC8 entra siempre en esta interrupci�n denominada de
     *Alta prioridad
     */
    
    if(TMR0IF)
    {         //la interrupcion ocurre cada 1 segundo.
        TMR0IF = 0;       //se reinicia el timer y su interrupcion.
        TMR0H  = 0xFF;   /* en total aprox 1.0022ms  casi 1ms */
        TMR0L  = 209;    /* el timer contar� 47 fosc/4 * 256 = 12032 * 0,0833us */
        
        ED_Tic();
        DP_Tic();
        //Su codigo por favor!!   
        
    }
}