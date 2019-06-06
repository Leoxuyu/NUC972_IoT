#include "drv_usart.h"
#include "NUC970.h"
#include "uart.h"

#ifdef RT_USING_SERIAL

//NUC970自带串口驱动结构体
static UART_T param;

void UART0_GPIO_Init(void)
{
	/* enable UART0 clock */
	outpw(REG_CLK_PCLKEN0, inpw(REG_CLK_PCLKEN0) | 0x10000);
	/* PE0, PE1 */
	outpw(REG_SYS_GPE_MFPL, (inpw(REG_SYS_GPE_MFPL) & 0xffffff00) | 0x99);  // UART0 multi-function
}

void UART1_GPIO_Init(void)
{
	/* PI5, PI6 */
}

void UART2_GPIO_Init(void)
{
	/* PF11, PF12 */
}

void UART3_GPIO_Init(void)
{
	/* PE12, PE13 */
}
void UART4_GPIO_Init(void)
{
	/* PC10, PC11 */
}
void UART5_GPIO_Init(void)
{
	/* PB0, PB1 */
}
void UART6_GPIO_Init(void)
{
	/* PG11, PG12 */
}
void UART7_GPIO_Init(void)
{
	/* PI1, PI2 */
}
void UART8_GPIO_Init(void)
{
	/* PI12, PI13 */
}

void UART9_GPIO_Init(void)
{
	/* PD14, PD15 */
	/* PD11, PD12 */
	/* PH12, PH13 */

}

void UART10_GPIO_Init(void)
{
	/* PB10, PB11 */
	/* PB12, PB13 */
	/* PC6, PC7 */

}

void NUC970_hw_UART_Init(void)
{
#ifdef RT_USING_UART0
#endif

#ifdef RT_USING_UART1
#endif

#ifdef RT_USING_UART2
#endif

#ifdef RT_USING_UART3
#endif

#ifdef RT_USING_UART4
#endif

#ifdef RT_USING_UART5
#endif

#ifdef RT_USING_UART6
#endif

#ifdef RT_USING_UART7
#endif

#ifdef RT_USING_UART8
#endif

#ifdef RT_USING_UART9
#endif

#ifdef RT_USING_UART10
#endif
	
	rt_hw_serial_register
}


#endif


























