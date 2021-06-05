/*
 * function.c
 *
 *  Created on: Jun 3, 2021
 *      Author: Mahmoud Mohamed
 */


#include "stdio.h"
extern int findprime(int x)
{
	int i,z=1;
	for (i=2;i<x;i++)
	{
		if(x%i==0)
		{
			z=0;
			break;
		}
	}
	return z;
}
