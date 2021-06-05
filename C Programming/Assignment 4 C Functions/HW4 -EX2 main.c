/*
 * EX2 main.c
 *
 *  Created on: Jun 3, 2021
 *      Author: Mahmoud Mohamed
 */


//EX2  c program to calculate factorial using recursion -HW4

#include "stdio.h"

int fact_Rec(int x);

int main ()
{
	int y,k;
	printf("Enter a Positive Integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	k=fact_Rec(y);
	printf("Factorial of %d is %d ",y,k);
	return 0;
}
