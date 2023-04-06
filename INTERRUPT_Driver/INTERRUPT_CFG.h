/***************************************
*
* Module: INTERRUPT 
*
* File Name: INTERRUPT_CFG.h
*
* Description: INTERRUPT configurations for Atmega32
*
* Author: Khaled Shaaban
*
********************************************/

#ifndef INTERRUPT_CFG_H_
#define INTERRUPT_CFG_H_

#define   INT2_FALLING_EDGE  0
#define   INT2_RISING_EDGE  1



typedef enum{
	I_bit=7
}sreg_bits;


typedef enum{
	mcucr_isc00,
	mcucr_isc01,
	mcucr_isc10,
	mcucr_isc11,
}mcucr_bits;


typedef enum{
	mcusr_isc2=6
}mcusr_bits;



typedef enum{
	gicr_int2=5,
	gicr_int0,
	gicr_int1
}gicr_bits;


typedef enum{
	gifr_intf2=5,
	gifr_intf0,
	gifr_intf1
}gifr_bits;


typedef enum{
	low_level,
	on_change,
	falling_edge,
	rising_edge
}sense_level;



#endif /* INTERRUPT_CFG_H_ */