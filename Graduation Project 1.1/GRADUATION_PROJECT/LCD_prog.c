/****************************************/
/*          Author: Khaled Mohsen       */        
/*          Date: 20-8-2022             */
/*          Version: 1.0                */
/*          Module: LCD                 */
/****************************************/
#include <avr/io.h>
#include"STD_types.h"
#include"BIT_math.h"
#include"DIO_int.h"
#include"LCD_int.h"
#include"LCD_config.h"
#include"LCD_private.h"
#define F_CPU 16000000UL
#include <util/delay.h>
void LCD_voidInit(void)
{
	_delay_ms(35);
	LCD_voidSendCommand(0x33);
	_delay_ms(2);
	LCD_voidSendCommand(0x32);
	_delay_ms(2);
	LCD_voidSendCommand(0x28);
	_delay_ms(2);
	LCD_voidSendCommand(0x0c);
	_delay_ms(2);
	LCD_voidSendCommand(0x06);
	_delay_ms(2);
	LCD_voidSendCommand(0x01);
	_delay_ms(2);
}

#if LCD_U8_MODE == LCD_U8_8BIT
void LCD_voidSendData(u8 Copy_u8Data)
{
	DIO_voidSetPinValue(LCD_U8_RW , DIO_U8_LOW);
	DIO_voidSetPinValue(LCD_U8_RS , DIO_U8_HIGH);
	
	if(GET_BIT(Copy_u8Data , 0) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D0 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D0 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 1) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D1 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D1 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 2) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D2 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D2 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 3) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D3 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D3 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 4) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 5) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 6) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 7) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_HIGH);
	}
	
	DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_HIGH);
	_delay_ms(1);
	DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_LOW);
	_delay_ms(1);	
}
void LCD_voidSendCommand(u8 Copy_u8Data)
{
	DIO_voidSetPinValue(LCD_U8_RW , DIO_U8_LOW);
	DIO_voidSetPinValue(LCD_U8_RS , DIO_U8_LOW);
	
	if(GET_BIT(Copy_u8Data , 0) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D0 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D0 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 1) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D1 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D1 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 2) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D2 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D2 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 3) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D3 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D3 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 4) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 5) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 6) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 7) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_HIGH);
	}
	
	DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_HIGH);
	_delay_ms(1);
	DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_LOW);
	_delay_ms(1);
}

#elif LCD_U8_MODE == LCD_U8_4BIT
void LCD_voidSendData(u8 Copy_u8Data)
{
	DIO_voidSetPinValue(LCD_U8_RW , DIO_U8_LOW);
	DIO_voidSetPinValue(LCD_U8_RS , DIO_U8_HIGH);
	
    //PORTA = Copy_u8Data;
	if(GET_BIT(Copy_u8Data , 4) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 5) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 6) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_HIGH);
	}
	
	if(GET_BIT(Copy_u8Data , 7) == 0)
	{
		DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_HIGH);
	}
	
	DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_HIGH);
	_delay_ms(1);
	DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_LOW);
	_delay_ms(1);	
	
	//PORTA = (Copy_u8Data << 4);
		if(GET_BIT(Copy_u8Data , 0) == 0)
		{
			DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_LOW);
		}
		else
		{
			DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_HIGH);
		}
		
		if(GET_BIT(Copy_u8Data , 1) == 0)
		{
			DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_LOW);
		}
		else
		{
			DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_HIGH);
		}
		
		if(GET_BIT(Copy_u8Data , 2) == 0)
		{
			DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_LOW);
		}
		else
		{
			DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_HIGH);
		}
		
		if(GET_BIT(Copy_u8Data , 3) == 0)
		{
			DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_LOW);
		}
		else
		{
			DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_HIGH);
		}
		
	DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_HIGH);
	_delay_ms(1);
	DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_LOW);
	_delay_ms(1);
}
void LCD_voidSendCommand(u8 Copy_u8Data)
{
	DIO_voidSetPinValue(LCD_U8_RW , DIO_U8_LOW);
	DIO_voidSetPinValue(LCD_U8_RS , DIO_U8_LOW);
	
//PORTA = Copy_u8Data;
if(GET_BIT(Copy_u8Data , 4) == 0)
{
	DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_LOW);
}
else
{
	DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_HIGH);
}

if(GET_BIT(Copy_u8Data , 5) == 0)
{
	DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_LOW);
}
else
{
	DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_HIGH);
}

if(GET_BIT(Copy_u8Data , 6) == 0)
{
	DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_LOW);
}
else
{
	DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_HIGH);
}

if(GET_BIT(Copy_u8Data , 7) == 0)
{
	DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_LOW);
}
else
{
	DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_HIGH);
}

DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_HIGH);
_delay_ms(1);
DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_LOW);
_delay_ms(1);

if(GET_BIT(Copy_u8Data , 0) == 0)
{
	DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_LOW);
}
else
{
	DIO_voidSetPinValue(LCD_U8_D4 , DIO_U8_HIGH);
}

if(GET_BIT(Copy_u8Data , 1) == 0)
{
	DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_LOW);
}
else
{
	DIO_voidSetPinValue(LCD_U8_D5 , DIO_U8_HIGH);
}

if(GET_BIT(Copy_u8Data , 2) == 0)
{
	DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_LOW);
}
else
{
	DIO_voidSetPinValue(LCD_U8_D6 , DIO_U8_HIGH);
}

if(GET_BIT(Copy_u8Data , 3) == 0)
{
	DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_LOW);
}
else
{
	DIO_voidSetPinValue(LCD_U8_D7 , DIO_U8_HIGH);
}

//PORTA = (Copy_u8Data<<4);
DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_HIGH);
_delay_ms(1);
DIO_voidSetPinValue(LCD_U8_EN , DIO_U8_LOW);
_delay_ms(1);
}

#endif

void LCD_voidSendString(s8* String)
{
	u8 counter = 0; 
	while(String[counter] != '\0')
	{
		LCD_voidSendData(String[counter]);
		counter++;
	}
}

void LCD_voidSetCursor(u8 Copy_u8Line , u8 Copy_u8Column)
{
	u8 Local_u8Address = Copy_u8Line + Copy_u8Column;
	LCD_voidSendCommand(Local_u8Address);
}

void LCD_voidSendNumber(u16 Variable )
{	
	u16 arr[4];
	
	arr [3] = (Variable %10);
	arr [2] = ((Variable %100)-arr [3])/10;
	arr [1] =((Variable %1000)-arr [2])/100;
	arr [0] =((Variable %10000)-arr [1])/1000;
	
	for (u8 i = 0 ; i<4 ; i++)
	{
		arr[i] += 48 ;
		LCD_voidSendData(arr[i]);
	}
}

void LCD_voidSendNumberIII(u16 Variable)
{
	u16 arr[3];
	
	arr [2] = (Variable %10);
	arr [1] = ((Variable %100)-arr [2])/10;
	arr [0] =((Variable %1000)-arr [1])/100;
	
	
	for (u8 i = 0 ; i<3 ; i++)
	{
		arr[i] += 48 ;
		LCD_voidSendData(arr[i]);
	}
}

void LCD_voidSendNumberII(u8 Variable )
{
	u16 arr[2];
	
	arr [1] = (Variable %10);
	arr [0] = ((Variable %100)-arr [1])/10;
	
	
	for (u8 i = 0 ; i<2 ; i++)
	{
		arr[i] += 48 ;
		LCD_voidSendData(arr[i]);
	}
}

void LCD_voidClear(void)
{
		for(u8 t =0  ; t<16 ; t++)
		{
			LCD_voidSetCursor(LCD_U8_LINE1 ,t);
			LCD_voidSendData(32);
		}
		for(u8 t =0  ; t<16 ; t++)
		{
			LCD_voidSetCursor(LCD_U8_LINE2 ,t);
			LCD_voidSendData(32);
		}
	
	
}