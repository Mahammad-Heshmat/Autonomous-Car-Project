/************************************************/
/* Title       : GIE Rrogram file               */
/* Author      : Khaled Mohsen                  */
/* Release     : 1.0                            */
/* Last Update : Aug 20, 2021                   */
/************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GIE_int.h"
#include "GIE_priv.h"
#include "GIE_config.h"


void GIE_voidEnable(void)
{
	//SET_BIT(SREG , SREG_I) ; // set I bit to enable the general interrupt enable
    __asm volatile ("SEI");/*Inline assembly syntax in GCC toolchain*/
}


void GIE_voidDisable(void)
{
	
	//CLEAR_BIT(SREG , SREG_I); // clear I bit to disable the general interrupt enable
    __asm volatile("CLI");/*Inline assembly syntax in GCC toolchain*/
}
