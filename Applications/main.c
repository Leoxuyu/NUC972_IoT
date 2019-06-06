#include <rtthread.h>
#include <rtdevice.h>
#include "sys.h"

int main(void)
{
	rt_uint32_t i=0;
	sysInitializeUART();
	while(1)
	{
		sysprintf("Test:%d !\n",i);
		i++;
		rt_thread_delay(100);
	}
}

