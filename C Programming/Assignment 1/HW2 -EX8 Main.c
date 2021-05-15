/*
 * Ex8 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX8:
// simple calculator using switch case


#include "stdio.h"

int main ()
{
	char x;
	float i,j;
	printf("Enter Operator either + , - , * or Divide: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	printf("\n\rEnter two operands: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&i,&j);
	switch (x)
	{
	case'+':
	{
		printf("\n\r%0.2f + %0.2f = %0.2f",i,j,i+j);
	}
	break;
	case'-':
	{
		printf("\n\r%0.2f - %0.2f = %0.2f",i,j,i-j);
	}
	break;
	case'*':
	{
		printf("\n\r%0.2f * %0.2f = %0.2f",i,j,i*j);
	}
	break;
	case'/':
	{
		printf("\n\r%0.2f / %0.2f = %0.2f",i,j,i/j);
	}
	break;
	}
	return 0;
}
