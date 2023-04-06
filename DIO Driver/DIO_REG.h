/***************************************
*
* Module: DIO REGISTERS
*
* File Name: DIO_REG.h
*
* Description: DIO REGISTERS for Atmega32
*
* Author: Khaled Shaaban
*
********************************************/

#ifndef  DIO_REG_H
#define  DIO_REG_H



/* PORTA REGISTERS*/

#define PORTA     *((volatile uint8*)0X3B)
#define DDRA      *((volatile uint8*)0X3A)
#define PINA      *((volatile uint8*)0X39)
/***************************************************/
/* PORTB REGISTERS*/

#define PORTB     *((volatile uint8*)0X38)
#define DDRB      *((volatile uint8*)0X37)
#define PINB      *((volatile uint8*)0X36)
/*****************************************************/
/* PORTC REGISTERS*/

#define PORTC     *((volatile uint8*)0X35)
#define DDRC      *((volatile uint8*)0X34)
#define PINC      *((volatile uint8*)0X33)
/*****************************************************/
/* PORTD REGISTERS*/

#define PORTD     *((volatile uint8*)0X32)
#define DDRD      *((volatile uint8*)0X31)
#define PIND      *((volatile uint8*)0X30)
/*****************************************************/

#endif   /*DIO_REG_H*/
