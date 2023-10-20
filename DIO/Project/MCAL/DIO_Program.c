/*
 * DIO_Program.c
 *
 * Created: 10/20/2023 10:05:35 AM
 *  Author: NEG
 */ 


#include "DIO_Private.h"
#include "Std_Types.h"
#include "Bit_Math.h"

void Dio_VidSetPortDirection(DIO_PortTypes_t copy_uint8PortID, uint8 copy_uint8PortDir )
{
	switch(copy_uint8PortID)
	{
		case DIO_PortA : 
		SET_BYTE(DDRA_REG,copy_uint8PortDir);
		break;
		case DIO_PortB :
		SET_BYTE(DDRB_REG,copy_uint8PortDir);
		break;		
		case DIO_PortC :
		SET_BYTE(DDRC_REG,copy_uint8PortDir);
		break;
		case DIO_PortD :
		SET_BYTE(DDRD_REG,copy_uint8PortDir);
		break;
	}
}

void Dio_VidSetPortValue(DIO_PortTypes_t copy_uint8PortID, uint8 PortValue )
{
	switch(copy_uint8PortID)
	{
		case DIO_PortA :
		SET_BYTE(PORTA_REG,PortValue);
		break;
		case DIO_PortB :
		SET_BYTE(PORTA_REG,PortValue);
		break;
		case DIO_PortC :
		SET_BYTE(PORTA_REG,PortValue);
		break;
		case DIO_PortD :
		SET_BYTE(PORTA_REG,PortValue);
		break;
	}
}

void Dio_VidSetPinDirection(DIO_ChannelsTypes_t ChannelId)
{
	DIO_PortTypes_t Portx = ChannelId/8;
	DIO_ChannelsTypes_t Pinx = ChannelId%8;
	
	switch(Portx)
	{
		case DIO_PortA :
		SET_BIT(DDRA_REG,Pinx);
		break;
		case DIO_PortB :
		SET_BIT(DDRB_REG,Pinx);
		break;
		case DIO_PortC :
		SET_BIT(DDRC_REG,Pinx);
		break;
		case DIO_PortD :
		SET_BIT(DDRD_REG,Pinx);
		break;
	}
}
uint8 DIO_uint8GetPinValue( DIO_ChannelsTypes_t ChannelId)
{
	DIO_PortTypes_t Portx = ChannelId/8;
	DIO_ChannelsTypes_t Pinx = ChannelId%8;
	STD_Levels_t u8ValueRead=0;
	switch(Portx)
	{
		case DIO_PortA :
		u8ValueRead=READ_BIT(PINA_REG,Pinx);
		break;
		case DIO_PortB :
		u8ValueRead=READ_BIT(PINB_REG,Pinx);
		break;
		case DIO_PortC :
		u8ValueRead=READ_BIT(PINC_REG,Pinx);
		break;
		case DIO_PortD :
		u8ValueRead=READ_BIT(PIND_REG,Pinx);
		break;
	}
	return u8ValueRead;
	
}
void Dio_VidTogglePin(DIO_ChannelsTypes_t ChannelId)
{
	DIO_PortTypes_t Portx = ChannelId/8;
	DIO_ChannelsTypes_t Pinx = ChannelId%8;
	
	switch(Portx)
	{
		case DIO_PortA :
		TOGGLE_BIT(PORTA_REG,Pinx);
		break;
		case DIO_PortB :
		TOGGLE_BIT(PORTB_REG,Pinx);
		break;
		case DIO_PortC :
		TOGGLE_BIT(PORTC_REG,Pinx);
		break;
		case DIO_PortD :
		TOGGLE_BIT(PORTD_REG,Pinx);
		break;
	}

}
void Dio_VidSetPinValue(DIO_ChannelsTypes_t ChannelId)
{
	DIO_PortTypes_t Portx = ChannelId/8;
	DIO_ChannelsTypes_t Pinx = ChannelId%8;
	
	switch(Portx)
	{
		case DIO_PortA :
		SET_BIT(PORTA_REG,Pinx);
		break;
		case DIO_PortB :
		SET_BIT(PORTB_REG,Pinx);
		break;
		case DIO_PortC :
		SET_BIT(PORTC_REG,Pinx);
		break;
		case DIO_PortD :
		SET_BIT(PORTD_REG,Pinx);
		break;
	}
}