#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
/**
* @brief This function sets the baud rate with which the bits are to be transmitted to the serial monitor
*/
void USARTInit(uint16_t ubrr_value);
/**
* @brief This function reads the character value from the serial monitor and display it
*/
char USARTReadChar();
/**
* @brief This function writes the data into the serial monitor/ transmit the data value to the serial port and display it
*/
void USARTWriteChar( uint16_t data);
/**
* @brief This function takes input as an ideal temperature and call function USARTWriteChar to write that temperature into serial monitor and display it
*/
void activity4(uint16_t temp);
#endif // ACTIVITY4_H_INCLUDED
