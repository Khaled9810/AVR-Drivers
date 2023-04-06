/***************************************
*
* Module: INTERRUPT
*
* File Name: INTERRUPT.h
*
* Description: INTERRUPT Header file for Atmega32
*
* Author: Khaled Shaaban
*
********************************************/


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "DIO.h"
#include "INTERRUPT_CFG.h"
#include "INTERRUPT_REG.h"

/*************************
Functions prototypes
************************/

void GIE_enable(void);
void GIE_disable(void);

void INT0_init(uint8);
void INT1_init(uint8);
void INT2_init(uint8);


/*IN0 VECTOR TABLE FUNCTIONS */
void __vector_1 (void)__attribute__((signal));
void INT0_CallBack(void(*func)(void));



/*IN1 VECTOR TABLE FUNCTIONS */
void __vector_2 (void)__attribute__((signal));
void INT1_CallBack(void(*func)(void));



/*IN0 VECTOR TABLE FUNCTIONS */
void __vector_3 (void)__attribute__((signal));
void INT2_CallBack(void(*func)(void));


#endif /* INTERRUPT_H_ */