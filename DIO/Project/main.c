/*
 * main.c
 *
 * Created: 10/20/2023 10:00:11 AM
 *  Author: NEG
 */ 


#include "DIO_Interface.h"
#include <util/delay.h>
#define F_CPU 16000000
int main(void)
{
	void Dio_VidSetPinDirection(DIO_ChannelsTypes_t DIO_ChannelA4);
	void Dio_VidSetPinDirection(DIO_ChannelsTypes_t DIO_ChannelA5);
	void Dio_VidSetPinDirection(DIO_ChannelsTypes_t DIO_ChannelA6);
	void Dio_VidSetPinDirection(DIO_ChannelsTypes_t DIO_ChannelB7);

    while(1)
    {
	Dio_VidSetPinValue(DIO_ChannelA4);
	_delay_ms(2000);
    Dio_VidTogglePin(DIO_ChannelA5);
	 //_delay_ms(2000);
    }
}