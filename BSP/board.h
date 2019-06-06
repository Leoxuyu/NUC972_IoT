#ifndef __BOARD_H__
#define __BOARD_H__

extern int Image$$RW_RAM1$$ZI$$Limit;

#define BOARD_HEAP_START	(void*)&Image$$RW_RAM1$$ZI$$Limit
#define BOARD_SDRAM_SIZE	0x04000000
#define BOARD_HEAP_END	((void*)BOARD_SDRAM_SIZE)

extern void rt_hw_board_init(void);

#endif

