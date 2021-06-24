/*
 * pin.h
 *
 *  Created on: 18 jun. 2021
 *      Author: Dra Escudero Rocio I
 */

#ifndef INCLUDE_PIN_H_
#define INCLUDE_PIN_H_
#include <stm32f1xx.h>
#include <stdint.h>
/* Pin (encabezado - .h)*/
typedef struct Pin{
	GPIO_TypeDef *gpio;
	uint16_t pin;
}Pin;
void Pin_init(Pin *self, GPIO_TypeDef *gpio, uint16_t pin);
int Pin_leer(Pin *self);
void Pin_escribir(Pin *self,int valor);



#endif /* INCLUDE_PIN_H_ */
