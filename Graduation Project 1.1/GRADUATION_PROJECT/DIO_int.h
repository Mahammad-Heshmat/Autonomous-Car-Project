/****************************************/
/*          Author: ASSEM KHALIL        */
/*          Date: 21/11/2022            */
/*          Version: 1.0                */
/*          Module: DIO                 */
/****************************************/
#ifndef DIO_INT_H_
#define DIO_INT_H_

#define DIO_U8_HIGH 1
#define DIO_U8_LOW  0

#define  LOW   0
#define  HIGH  1

#define DIO_U8_PIN0       0  //A0
#define DIO_U8_PIN1       1	 //A1
#define DIO_U8_PIN2       2	 //A2
#define DIO_U8_PIN3       3	 //A3
#define DIO_U8_PIN4       4	 //A4
#define DIO_U8_PIN5       5	 //A5
#define DIO_U8_PIN6       6	 //A6
#define DIO_U8_PIN7       7	 //A7

#define DIO_U8_PIN8       8	 //B0
#define DIO_U8_PIN9       9	 //B1
#define DIO_U8_PIN10      10 //B2
#define DIO_U8_PIN11      11 //B3
#define DIO_U8_PIN12      12 //B4
#define DIO_U8_PIN13      13 //B5
#define DIO_U8_PIN14      14 //B6
#define DIO_U8_PIN15      15 //B7

#define DIO_U8_PIN16      16 //C0
#define DIO_U8_PIN17      17 //C1
#define DIO_U8_PIN18      18 //C2
#define H_A1		      19 //C3
#define H_A2		      20 //C4
#define H_A3		      21 //C5
#define H_A4		      22 //C6
#define DIO_U8_PIN23      23 //C7

#define DIO_U8_PIN24      24 //D0
#define DIO_U8_PIN25      25 //D1
#define DIO_U8_PIN26      26 //D2
#define DIO_U8_PIN27      27 //D3
#define H_EN1			  28 //D4
#define H_EN2			  29//D5
#define DIO_U8_PIN30      30 //D6
#define DIO_U8_PIN31      31 //D7 

void DIO_voidInit(void);
void DIO_voidSetPinValue(u8 Copy_u8Pin , u8 Copy_u8Value);
u8 DIO_u8GetPinValue(u8 Copy_u8Pin);

#endif