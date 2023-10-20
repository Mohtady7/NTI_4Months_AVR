/*
 * Bit_Math.h
 *
 * Created: 10/20/2023 10:01:00 AM
 *  Author: NEG
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Reg,Bit) (Reg|=(1<<Bit))
#define CLEAR_BIT(Reg,Bit) (Reg&=~(1<<Bit))
#define TOGGLE_BIT(Reg,Bit) (Reg^=(1<<Bit))
#define READ_BIT(Reg,Bit) ((Reg>>Bit)&1) 
#define SET_BYTE(Byte,Value) Byte=Value



#endif /* BIT_MATH_H_ */