/*******************************/
/* Author: MAHAMMAD HESHMAT    */
/* Date: 1-8-2022              */
/* Version: 1.0                */
/* Module: DIO                 */
/*******************************/
#include <avr/io.h>
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "Timer_int.h"
#define F_CPU 16000000UL
#include <util/delay.h>
#include "FUNCTIONS.h"



void GO_FORWARD (void)
{
	/*DIO_voidSetPinValue( H_EN1 , LOW );
	DIO_voidSetPinValue( H_EN2 , LOW );
	_delay_ms(700);*/
	
	DIO_voidSetPinValue( H_A1 , HIGH );
	DIO_voidSetPinValue( H_A2 , LOW );
	DIO_voidSetPinValue( H_A3 , HIGH );
	DIO_voidSetPinValue( H_A4 , LOW );
	
	DIO_voidSetPinValue( H_EN1 , HIGH );
	DIO_voidSetPinValue( H_EN2 ,HIGH );	
}

void BACKWORD (void)
{
	DIO_voidSetPinValue( H_A1 , LOW );
	DIO_voidSetPinValue( H_A2 , HIGH );
	DIO_voidSetPinValue( H_A3 , LOW );
	DIO_voidSetPinValue( H_A4 , HIGH );
	
	DIO_voidSetPinValue( H_EN1 , HIGH );
	DIO_voidSetPinValue( H_EN2 ,HIGH );
	
	_delay_ms(300);	
	
	STOP();
}

void STOP (void)
{
	DIO_voidSetPinValue( H_EN1 , LOW );
	DIO_voidSetPinValue( H_EN2 , LOW );
		
	DIO_voidSetPinValue( H_A1 , LOW );
	DIO_voidSetPinValue( H_A2 , LOW );
	DIO_voidSetPinValue( H_A3 , LOW );
	DIO_voidSetPinValue( H_A4 , LOW);

}

void RETURN_180 (void)
{
	DIO_voidSetPinValue( H_EN1 , LOW );
	DIO_voidSetPinValue( H_EN2 , LOW );
	_delay_ms(700);
	
	DIO_voidSetPinValue( H_A1 , LOW );  // RIGHT MOTOR BACKWORD
	DIO_voidSetPinValue( H_A2 , HIGH ); // RIGHT MOTOR BACKWORD
	DIO_voidSetPinValue( H_A3 , HIGH ); // LEFT MOTOR FORWORD
	DIO_voidSetPinValue( H_A4 , LOW );	// LEFT MOTOR FORWORD
	
	DIO_voidSetPinValue( H_EN1 , HIGH );
	DIO_voidSetPinValue( H_EN2 , HIGH );
	_delay_ms(800);						//DESIRED TIME TO ROTATE 180 
	
	STOP ();                                      
}

void TURN_RIGHT (void)
{
	DIO_voidSetPinValue( H_EN1 , LOW );
	DIO_voidSetPinValue( H_EN2 , LOW );
	_delay_ms(300);
	
	DIO_voidSetPinValue( H_A1 , LOW );
	DIO_voidSetPinValue( H_A2 , LOW );
	DIO_voidSetPinValue( H_A3 , HIGH );
	DIO_voidSetPinValue( H_A4 , LOW );
	
	DIO_voidSetPinValue( H_EN1 , HIGH);
	DIO_voidSetPinValue( H_EN2 , HIGH);
	_delay_ms(800);
	STOP ();  
}

void TURN_LEFT (void)
{
	DIO_voidSetPinValue( H_EN1 , LOW );
	DIO_voidSetPinValue( H_EN2 , LOW );
	_delay_ms(300);
	
	DIO_voidSetPinValue( H_A1 , HIGH);
	DIO_voidSetPinValue( H_A2 , LOW );
	DIO_voidSetPinValue( H_A3 , LOW );
	DIO_voidSetPinValue( H_A4 , LOW );
	
	DIO_voidSetPinValue( H_EN1 , HIGH);
	DIO_voidSetPinValue( H_EN2 , HIGH);
	_delay_ms(800);
	STOP ();  
}

