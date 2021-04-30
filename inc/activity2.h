/**
 * @file activity2.h
 * @author Swapnil Jakhi
 * @brief Header file to define pin configuration
 * @version 0.1
 * @date 2021-04-28
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
/**
* @brief Configures the mux and enable pin to logic 1 in ADC register
*/
void InitADC();
/** 
* @brief Returns the 16 bit ADC value which is in form of ADCH & ADCL at a channel which is taken as an input
*/
uint16_t ReadADC(uint8_t ch);
/**
* @brief Initialize a temporary variable and calls ReadADC function with given channel value
*/
int activity2();
/**
* @brief unsigned volatile 16 bit integer which is the value of ADC
*/
uint16_t volatile ADCregister;
/**
* @brief macro to define ADCregister as a decimal addition of ADCL and ADCH
*/
#define  ADCregister  ADCL+(ADCH*256)
#endif // ACTIVITY2_H_INCLUDED
