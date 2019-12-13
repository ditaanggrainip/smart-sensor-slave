/*
 * decision.c
 *
 *  Created on: Dec 13, 2019
 *      Author: BAHAUDDIN
 */

#include "decision.h"

uint8_t decision(uint8_t in_digitalRaw){
	uint8_t result;
	if(in_digitalRaw == 0x01)
		result='R';
	if(in_digitalRaw == 0x04)
		result='L';
	if(in_digitalRaw == 0x02)
		result='I';
	if(in_digitalRaw == 0x07)
		result='+';
	if(in_digitalRaw == 0x05)
		result='T';

	return result;
}
