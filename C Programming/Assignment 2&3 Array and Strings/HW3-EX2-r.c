/*
 * HW3-EX2 main.c
 *
 *  Created on: May 22, 2021
 *      Author: Mahmoud Mohamed
 */

/* This program is to calculate  average using Arrays*/

#include "stdio.h"

int main()
{
	printf("** Hello This Program is Designed to Calculate an Average for Numbers Entered by User **\n\r");
	fflush(stdout);
	int x,i;
	float Averg=0.0;
	float Arr1[100];
	printf("Please Enter the number of elements that you would like to Average (number between 0 and 100): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x>0&&x<=99)
	{
	for(i=0;i<x;i++)
	{
		printf("Enter Number: ");
		fflush(stdout);fflush(stdin);
		scanf("%f",&Arr1[i]);
	}
	for(i=0;i<x;i++)
	{
		Averg+=Arr1[i];
	}
	printf("\n\rAverage = %0.2f",Averg/x);
	}
	else
		printf("Number entered is either less than 0 or greater than 99");
	return 0;
}
