#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
void USARTInit(uint16_t ubrr_value);
char USARTReadChar();
void USARTWriteChar( uint16_t data);
void activity4(uint16_t temperature);
#endif // ACTIVITY4_H_INCLUDED
