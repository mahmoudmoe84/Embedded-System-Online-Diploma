/*
 * Ex7 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX7:
// find factorial


#include "stdio.h"

int main ()
{
	int x,i,j=1;
	printf("Enter an integer : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	if (x<0)
	{
		printf("Error Factorial of negative number doesn't exist");
	}
	else
	{
		for (i=1;i<=x;i++)
		{
			j=j*i;
		}
		printf("\n\rFactorial of %d is %d",x,j);
	}

	return 0;
}
