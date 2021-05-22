/*
 * Ex6 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX6:
//
//Write Source Code to Swap Two Numbers
//
//#########Console_output######
//Enter value of a: 1.20
//Enter value of b: 2.45
//
//After swapping, value of a = 2.45
//After swapping, value of b = 1.2
//#############################


#include "stdio.h"

int main ()
{
	float i,x,z;
	printf("Enter value of a: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&x);
	printf("\r\nEnter value of b: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&i);
	z=x; // take the value stored in x and put it into Z
	x=i; //put in x the value in i
	i=z; // put in i the value stored in Z which is the original in x
	printf("\n\rAfter Swapping, value of a = %f ",x);
	printf("\n\rAfter Swapping, value of b = %f ",i);
	return 0;
}
