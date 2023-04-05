
/******************************************************************************
 *
 * Module: DIO
 *
 * File Name: DIO.h
 *
 * Description: DIO Header File
 *
 * Author: Khaled Shaaban
 *
 *******************************************************************************/

 #ifndef    DIO_H
 #define    DIO_H


#include"StdTypes.h"
#include"Common_Macros.h"
#include"DIO_CFG.h"
#include"DIO_REG.h"

/**************************
*
*Functions Prototypes
*
**************************/

void DIO_SetPinDirection(uint8 port,uint8 pin_num,uint8 direction);
void DIO_SetPinValue(uint8 port,uint8 pin_num,uint8 value);

uint8 DIO_GetPinValue(uint8 port,uint8 pin_num);
uint8 DIO_GetPinDirection(uint8 port,uint8 pin_num);


void DIO_SetPortValue(uint8 port,uint8 value);
void DIO_SetPortDirection(uint8 port,uint8 direction);
void DIO_GetPortValue(uint8 port,uint8* ptr_value);
void DIO_GetPortDirection(uint8 port,volatile uint8* ptr_value);




 #endif   /*DIO_H*/
