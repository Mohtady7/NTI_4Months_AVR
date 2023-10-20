/*
 * SSD.c
 *
 * Created: 10/20/2023 7:36:25 PM
 *  Author: NEG
 */ 
#include "DIO_Interface.h"
#include "Std_Types.h"
#include "SSD.h"
void SSD_init()
{
	// setting the direction registers of the decoder pins to output
		Dio_VidSetPinDirection(DIO_ChannelB0);
		Dio_VidSetPinDirection(DIO_ChannelB1);
		Dio_VidSetPinDirection(DIO_ChannelB2);
		Dio_VidSetPinDirection(DIO_ChannelB4);
	
	//setting the digits pins direction to output
		Dio_VidSetPinDirection(DIO_ChannelA3);
		Dio_VidSetPinDirection(DIO_ChannelA2);
		Dio_VidSetPinDirection(DIO_ChannelB5);
		Dio_VidSetPinDirection(DIO_ChannelB6);
		
	// Set the common to 1
		Dio_VidSetClearPinValue(SSD_DIGIT1,STD_HIGH);
		Dio_VidSetClearPinValue(SSD_DIGIT2,STD_HIGH);
		Dio_VidSetClearPinValue(SSD_DIGIT3,STD_HIGH);
		Dio_VidSetClearPinValue(SSD_DIGIT4,STD_HIGH);
}
void SSD_Display(uint16 Num)
{
	switch(Num)
	{
		case 1 :
		Dio_VidSetClearPinValue(DECODER_PIN1,Output);
		Dio_VidSetClearPinValue(DECODER_PIN2,Output);
		Dio_VidSetClearPinValue(DECODER_PIN3,Output);
		Dio_VidSetClearPinValue(DECODER_PIN4,Output);
		break;
		case 2 :
		Dio_VidSetClearPinValue(DECODER_PIN1,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN2,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN3,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN4,STD_LOW);
		break;
		case 3 :
		Dio_VidSetClearPinValue(DECODER_PIN1,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN2,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN3,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN4,STD_LOW);
		break;
		case 4 :
		Dio_VidSetClearPinValue(DECODER_PIN1,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN2,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN3,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN4,STD_LOW);
		break;
		case 5 :
		Dio_VidSetClearPinValue(DECODER_PIN1,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN2,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN3,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN4,STD_LOW);
		break;
		case 6 :
		Dio_VidSetClearPinValue(DECODER_PIN1,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN2,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN3,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN4,STD_LOW);
		break;
		case 7 :
		Dio_VidSetClearPinValue(DECODER_PIN1,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN2,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN3,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN4,STD_LOW);
		break;
		case 8 :
		Dio_VidSetClearPinValue(DECODER_PIN1,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN2,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN3,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN4,STD_HIGH);
		case 9 :
		Dio_VidSetClearPinValue(DECODER_PIN1,STD_HIGH);
		Dio_VidSetClearPinValue(DECODER_PIN2,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN3,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN4,STD_HIGH);
		break;
		default:
		Dio_VidSetClearPinValue(DECODER_PIN1,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN2,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN3,STD_LOW);
		Dio_VidSetClearPinValue(DECODER_PIN4,STD_LOW);
		break;
	}
}

