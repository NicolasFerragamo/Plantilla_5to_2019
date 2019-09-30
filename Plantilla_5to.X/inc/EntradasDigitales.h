/**********************************************************************************************************
*                                               Entradas Digitales
*						Contiene las funciones para manejar entradas digitales
*
*						<Copyright>
*
*						<Copyright or distribution terms>
*
*
*********************************************************************************************************/

/*********************************************************************************************************
*                                                Entradas Digitales
*
* Filename	: EntradasDigitales.h
* Version	: 1.0.0					
* Programmer(s) : NEF
**********************************************************************************************************
*  Note(s): Para poder usar llamar a la fucni�n void ED_Debounce(void);
*   Inclu�r el archivo EntradasDigitaes.h en el archivo FW_Interrupt.c
*   Agregar la variable extern uint8_t ED_BufferEntradas en el archivo donde use ED_TECLA*
* 
*********************************************************************************************************/

/*********************************************************************************************************
 *
 * \file		EntradasDigitales.h
 * \brief		Contiene las funciones para manejar entradas digitales
 * \date		30 de septiembre de 2019
 * \author		Nicolas Ferragamo nferragamo@est.frba.utn.edu.ar
 * \version     1.0.0
*********************************************************************************************************/

/*********************************************************************************************************
 *** MODULO
*********************************************************************************************************/

#ifndef ENTRADAS_DIGITALES_H
#define ENTRADAS_DIGITALES_H

/*********************************************************************************************************
 *** INCLUDES GLOBALES
*********************************************************************************************************/

/*********************************************************************************************************
 *** DEFINES GLOBALES
*********************************************************************************************************/

#define		ED_ACEPTAR_ESTADO	10  //!< cantidad de veces que deve contar para validar el estado 
#define		ED_ENTRADAS         4   //!< cantidad de entradas 


#define		ED_TECLA0 ((ED_BufferEntradas) & 0x01)        //!< macros para las teclas de entrada 
#define		ED_TECLA1 ((ED_BufferEntradas >> 1) & 0x01)   //!< macros para las teclas de entrada 
#define		ED_TECLA2 ((ED_BufferEntradas >> 2) & 0x01)   //!< macros para las teclas de entrada 
#define		ED_TECLA3 ((ED_BufferEntradas >> 3) & 0x01)   //!< macros para las teclas de entrada 

/*********************************************************************************************************
 *** MACROS GLOBALES
*********************************************************************************************************/

/*********************************************************************************************************
 *** TIPO DE DATOS GLOBALES
*********************************************************************************************************/

/*********************************************************************************************************
 *** VARIABLES GLOBALES 
*********************************************************************************************************/

/*********************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
*********************************************************************************************************/

/**
	\fn         void ED_CuentaPulsos(void);
	\brief      Funcion primitiva de entradas digitales 
 	\author     Nicolas Ferragamo
 	\date       30 de septiembre de 2019
 	\param      [in] void
 	\param      [out] void
	\return     void
*/

void ED_CuentaPulsos(void);


/**
	\fn         void ED_Debounce(void)
	\brief      Funcion para el debounce de las entradas digitales 
 	\author     Nicolas Ferragamo
 	\date       30 de septiembre de 2019
 	\param      [in] void
 	\param      [out] void
	\return     void
*/
void ED_Debounce(void);

#endif /* ENTRADAS_DIGITALES_H */





