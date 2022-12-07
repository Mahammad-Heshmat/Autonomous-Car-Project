/************************************************/
/* Title       : Timer Private file             */
/* Author      : Khaled Mohsen                  */
/* Release     : 1.0                            */
/* Last Update : Aug 16, 2021                   */
/************************************************/


#ifndef _TIMER0_PRIV
#define _TIMER0_PRIV

#define TIMSK (*(volatile u8 * )0x59)
#define OCR0 (*(volatile u8 * )0x5C)
#define TCCR0 (*(volatile u8 * )0x53)
#define TCNT0 (*(volatile u8 * )0x52)
#define TIFR (*(volatile u8 * )0x58)



#define TIMER0_NORMAL 		1
#define TIMER0_CTC 			2
#define TIMER0_FAST_PWM 	3
#define TIMER0_PHASE_PWM 	4

#define TIMER0_DIV_BY_1			1
#define TIMER0_DIV_BY_8			5
#define TIMER0_DIV_BY_64		8
#define TIMER0_DIV_BY_256		10
#define TIMER0_DIV_BY_1024		15


#define TIMER0_NO_ACTION	 51
#define TIMER0_TOGGLE		 52
#define TIMER0_SET			 53
#define TIMER0_CLEAR		 54
#define TIMER0_INVERTED		 55
#define TIMER0_NON_INVERTED  56

#endif
