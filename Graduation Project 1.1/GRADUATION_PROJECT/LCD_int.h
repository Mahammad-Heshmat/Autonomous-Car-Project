/****************************************/
/*          Author: Khaled Mohsen       */        
/*          Date: 20-8-2022             */
/*          Version: 1.0                */
/*          Module: LCD                 */
/****************************************/
#ifndef LCD_INT_H_
#define LCD_INT_H_

#define LCD_U8_LINE1  0x80
#define LCD_U8_LINE2  0xC0

#define LCD_U8_DIGIT1    0
#define LCD_U8_DIGIT2    1
#define LCD_U8_DIGIT3    2
#define LCD_U8_DIGIT4    3
#define LCD_U8_DIGIT5    4
#define LCD_U8_DIGIT6    5
#define LCD_U8_DIGIT7    6
#define LCD_U8_DIGIT8    7
#define LCD_U8_DIGIT9    8
#define LCD_U8_DIGIT10   9
#define LCD_U8_DIGIT11   10
#define LCD_U8_DIGIT12   11
#define LCD_U8_DIGIT13   12
#define LCD_U8_DIGIT14   13
#define LCD_U8_DIGIT15   14
#define LCD_U8_DIGIT16   15

void LCD_voidInit(void);
void LCD_voidSendData(u8 Copy_u8Data);
void LCD_voidSendCommand(u8 Copy_u8Data);
void LCD_voidSendString(s8* String);
void LCD_voidSetCursor(u8 Copy_u8Line , u8 Copy_u8Column);
//****************************************************************
void LCD_voidSendNumber(u16 Variable );
void LCD_voidSendNumberII(u8 Variable );
void LCD_voidClear(void);


#endif