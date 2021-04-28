#include <avr/io.h>
#include <util/delay.h>
#include"../inc/activity1.h"
    // Direction of ports
void activity1(){
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD2);
    DDRD&=~(1<<PD3);

    // PULL-UP +5V for push-buttons
    PORTD|=(1<<PD2);
    PORTD |=(1<<PD3);
    while(1)
    {   // Acts as an AND gate for the two switches
        if(!(PIND&(1<<PD2)) && !(PIND&(1<<PD3)))
        {
        // port B at logic 1
        PORTB|=(1<<PB0);
        _delay_ms(200);
        }
        else
        {   // port B at logic 0
            PORTB&=~(1<<PB0);
            _delay_ms(200);
        }
    }
}
