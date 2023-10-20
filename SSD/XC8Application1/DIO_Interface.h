/*
 * DIO_Interface.h
 *
 * Created: 10/20/2023 10:03:46 AM
 *  Author: NEG
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "Std_Types.h"
#include "Bit_Math.h"

void Dio_VidSetPortDirection(DIO_PortTypes_t copy_uint8PortID, uint8 copy_uint8PortDir );
void Dio_VidSetPortValue(DIO_PortTypes_t copy_uint8PortID, uint8 PortValue );
void Dio_VidSetPinDirection(DIO_ChannelsTypes_t ChannelId);
uint8 DIO_uint8GetPinValue( DIO_ChannelsTypes_t ChannelId);
void Dio_VidTogglePin(DIO_ChannelsTypes_t ChannelId);
void Dio_VidSetPinValue(DIO_ChannelsTypes_t ChannelId);
void Dio_VidSetClearPinValue(DIO_ChannelsTypes_t ChannelId,STD_Levels_t level);





#endif /* DIO_INTERFACE_H_ */