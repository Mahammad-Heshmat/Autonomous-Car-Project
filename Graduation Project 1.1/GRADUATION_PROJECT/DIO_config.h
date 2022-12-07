
/****************************************/
/*          Author: ASSEM KHALIL        */        
/*          Date: 21/11/2022            */
/*          Version: 1.0                */
/*          Module: DIO                 */
/****************************************/
#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_
/*
* options: 
*		DIO_U8_INPUT
*       DIO_U8_OUTPUT
*/
#define DIO_U8_PIN0_DIR       DIO_U8_INPUT   //A0
#define DIO_U8_PIN1_DIR       DIO_U8_INPUT	 //A1
#define DIO_U8_PIN2_DIR       DIO_U8_INPUT	 //A2
#define DIO_U8_PIN3_DIR       DIO_U8_INPUT   //A3  
#define DIO_U8_PIN4_DIR       DIO_U8_OUTPUT   //A4  LCD_D0
#define DIO_U8_PIN5_DIR       DIO_U8_OUTPUT   //A5  LCD_D1
#define DIO_U8_PIN6_DIR       DIO_U8_OUTPUT   //A6  LCD_D2
#define DIO_U8_PIN7_DIR       DIO_U8_OUTPUT   //A7  LCD_D3

#define DIO_U8_PIN8_DIR       DIO_U8_OUTPUT   //B0  trigger pin
#define DIO_U8_PIN9_DIR       DIO_U8_OUTPUT   //B1  LCD RS
#define DIO_U8_PIN10_DIR      DIO_U8_OUTPUT   //B2  LCD RW
#define DIO_U8_PIN11_DIR      DIO_U8_OUTPUT   //B3  OC0
#define DIO_U8_PIN12_DIR      DIO_U8_OUTPUT    //B4  LCD_EN 
#define DIO_U8_PIN13_DIR      DIO_U8_INPUT    //B5 
#define DIO_U8_PIN14_DIR      DIO_U8_INPUT    //B6 
#define DIO_U8_PIN15_DIR      DIO_U8_INPUT    //B7   

#define DIO_U8_PIN16_DIR      DIO_U8_INPUT    //C0
#define DIO_U8_PIN17_DIR      DIO_U8_INPUT	  //C1
#define DIO_U8_PIN18_DIR      DIO_U8_INPUT	  //C2
#define DIO_U8_PIN19_DIR      DIO_U8_OUTPUT   //C3 H_A1
#define DIO_U8_PIN20_DIR      DIO_U8_OUTPUT   //C4 H_A2
#define DIO_U8_PIN21_DIR      DIO_U8_OUTPUT   //C5 H_A3
#define DIO_U8_PIN22_DIR      DIO_U8_OUTPUT   //C6 H_A4
#define DIO_U8_PIN23_DIR      DIO_U8_INPUT	  //C7 

#define DIO_U8_PIN24_DIR      DIO_U8_INPUT    //D0  RX
#define DIO_U8_PIN25_DIR      DIO_U8_OUTPUT    //D1  TX
#define DIO_U8_PIN26_DIR      DIO_U8_INPUT    //D2  
#define DIO_U8_PIN27_DIR      DIO_U8_INPUT    //D3  led2
#define DIO_U8_PIN28_DIR      DIO_U8_OUTPUT   //D4  H_EN1
#define DIO_U8_PIN29_DIR      DIO_U8_OUTPUT   //D5  H_EN2
#define DIO_U8_PIN30_DIR      DIO_U8_INPUT    //D6  ICP "echo"
#define DIO_U8_PIN31_DIR      DIO_U8_INPUT    //D7  

#endif

