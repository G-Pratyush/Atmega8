/*
 * GccApplication1.c
 *
 * Created: 07-08-2021 19:09:33
 * Author : Pratyush
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD |= (1<<PD0 | 1<<PD1 | 1<<PD2 | 1<< PD3);
	DDRC |= (1<<PC6 | 1<<PC1 | 1<<PC0 | 1<< PC5);
    /* Replace with your application code */
    while (1) 
    {
		PORTC &= 0;
		PORTD &= 0;
		PORTC |= 1<<PC6;
		_delay_ms(1000);
		PORTC &= 0;
		PORTD |= 1<<PD0;
		_delay_ms(1000);
		PORTD &= 0;
		PORTD |= 1<<PD1;
		_delay_ms(1000);
		PORTD &= 0;
		PORTD |= 1<<PD2;
		_delay_ms(1000);
		PORTD &= 0;
		PORTD |= 1<<PD3;
		_delay_ms(1000);
		PORTD &= 0;
		PORTC |= 1<<PC0;
		_delay_ms(1000);
		PORTC &= 0;
		PORTC |= 1<<PC1;
		_delay_ms(1000);
		PORTC &= 0;
		PORTC |= 1<<PD5;
		_delay_ms(1000);

    }
}

