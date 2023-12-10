/***************************************************************************
wcm_power.h:  Include file for wcm_power.c

Written by:
	Daayim Asim, Computer Engineer Student.
	Work Term Student
	eSonar Inc.

Date:
	November 2022
****************************************************************************/


#ifndef ALTIMETER_POWER_H
#define ALTIMETER_POWER_H

void wcm_power_configure_wakeup_en(void);

void wcm_power_normal_power_mode(void);
void wcm_power_low_power_mode(void);

#endif	// ALTIMETER_POWER_H