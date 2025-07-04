/* 
 * File:   fan.h
 * Author: thanu
 *
 * Created on 19 June, 2025, 10:34 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#define _XTAL_FREQ  2000000
#define FAN         RC2
#define FAN_DDR     TRISC2

#define ON    1
#define OFF   0

void fan_on_and_off(void);
static void init_config_fan(void);

#endif	/* MAIN_H */

