/*
 * HW4-EX4 Function.c
 *
 *  Created on: Jun 5, 2021
 *      Author: Mahmoud Mohamed
 */

#include "stdio.h"

extern int pwr_x(int x,int i)
{
	if(i>=1)
	{
		return x*pwr_x(x,i-1);
	}
	else return 1;
}
