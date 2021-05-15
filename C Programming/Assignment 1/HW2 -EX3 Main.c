/*
 * Ex3 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX3:
// find the largest number


#include "stdio.h"

int main ()
{
	float x,i,j;
	printf("\r\nEnter 3 numbers : ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f",&x,&i,&j);
	if(x>i&&x>j)
	{
		printf("Largest number is %f",x);
	}
	else if (i>x&&i>j)
	{
		printf("Largest number is %f",i);
	}
	else if (j>x&&j>i)
	{
		printf("Largest number is %f",j);
	}
	return 0;
}
