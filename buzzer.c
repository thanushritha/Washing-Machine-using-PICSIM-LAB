#include <xc.h>
#include "buzzer.h"
static void init_config_buzzer(void) 
{
    BUZZER_DDR=0;
    BUZZER=OFF;
}

void buzzer_on_and_off(void) 
{
    BUZZER=ON;
    __delay_ms(2000);
    BUZZER=OFF;
}
