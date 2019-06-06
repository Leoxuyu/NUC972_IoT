/*
 * File      : interrupt.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2017, RT-Thread Development Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-02-08     RT-Thread    the first version
 */
#ifndef __INTERRUPT_H__
#define __INTERRUPT_H__

#include "rthw.h"

/*< 中断优先级 >*/
#define FIQ_LEVEL_0     0       /*!< FIQ Level 0 */
#define IRQ_LEVEL_1     1       /*!< IRQ Level 1 */
#define IRQ_LEVEL_2     2       /*!< IRQ Level 2 */
#define IRQ_LEVEL_3     3       /*!< IRQ Level 3 */
#define IRQ_LEVEL_4     4       /*!< IRQ Level 4 */
#define IRQ_LEVEL_5     5       /*!< IRQ Level 5 */
#define IRQ_LEVEL_6     6       /*!< IRQ Level 6 */
#define IRQ_LEVEL_7     7       /*!< IRQ Level 7 */

void rt_hw_interrupt_set_priority(int vector,int priority);
void rt_hw_interrupt_set_type(int vector,int type);
void rt_hw_interrupt_init(void);
rt_isr_handler_t rt_hw_interrupt_install(int vector,rt_isr_handler_t handler,void *param,const char *name);
void rt_hw_interrupt_set_type(int vector,int type);
void rt_hw_interrupt_set_priority(int vector,int priority);										 





















#endif /* __INTERRUPT_H__ */
