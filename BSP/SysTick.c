#include "rtthread.h"
#include "SysTick.h"
#include "nuc970.h"
#include "sys.h"
#include "etimer.h"
#include "interrupt.h"

static void ETMR0_IRQHandler(int vector,void *param)
{
	rt_tick_increase();
	ETIMER_ClearIntFlag(0);
}

void rt_hw_Systick_init(void)
{
	// Enable ETIMER0 engine clock
	outpw(REG_CLK_PCLKEN0, inpw(REG_CLK_PCLKEN0) | (1 << 4));

	// Set timer frequency to 1HZ
	ETIMER_Open(0, ETIMER_PERIODIC_MODE, RT_TICK_PER_SECOND);
	// Enable timer interrupt
	ETIMER_EnableInt(0);
	ETIMER_Start(0); 

	rt_hw_interrupt_install(ETMR0_IRQn,ETMR0_IRQHandler,RT_NULL,"etmr0");
	rt_hw_interrupt_set_priority(ETMR0_IRQn,IRQ_LEVEL_1);
	rt_hw_interrupt_set_type(ETMR0_IRQn,HIGH_LEVEL_SENSITIVE);
	rt_hw_interrupt_umask(ETMR0_IRQn); 
} /* rt_hw_systick_init */



