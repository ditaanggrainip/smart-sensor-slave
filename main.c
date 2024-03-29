#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "ADC/ADC.h"
#include "SPI/SPI.h"
#include "UART/UART.h"
#include "smartsensor/smartsensor.h"

uint8_t low, high;

#define SW1 PB5
#define SW2 PB4
#define SW3 PH6
#define SW4 PH5

unsigned char buff;

int main(void){
	ADC_init();
	SPI_SlaveInit();
	USART_Init();
	DDRA = 0xFF;
	while(1){
		smartsensor();
//		_delay_ms(100);
	}
}
