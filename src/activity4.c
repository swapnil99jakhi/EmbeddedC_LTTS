#include<avr/io.h>
#include<util/delay.h>
#include"activity4.h"
#include"activity3.h"
#include"activity2.h"
void USARTInit(uint16_t ubrr_value){
   // setting baud rate using ubrr_value
UBRR0L = ubrr_value;
UBRR0H = (ubrr_value>>8)&0x00ff;
UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    //Enable Receiver and Transmitter 
UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}
char USARTReadChar(){
    //Wait until data is available
while(!(UCSR0A & (1<<RXC0))){
   // do nothing
}
return UDR0;
}
void USARTWriteChar(uint16_t data){
    //Wait untill the transmitter is ready

while(!(UCSR0A & (1<<UDRE0))){
    // do nothing
}
    //write the data to USART buffer
UDR0=data;
}
void activity4(uint16_t temp){
    USARTWriteChar(temp);
}

