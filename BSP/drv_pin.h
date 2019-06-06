#ifndef _drv_pin_h
#define _drv_pin_h

typedef unsigned char IO_FUN_t;


typedef enum IO_Port
{
	GPIO_A=0,
	GPIO_B,
	GPIO_C,
	GPIO_D,
	GPIO_E,
	GPIO_F,
	GPIO_G,
	GPIO_H,
	GPIO_I,
	GPIO_J,
}IO_Port_t;

typedef enum IO_Pin
{
	Pin_0=0,
	Pin_1,
	Pin_2,
	Pin_3,
	Pin_4,
	Pin_5,
	Pin_6,
	Pin_7,
	Pin_8,
	Pin_9,
	Pin_10,
	Pin_11,
	Pin_12,
	Pin_13,
	Pin_14,
	Pin_15,
}IO_Pin_t;

#define FUN_PA_GPIO					0x00
#define FUN_PA_LCD		
#define FUN_PA_KPI		
#define FUN_PA_PWM		

#define FUN_PB_GPIO					0x00
#define FUN_PB		
#define FUN_PB		
#define FUN_PB		

#define FUN_PC_GPIO					0x00
#define FUN_PC		
#define FUN_PC		
#define FUN_PC		

#define FUN_PD_GPIO					0x00
#define FUN_PD		
#define FUN_PD		
#define FUN_PD		

#define FUN_PE_GPIO					0x00
#define FUN_PE		
#define FUN_PE		
#define FUN_PE		

#define FUN_PF_GPIO					0x00
#define FUN_PF		
#define FUN_PF		
#define FUN_PF		

#define FUN_PF_GPIO					0x00
#define FUN_PF		
#define FUN_PF		
#define FUN_PF		

#define FUN_PG_GPIO					0x00
#define FUN_PG		
#define FUN_PG		
#define FUN_PG		

#define FUN_PH_GPIO					0x00
#define FUN_PH		
#define FUN_PH		
#define FUN_PH		

#define FUN_PI_GPIO					0x00
#define FUN_PI		
#define FUN_PI		
#define FUN_PI		

#define FUN_PJ_GPIO					0x00
#define FUN_PJ		
#define FUN_PJ		
#define FUN_PJ		


//#define	FUN_GPIO			0x00		/*< 0000 >*/
//#define	FUN_LCD				0x02		/*< 0010 >*/
//#define FUN_KPI				0x04		/*< 0100 >*/
//#define FUN_PWM				0x0D		/*< 1101 >*/
//#define FUN_SPI0			0x0B		/*< 1011 >*/
//#define FUN_CLK_OUT		0x0F		/*< 1111 >*/
//#define FUN_UART6			0x09		/*< 1001 >*/
//#define FUN_ETMR0			0x0F		/*< 1111 >*/
//#define FUN_NAND			0x05		/*< 0101 >*/
//#define FUN_ETMR1			0x0D		/*< 1101 >*/
//#define FUN_CAN				0x0C		/*< 1100 >*/
//#define FUN_xx
//#define FUN_xx


#endif

