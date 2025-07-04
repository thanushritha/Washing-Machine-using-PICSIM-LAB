/* 
 * File:   buzzer.h
 * Author: thanu
 *
 * Created on 19 June, 2025, 10:36 PM
 */

#ifndef MAIN_H
#define	MAIN_H
#define _XTAL_FREQ  2000000
#define BUZZER         RC1
#define BUZZER_DDR     TRISC1

#define ON    1
#define OFF   0

static void init_config_buzzer(void);
void buzzer_on_and_off(void);

#endif	/* MAIN_H */