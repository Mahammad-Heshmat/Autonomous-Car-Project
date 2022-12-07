/****************************************/
/*          Author: ASSEM KHALIL        */
/*          Date: 21/11/2022            */
/*          Version: 1.0                */
/*          Module: DIO                 */
/****************************************/
#include <avr/io.h>
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "DIO_config.h"
#include "DIO_private.h"



void DIO_voidInit(void)
{
	DDRA=DIO_U8_PORTA_DIR;
	DDRB=DIO_U8_PORTB_DIR;
	DDRC=DIO_U8_PORTC_DIR;
	DDRD=DIO_U8_PORTD_DIR;
}

void DIO_voidSetPinValue(u8 Copy_u8Pin , u8 Copy_u8Value)
{
	if(Copy_u8Pin <= DIO_U8_PORTA_LAST_PIN)
	{
		switch(Copy_u8Value)
		{
		   case DIO_U8_HIGH: SET_BIT(PORTA,Copy_u8Pin); break;
		   case DIO_U8_LOW: CLEAR_BIT(PORTA,Copy_u8Pin); break;
		}
	}
	else if(Copy_u8Pin <= DIO_U8_PORTB_LAST_PIN)
	{
		Copy_u8Pin = Copy_u8Pin - (DIO_U8_PORTA_LAST_PIN + DIO_U8_PORT_OFFSET);
		switch(Copy_u8Value)
		{
		   case DIO_U8_HIGH: SET_BIT(PORTB,Copy_u8Pin); break;
		   case DIO_U8_LOW: CLEAR_BIT(PORTB,Copy_u8Pin); break;
		}	
	}
	else if(Copy_u8Pin <= DIO_U8_PORTC_LAST_PIN)
	{
		Copy_u8Pin = Copy_u8Pin - (DIO_U8_PORTB_LAST_PIN + DIO_U8_PORT_OFFSET);
		switch(Copy_u8Value)
		{
		   case DIO_U8_HIGH: SET_BIT(PORTC,Copy_u8Pin); break;
		   case DIO_U8_LOW: CLEAR_BIT(PORTC,Copy_u8Pin); break;
		}			
	}
	else if(Copy_u8Pin <= DIO_U8_PORTD_LAST_PIN)
	{
		Copy_u8Pin = Copy_u8Pin - (DIO_U8_PORTC_LAST_PIN + DIO_U8_PORT_OFFSET);
		switch(Copy_u8Value)
		{
		   case DIO_U8_HIGH: SET_BIT(PORTD,Copy_u8Pin); break;
		   case DIO_U8_LOW: CLEAR_BIT(PORTD,Copy_u8Pin); break;
		}			
	}
	else
	{
		// error
	}
}
u8 DIO_u8GetPinValue(u8 Copy_u8Pin)
{
	u8 Local_u8Value = DIO_U8_HIGH;
	if(Copy_u8Pin <= DIO_U8_PORTA_LAST_PIN)
	{
		Local_u8Value = GET_BIT(PINA,Copy_u8Pin);
	}
	else if(Copy_u8Pin <= DIO_U8_PORTB_LAST_PIN)
	{
		Copy_u8Pin = Copy_u8Pin - (DIO_U8_PORTA_LAST_PIN + DIO_U8_PORT_OFFSET);
        Local_u8Value = GET_BIT(PINB,Copy_u8Pin); 
	}
	else if(Copy_u8Pin <= DIO_U8_PORTC_LAST_PIN)
	{
		Copy_u8Pin = Copy_u8Pin - (DIO_U8_PORTB_LAST_PIN + DIO_U8_PORT_OFFSET);
		Local_u8Value = GET_BIT(PINC,Copy_u8Pin);  			
	}
	else if(Copy_u8Pin <= DIO_U8_PORTD_LAST_PIN)
	{
		Copy_u8Pin = Copy_u8Pin - (DIO_U8_PORTC_LAST_PIN + DIO_U8_PORT_OFFSET);
        Local_u8Value = GET_BIT(PIND,Copy_u8Pin);			
	}
	else
	{
		// error
	}
	
	return Local_u8Value;
}
