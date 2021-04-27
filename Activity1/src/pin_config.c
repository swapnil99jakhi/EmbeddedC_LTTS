#include <avr/io.h>
#include <util/delay.h>
#include"../inc/pin_config.h"
void pin_config()
{
   // Direction of ports
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD2);
    DDRD&=~(1<<PD3);

    // PULL-UP +5V for push-buttons
    PORTD|=(1<<PD2);
    PORTD |=(1<<PD3);
}
