/*
 * Ex4 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */

//EX4:
//
//Write C Program to Multiply two Floating Point Numbers
//i should see the Console as following:
//##########Console-output###
//
//###########################
//Enter two numbers: 2.4
//1.1
//Product: 2.640000
//########################################################################


#include "stdio.h"

int main ()
{
	float x,i;
	printf("Enter Two numbers : ");
	fflush (stdout);
	scanf("%f %f",&x,&i);
	printf("\n\rProduct: %f",x*i);
	return 0;
}
