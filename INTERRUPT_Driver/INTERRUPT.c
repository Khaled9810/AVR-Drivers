/***************************************
*
* Module: INTERRUPT 
*
* File Name: INTERRUPT.C
*
* Description: INTERRUPT source code for Atmega32
*
* Author: Khaled Shaaban
*
*
*******************************************/
#include "INTERRUPT.h"


 /******************************************************************************
 *
 * Function Name: GIE_enable
 *
 * Description:  Enable general interrupt
 *
 * parameters(in): - none
 *
 * parameters(out): -none
 *
 * Return type: void
 *
 *******************************************************************************/
void GIE_enable(void){
   SET_BIT(SREG,I_bit);
}


/******************************************************************************
 *
 * Function Name: GIE_disable
 *
 * Description:  Disable general interrupt
 *
 * parameters(in): - none
 *
 * parameters(out): -none
 *
 * Return type: void
 *
 *******************************************************************************/
void GIE_disable(void){
   CLEAR_BIT(SREG,I_bit);
}



/******************************************************************************
 *
 * Function Name: INT0_int
 *
 * Description:  initialization of interrupt 0
 *
 * parameters(in): - Interrupt_Sense
 *
 * parameters(out): -none
 *
 * Return type: void
 *
 *******************************************************************************/
void INT0_init(uint8 Interrupt_Sense){
	
	/*enable int0 */
	SET_BIT(GICR,gicr_int0);
	
	/* determine sense level*/
	if(Interrupt_Sense==low_level){
		CLEAR_BIT(MCUCR,mcucr_isc00);
		CLEAR_BIT(MCUCR,mcucr_isc01);	
	}
	else if(Interrupt_Sense==on_change){
		SET_BIT(MCUCR,mcucr_isc00);
		CLEAR_BIT(MCUCR,mcucr_isc01);
	}
	else if(Interrupt_Sense==falling_edge){
		CLEAR_BIT(MCUCR,mcucr_isc00);
		SET_BIT(MCUCR,mcucr_isc01);
	}
	else if(Interrupt_Sense==rising_edge){
		SET_BIT(MCUCR,mcucr_isc00);
		SET_BIT(MCUCR,mcucr_isc01);
	}
	
}

/******************************************************************************
 *
 * Function Name: INT1_int
 *
 * Description:  initialization of interrupt 1
 *
 * parameters(in): - Interrupt_Sense
 *
 * parameters(out): -none
 *
 * Return type: void
 *
 *******************************************************************************/
void INT1_init(uint8 Interrupt_Sense){
	
	/*enable int1 */
	SET_BIT(GICR,gicr_int1);
	
	/* determine sense level*/
	if(Interrupt_Sense==low_level){
		CLEAR_BIT(MCUCR,mcucr_isc10);
		CLEAR_BIT(MCUCR,mcucr_isc11);	
	}
	else if(Interrupt_Sense==on_change){
		SET_BIT(MCUCR,mcucr_isc10);
		CLEAR_BIT(MCUCR,mcucr_isc11);
	}
	else if(Interrupt_Sense==falling_edge){
		CLEAR_BIT(MCUCR,mcucr_isc10);
		SET_BIT(MCUCR,mcucr_isc11);
	}
	else if(Interrupt_Sense==rising_edge){
		SET_BIT(MCUCR,mcucr_isc10);
		SET_BIT(MCUCR,mcucr_isc11);
	}
	
}

/******************************************************************************
*
* Function Name: INT1_int
*
* Description:  initialization of interrupt 1
*
* parameters(in): - Interrupt_Sense
*
* parameters(out): -none
*
* Return type: void
*
*******************************************************************************/
void INT2_init(uint8 Interrupt_Sense){
	
	
	/*enable int1 */
	SET_BIT(GICR,gicr_int2);
	
	/* determine sense level*/
	if(Interrupt_Sense==INT2_FALLING_EDGE){
		CLEAR_BIT(MCUSR,mcusr_isc2);
	}
	else{
		SET_BIT(MCUSR,mcusr_isc2);
		
	}
	
}


/******************************************************************************
*
* Function Name: INT0_CallBack
*
* Description:  addressing int0 in vector table  
*
* parameters(in): - pointer to function
*
* parameters(out): -none
*
* Return type: void
*
*******************************************************************************/
void (*INT0_ISR)(void)=NULL;

void INT0_CallBack(void(*func)(void)){
	if(func!=NULL){
		INT0_ISR=func;
	}
	
}

void __vector_1(void){
	INT0_ISR();
}



/******************************************************************************
*
* Function Name: INT1_CallBack
*
* Description:  addressing int1 in vector table
*
* parameters(in): - pointer to function
*
* parameters(out): -none
*
* Return type: void
*
*******************************************************************************/
void (*INT1_ISR)(void)=NULL;
void INT1_CallBack(void(*func)(void)){
	if(func!=NULL){
		INT1_ISR=func;
	}
	
}

void __vector_2(void){
	INT1_ISR();
}



/******************************************************************************
*
* Function Name: INT2_CallBack
*
* Description:  addressing int2 in vector table
*
* parameters(in): - pointer to function
*
* parameters(out): -none
*
* Return type: void
*
*******************************************************************************/
void (*INT2_ISR)(void)=NULL;

void INT2_CallBack(void(*func)(void)){
	if(func!=NULL){
		INT2_ISR=func;
	}
	
}

void __vector_3(void){
	INT2_ISR();
}