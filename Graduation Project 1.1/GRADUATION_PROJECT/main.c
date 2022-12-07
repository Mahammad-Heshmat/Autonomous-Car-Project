/*
 * GRADUATION_PROJECT.c
 *
 * Created: 04/12/2022 02:34:22 AM
 * Author : MAHAMMAD_HESHMAT
 */ 

#define F_CPU 16000000UL
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "UART_int.h"
#include "Timer1_int.h"
#include "Timer1_priv.h"
#include "Timer_int.h"
#include "LCD_int.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <string.h>
#include <stdlib.h>
#include "FUNCTIONS.h"
#include "GIE_int.h"

f64 Distance_1 , Distance_2 , L_DISTANCE , R_DISTANCE ;


u16 TimerOverflow = 0;
u32 count;
volatile f64 distance;


f64 ULTRASONIC_f64Distance(void);
void CHECK (void);

ISR(TIMER1_OVF_vect)
{
	TimerOverflow++;		/* Increment Timer Overflow count */
}


int main(void)
{
	DIO_voidInit();
	LCD_voidInit();
	TIMER0_void_Init();
	TIMER1_voidOvInt();  // Enable Timer1 overflow interrupts
	UART_voidInit();
	GIE_voidEnable();   // Enable global interrupt
	
	u8 resieve ;
	resieve = UART_u8ReceiveByte();
	
	LCD_voidClear();
	LCD_voidSetCursor( LCD_U8_LINE1 , 5 );
	LCD_voidSendString("MAGNAM");
	while(1)
	{
		if (resieve == 'a' )
		{
			GO_FORWARD();
			
			Distance_1 = ULTRASONIC_f64Distance();
			_delay_ms(100);
			Distance_2 = ULTRASONIC_f64Distance();
			
			if( (Distance_1 < 25.0000 ) && ( Distance_2 < 25.0000) )
			{
				STOP();
				CHECK();
			}
		}
	}
}


void CHECK(void)
{
	TIMER0_void_SetCompareVal(24);
	_delay_ms(100);
	TIMER0_void_SetCompareVal(13);
	L_DISTANCE = ULTRASONIC_f64Distance();
	_delay_ms(300);
	TIMER0_void_SetCompareVal(34);
	R_DISTANCE = ULTRASONIC_f64Distance();
	_delay_ms(300);
	TIMER0_void_SetCompareVal(24);
	
	if ((L_DISTANCE < 10.00 ) && (R_DISTANCE < 10.00))
	{ BACKWORD(); RETURN_180(); }
	else if (L_DISTANCE > R_DISTANCE)
	{ BACKWORD(); TURN_LEFT(); }
	else if (R_DISTANCE > L_DISTANCE)
	{ BACKWORD(); TURN_RIGHT(); }
}

f64 ULTRASONIC_f64Distance(void)
{
	
	DIO_voidSetPinValue(DIO_U8_PIN8,DIO_U8_HIGH);
	_delay_us(10);
	DIO_voidSetPinValue(DIO_U8_PIN8,DIO_U8_LOW);
	
	
	TCNT1 = 0;			/* Clear Timer counter */
	TCCR1B = 0x41;		/* Setting for capture rising edge, No pre-scaler*/
	TIFR = 1<<ICF1;		/* Clear ICP flag (Input Capture flag) */
	TIFR = 1<<TOV1;		/* Clear Timer Overflow flag */

	

	/*Calculate width of Echo by Input Capture (ICP) on PortD PD6 */
	
	while ((TIFR & (1 << ICF1)) == 0);	/* Wait for rising edge */
	TCNT1 = 0;			/* Clear Timer counter */
	TCCR1B = 0x01;		/* Setting for capture falling edge, No pre-scaler */
	TIFR = 1<<ICF1;		/* Clear ICP flag (Input Capture flag) */
	TIFR = 1<<TOV1;		/* Clear Timer Overflow flag */
	TimerOverflow = 0;	/* Clear Timer overflow count */

	while ((TIFR & (1 << ICF1)) == 0); /* Wait for falling edge */
	count = ICR1 + (65535 * TimerOverflow);	/* Take value of capture register */
	/* 16MHz Timer freq, sound speed =343 m/s, calculation mentioned in doc. */
	distance = (double)count / 932.944;
	_delay_ms(100);
	
	return distance;
	
}