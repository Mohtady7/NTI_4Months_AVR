/*
 * Std_Types.h
 *
 * Created: 10/20/2023 10:01:15 AM
 *  Author: NEG
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_

// 8 bits
typedef unsigned char uint8;
typedef signed char sint8;
typedef volatile unsigned char vuint8;
typedef volatile signed char vsint8;

// 16 bits
typedef unsigned short int uint16;
typedef signed short int sint16;
typedef volatile unsigned short int vuint16;
typedef volatile signed short int vsint16;

//32 bits
typedef unsigned long int uint32;
typedef signed long int sint32;
typedef volatile unsigned long int vuint32;
typedef volatile signed long int vsint32;

//64 bits
typedef unsigned long long int uint64;
typedef signed long long int sint64;
typedef volatile long long int vuint64;
typedef volatile long long int vsint64;

typedef enum 
{
	STD_LOW = 0,
	STD_HIGH	
}STD_Levels_t;

typedef enum
{
	//PORTA
	DIO_ChannelA0,
	DIO_ChannelA1,
	DIO_ChannelA2,
	DIO_ChannelA3,
	DIO_ChannelA4,
	DIO_ChannelA5,
	DIO_ChannelA6,
	DIO_ChannelA7,
	
	//PORTB
	DIO_ChannelB0,
	DIO_ChannelB1,
	DIO_ChannelB2,
	DIO_ChannelB3,
	DIO_ChannelB4,
	DIO_ChannelB5,
	DIO_ChannelB6,
	DIO_ChannelB7,

	//PORTC
	DIO_ChannelC0,
	DIO_ChannelC1,
	DIO_ChannelC2,
	DIO_ChannelC3,
	DIO_ChannelC4,
	DIO_ChannelC5,
	DIO_ChannelC6,
	DIO_ChannelC7,
	
	//PORTD
	DIO_ChannelD0,
	DIO_ChannelD1,
	DIO_ChannelD2,
	DIO_ChannelD3,
	DIO_ChannelD4,
	DIO_ChannelD5,
	DIO_ChannelD6,
	DIO_ChannelD7

	}DIO_ChannelsTypes_t;

typedef enum
{
	Input =0,
	Output
}DIO_ChannelDirectionsTypes_t;

typedef enum
{
	DIO_PortA = 0,
	DIO_PortB,
	DIO_PortC,
	DIO_PortD
	
}DIO_PortTypes_t;


#endif /* STD_TYPES_H_ */