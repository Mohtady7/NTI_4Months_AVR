/*
 * SSD.h
 *
 * Created: 10/20/2023 7:04:41 PM
 *  Author: NEG
 */ 


#ifndef SSD_H_
#define SSD_H_
#include "DIO_Private.h"
#include "Std_Types.h"
#define DECODER_PORT PORTB_REG

#define DECODER_PIN1 DIO_ChannelB0
#define DECODER_PIN2 DIO_ChannelB1
#define DECODER_PIN3 DIO_ChannelB2
#define DECODER_PIN4 DIO_ChannelB4

#define SSD_DIGIT1 DIO_ChannelA3
#define SSD_DIGIT2 DIO_ChannelA2
#define SSD_DIGIT3 DIO_ChannelB5
#define SSD_DIGIT4 DIO_ChannelB6

void SSD_init();
void SSD_Display(uint16 Num);




#endif /* SSD_H_ */