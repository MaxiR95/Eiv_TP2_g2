/*
 * r595.h
 *
 *  Created on: 18 jun. 2021
 *      Author: Dra Escudero Rocio I
 */

#ifndef INCLUDE_R595_H_
#define INCLUDE_R595_H_
#include <pin.h>
#include <stdint.h>

/* R595 (encabezado - .h)*/
/**
 * Controlador para registro de desplazamiento 74HC595
 */
typedef struct R595{
	Pin *dato;
	Pin *reloj;
	Pin *cerrojo;
}R595;

/**
 * Inicializa el objeto R595
 * @param self puntero a struct R595 a inicializar
 * @param dato puntero a objeto Pin que controla el pin conectado
 *             a la entrada Data del 74HC595
 * @param reloj puntero a objeto Pin que controla el pin conectado
 *              a la entrada Clock del 74HC595
 * @param reloj puntero a objeto Pin que controla el pin conectado
 *              a la entrada Latch del 74HC595
 */
void R595_init(R595 *self,Pin *dato, Pin *reloj, Pin *cerrojo);
/**
 * Ingresa un byte en el registro de desplazamiento controlado por este objeto
 * @param self puntero a struct con el estado correctamente inicializado
 *             del objeto R595
 * @param byte byte a ingresar en el registro de desplazamiento
 */
void R595_ingresaByte(R595 *self,uint8_t byte);
/**
 * Actualiza las salidas del registro de desplazamiento controlado por este objeto
 * desde el estado interno (operación de latch)
 * @param self puntero a struct con el estado correctamente inicializado
 *             del objeto R595
 */
void R595_actualizaSalidas(R595 *self);


#endif /* INCLUDE_R595_H_ */
