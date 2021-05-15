/*
 * Ex4 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX4:
// positive negative or zero


#include "stdio.h"

int main ()
{

	float x;
	printf("Enter a number ");
	fflush(stdout); fflush(stdin); // buffer flush to avoid esclipse bug
	scanf("%f",&x);
	if(x>0)
	{
		printf("\n\r%f is Positive nubmer",x);
	}
	else if (x<0)
	{
		printf("\n\r%f is negative nubmer",x);
	}
	else
	{
		printf("\n\rYou Entered Zero");
	}

	return 0;
}
