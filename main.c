/*
 * smartGreenSmartHouse.c
 *
 * Created: 11/4/2020 6:35:56 PM
 * Author : mmate
 */ 


#include <stdio.h>
#include <stdio_driver.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


int main(void)
{
	stdio_create(0);
	sei();
	
	puts("Program Started");
	
	uint16_t counter = 0;
	
    /* Replace with your application code */
    while (1) 
    {
		printf("The counter value: %05d and in hex: %04X\n", counter,counter);
		counter++;
		
		if (stdio_inputIsWaiting()) {
			printf("###>%c\n", getchar());
    }
	_delay_ms(500);
}

