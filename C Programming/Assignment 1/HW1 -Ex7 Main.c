/*
 * Ex7 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX7:
//it is an interview trick
//
//Write Source Code to Swap Two Numbers without temp variable.


#include "stdio.h"

int main ()
{
	float i,x;
	printf("Enter value of a: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&x);
	printf("\r\nEnter value of b: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&i);
	x+=i; // add the value of i to the value of x to have a new value
	i=x-i; // substract the value of i from the new x to land at the value of original x
	x=x-i; //substract the value of new i from new x to land at the original i
	printf("\n\rAfter Swapping, value of a = %f ",x);
	printf("\n\rAfter Swapping, value of b = %f ",i);
	return 0;
}
