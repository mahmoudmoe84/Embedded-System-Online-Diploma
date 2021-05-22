/*
 * Ex1 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX1:
// odd / even src code


#include "stdio.h"

int main ()
{
	int x;
	printf("\r\nEnter an integer number you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);
	if (x%2==0)
	{
		printf("\n\rNumber is even");

	}
	else
	{
		printf("\n\rNumber is odd");
	}
	return 0;
}
