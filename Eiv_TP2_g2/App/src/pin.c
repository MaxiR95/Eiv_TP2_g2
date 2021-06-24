/*
 * pin.c

 *  Created on: 18 jun. 2021
 *      Author: Dra Escudero Rocio I
 */
#include <pin.h>

/*Pin (implementación - .c)*/
void Pin_init(Pin *self, GPIO_TypeDef *gpio, uint16_t pin)
{
	self->gpio=gpio;
	self->pin=pin;
}
int Pin_leer(Pin *self)
{
	return HAL_GPIO_ReadPin(self->gpio, self->pin);
}
void Pin_escribir(Pin *self,int valor)
{
	HAL_GPIO_WritePin(self->gpio, self->pin, valor);
}
/*----fin----*/

