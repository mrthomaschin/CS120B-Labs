/*
 * tchin006_lab2_part1.cpp
 *
 * Created: 1/10/2019 4:14:05 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	while(1)
	{
		if(PORTA == 0x02)
			PORTB = 0x01;
		else
			PORTB = 0x00;
	}
}

