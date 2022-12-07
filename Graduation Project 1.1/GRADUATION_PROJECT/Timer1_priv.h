/************************************************/
/* Title       : Timer1                         */
/* Author      : Assem Khalil                   */
/* Release     : 1.0                            */
/* Last Update : 17/11/2022                     */
/************************************************/


#ifndef _TIMER1_PRIV
#define _TIMER1_PRIV

#define TCCR1A    *((volatile u8*)0x4F)  /*Timer1 control register A*/
#define TCCR1A_COM1A1   7                /*ChannelA compare match output mode bit1*/
#define TCCR1A_COM1A0   6                /*ChannelA compare match output mode bit0*/
#define TCCR1A_COM1B1   5                /*ChannelB compare match output mode bit1*/
#define TCCR1A_COM1B0   4                /*ChannelB compare match output mode bit0*/
#define TCCR1A_WGM11    1                /*Waveform generation mode bit 1*/
#define TCCR1A_WGM10    0                /*Waveform generation mode bit 0*/


#define TCCR1B    *((volatile u8*)0x4E) /*Timer1 control register B*/
#define TCCR1B_ICNC1    7               /*Input Capture Noise Canceler*/
#define TCCR1B_ICES1    6               /*Input Capture Edge Select*/
#define TCCR1B_WGM13    4               /*Waveform generation mode bit3*/
#define TCCR1B_WGM12    3               /*Waveform generation mode bit2*/
#define TCCR1B_CS12     2               /*Prescaler bit 2*/
#define TCCR1B_CS11     1               /*Prescaler bit 1*/
#define TCCR1B_CS10     0               /*Prescaler bit 0*/


#define TIFR      *((volatile u8 *)0x58)
#define TIFR_ICF1   5
#define TIFR_OCF1A  4
#define TIFR_OCF1B  3
#define TIFR_TOV1   2

#define OCR1A     *((volatile u16 *)0x4A) /*ChannelA Output Compare Match Register*/
#define OCR1B     *((volatile u16 *)0x48) /*ChannelB Output Compare Match Register*/
#define ICR1      *((volatile u16 *)0x46) /*Input Cupture Register*/
#define TCNT1     *((volatile u16 *)0x4C) /*Timer/Counter1 – Counter Register*/


#define TIMSK     *((volatile u16 *)0x39) /*Timer/Counter Interrupt Mask Register*/
#define TIMSK_TICIE1   5
#define TIMSK_OCIE1A   4
#define TIMSK_OCIE1B   3
#define TIMSK_TOIE1    2


#endif
