/*
 * ADC.h
 *
 *  Created on: Dec 13, 2019
 *      Author: BAHAUDDIN
 */

#ifndef ADC_H_
#define ADC_H_

#include <avr/io.h>

uint8_t tLow, tHigh;
void ADC_init(void);
void ADC_read(uint8_t channel, uint8_t *high, uint8_t *low, uint16_t *full);


#endif /* ADC_H_ */
