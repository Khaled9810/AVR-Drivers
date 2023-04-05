/***************************************
*
* Module: DIO_CFG
*
* File Name: DIO_CFG.h
*
* Description: configurations for ATmega32
*
* Author: Khlaed Shaaban
*
********************************************/

#ifndef  DIO_CFG_H
#define  DIO_CFG_H


#define HIGH        1U
#define LOW         0U

#define PORT_HIGH  0XFF
#define PORT_LOW   0X00


typedef enum {

port_A,
Port_B,
port_C,
Port_D,

}ports;

typedef enum {
pin_0,
pin_1,
pin_2,
pin_3,
pin_4,
pin_5,
pin_6,
pin_7

}pins;

typedef enum{
low,
high
}pins_value;

typedef enum{
input,
output
}pins_direction;



#endif  /*DIO_CFG_H*/
