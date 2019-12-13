/*
 * smartsensor.h
 *
 *  Created on: Dec 13, 2019
 *      Author: BAHAUDDIN
 */

#ifndef SMARTSENSOR_H_
#define SMARTSENSOR_H_

#include "ADC.h"
#include "UART.h"
#include "SPI.h"
#include "stdint.h"

void SmartSensor(void);
/*--*/
void calibrate_S0(uint8_t *ThrsHigh, uint8_t *ThrsLow, uint16_t *ThrsFull);
void calibrate_S1(uint8_t *ThrsHigh, uint8_t *ThrsLow, uint16_t *ThrsFull);
void calibrate_S2(uint8_t *ThrsHigh, uint8_t *ThrsLow, uint16_t *ThrsFull);
uint8_t digitalRaw(uint16_t Thrs2, uint16_t Thrs1, uint16_t Thrs0);
uint8_t decision(uint8_t in_digitalRaw);

#endif /* SMARTSENSOR_H_ */
