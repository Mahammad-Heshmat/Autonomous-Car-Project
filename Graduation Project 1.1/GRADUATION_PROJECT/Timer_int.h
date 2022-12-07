/*******************************/
/* Author: MAHAMMAD HESHMAT    */
/* Date: 1-8-2022              */
/* Version: 1.0                */
/* Module: DIO                 */
/*******************************/

#ifndef _TIMER0_INT_H
#define _TIMER0_INT_H


void TIMER0_void_Init(void);

void TIMER0_void_SetTimerReg(u8 Copy_u8Val);

void TIMER0_void_SetCompareVal(u8 Copy_u8Val);

void TIMER0_void_EnableOVInt(void);

void TIMER0_void_DisableOVInt(void);

void TIMER0_void_EnableCTCInt(void);

void TIMER0_void_DisableCTCInt(void);

void TIMER0_void_SetOVCallBack(void (*Copy_ptr) (void) );

void TIMER0_void_SetCTCCallBack(void (*Copy_ptr) (void) );


#endif