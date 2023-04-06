
/***************************************
*
* Module: INTERRUPT REGISTERS
*
* File Name: INTERRUPT_REG.h
*
* Description: INTERRUPT REGISTERS for Atmega32
*
* Author: Khaled Shaaban
*
********************************************/

#ifndef INTERRUPT_REG_H_
#define INTERRUPT_REG_H_


#define MCUCR       *((volatile uint8*)0X55)

#define MCUSR       *((volatile uint8*)0X54)

#define GICR        *((volatile uint8*)0X5B)

#define CIFR        *((volatile uint8*)0X5A)

#define SREG        *((volatile uint8*)0X5F)



#endif /* INTERRUPT_REG_H_ */