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
void InitADC();
uint16_t ReadADC(uint8_t ch);
int activity2();
uint16_t volatile ADCregister;
#define  ADCregister  ADCL+(ADCH*256)
#endif // ACTIVITY2_H_INCLUDED
