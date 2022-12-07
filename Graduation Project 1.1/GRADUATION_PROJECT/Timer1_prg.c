/************************************************/
/* Title       : Timer1                         */
/* Author      : Assem Khalil                   */
/* Release     : 1.0                            */
/* Last Update : 17/11/2022                     */
/************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "Timer1_int.h"
#include "Timer1_priv.h"
#include "Timer1_config.h"


void TIMER1_void_Init(void)
{
	
	/*Waveform generation mode: NORMAL*/
	CLEAR_BIT(TCCR1A,TCCR1A_WGM10);
	CLEAR_BIT(TCCR1A,TCCR1A_WGM11);
	CLEAR_BIT(TCCR1B,TCCR1B_WGM12);
	CLEAR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* Clear Timer counter */
	TCNT1 = 0;			
	
	/* Setting for capture rising edge*/
	SET_BIT(TCCR1B,TCCR1B_ICES1);
	/* prescaler : NO Prescaling*/
	SET_BIT(TCCR1B,TCCR1B_CS10);
	CLEAR_BIT(TCCR1B,TCCR1B_CS11);
	CLEAR_BIT(TCCR1B,TCCR1B_CS12);
	
	/* Clear ICP flag (Input Capture flag) */
	CLEAR_BIT(TIFR,TIFR_ICF1);
	
	/* Clear Timer Overflow flag */
	CLEAR_BIT(TIFR,TIFR_TOV1);
			
	
	
}

void TIMER1_voidOvInt(void)
{
	SET_BIT(TIMSK,TIMSK_TOIE1);
}

