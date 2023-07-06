/*
 * LEDBlinking.c
 *
 *  Created on: Jul 6, 2023
 *      Author: MrHendy
 */
#include <util/delay.h>
#include "BITMATH.h"
typedef unsigned int u8;
#define PORTA *((u8 *)0x3b)
#define DDRA *((u8 *)0x3a)
#define PINA *((volatile u8 *)0x39)

int main(void)
{

	DDRA = 0xff;
	PORTA =0x00;
    while (1)
    {
		BIT_SET(PORTA,0);
		_delay_ms(1000);
		BIT_CLEAR(PORTA,0);
		_delay_ms(1000);
    }
}

