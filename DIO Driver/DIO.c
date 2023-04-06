/******************************************************************************
 *
 * Module: DIO
 *
 * File Name: DIO.c
 *
 * Description: DIO source File
 *
 * Author: Khaled Shaaban
 *
 *******************************************************************************/

 #include"DIO.h"

 /******************************************************************************
 *
 * Function Name: DIO_SetPinDirection
 *
 * Description: Set the pin direction in the port
 *
 * parameters(in): -port    -pin number      -direction
 *
 * parameters(out): -none
 *
 * Return type: void
 *
 *******************************************************************************/
 void DIO_SetPinDirection(uint8 port,uint8 pin_num,uint8 direction){

    uint8 yourport;
switch(port){
  case port_A:
       yourport=DDRA;
        break;
  case Port_B:
        yourport=DDRB;
        break;
  case port_C:
        yourport=DDRC;
        break;
   case Port_D:
        yourport=DDRD;
        break;
}

if(direction==output){
    SET_BIT(yourport,pin_num);
}
else{
    CLEAR_BIT(yourport,pin_num);
}


 }

/******************************************************************************
 *
 * Function Name: DIO_SetPinValue
 *
 * Description: Set the value of a specific pin in the port
 *
 * parameters(in): -port    -pin number      -value
 *
 * parameters (out): -none
 *
 * Return type: void
 *
 *******************************************************************************/

 void DIO_SetPinValue(uint8 port,uint8 pin_num,uint8 value){

     uint8 yourport;

switch(port){
    case port_A:
        yourport=PORTA;
        break;
    case Port_B:
        yourport=PORTB;
        break;
    case port_C:
        yourport=PORTC;
        break;
    case Port_D:
        yourport=PORTD;
        break;
}

if(value==high){
    SET_BIT(yourport,pin_num);
}
else{
    CLEAR_BIT(yourport,pin_num);
}

 }

 /******************************************************************************
 *
 * Function Name: DIO_GetPinValue
 *
 * Description: Get the value of a specific pin in the port
 *
 * parameters (in): -port    -pin number
 *
 * parameters (out): -pin_value
 *
 * Return type: uint8
 *
 *******************************************************************************/

uint8 DIO_GetPinValue(uint8 port,uint8 pin_num){

 uint8 yourport;
 volatile uint8 pin_value;

switch(port){
    case port_A:
        yourport=PINA;
        break;
    case Port_B:
        yourport=PINB;
        break;
    case port_C:
        yourport=PINC;
        break;
    case Port_D:
        yourport=PIND;
        break;
}

if(BIT_IS_SET(yourport,pin_num)){
    pin_value=high;
}
else{
    pin_value=low;
}

return pin_value;
}


 /******************************************************************************
 *
 * Function Name: DIO_GetPinDirection
 *
 * Description: Get the direction of a specific pin in the port
 *
 * parameters (in): -port    -pin number
 *
 * parameters (out): -pin_direction
 *
 * Return type: uint8
 *
 *******************************************************************************/

uint8 DIO_GetPinDirection(uint8 port,uint8 pin_num){

 uint8 yourport;
 volatile uint8 pin_direction;

switch(port){
    case port_A:
        yourport=DDRA;
        break;
    case Port_B:
        yourport=DDRB;
        break;
    case port_C:
        yourport=DDRC;
        break;
    case Port_D:
        yourport=DDRD;
        break;
}

if(BIT_IS_SET(yourport,pin_num)){
    pin_direction=output;
}
else{
    pin_direction=input;
}

return pin_direction;
}



/******************************************************************************
 *
 * Function Name: DIO_SetPortValue
 *
 * Description: Set the value of ALL pins in the port
 *
 * parameters(in): -port      -value
 *
 * parameters (out): -none
 *
 * Return type: void
 *
 *******************************************************************************/

 void DIO_SetPortValue(uint8 port,uint8 value){

    uint8 yourport;

switch(port){
    case port_A:
        yourport=PORTA;
        break;
    case Port_B:
        yourport=PORTB;
        break;
    case port_C:
        yourport=PORTC;
        break;
    case Port_D:
        yourport=PORTD;
        break;
}

 yourport=value;


 }


 /******************************************************************************
 *
 * Function Name: DIO_SetPortDirection
 *
 * Description: Set the direction of ALL pins in the port
 *
 * parameters(in): -port      -direction
 *
 * parameters (out): -none
 *
 * Return type: void
 *
 *******************************************************************************/

 void DIO_SetPortDirection(uint8 port,uint8 direction){

    uint8 yourport;

switch(port){
    case port_A:
        yourport=DDRA;
        break;
    case Port_B:
        yourport=DDRB;
        break;
    case port_C:
        yourport=DDRC;
        break;
    case Port_D:
        yourport=DDRD;
        break;
}

 yourport=direction;


 }


 /******************************************************************************
 *
 * Function Name: DIO_GetPortValue
 *
 * Description: Get the value of All pins in the port
 *
 * parameters (in): -port    -ptr_value  (pointer to uint8 holding the value)
 *
 * parameters (out): -none
 *
 * Return type: void
 *
 *******************************************************************************/

void DIO_GetPortValue(uint8 port,volatile uint8* ptr_value){

 uint8 yourport;

switch(port){
    case port_A:
        yourport=PINA;
        break;
    case Port_B:
        yourport=PINB;
        break;
    case port_C:
        yourport=PINC;
        break;
    case Port_D:
        yourport=PIND;
        break;
}

 *ptr_value=yourport;

}
