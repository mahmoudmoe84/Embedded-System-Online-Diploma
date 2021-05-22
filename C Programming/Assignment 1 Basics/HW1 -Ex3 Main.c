/*
 * Ex3 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */

//EX3:
//
//Write C Program to Add Two Integers
//
//i should see the Console as following:
//##########Console-output###
//Enter two integers: 12
//11
//Sum: 23
//###########################
//
//########################################################################


#include "stdio.h"

int main ()
{
	int x,i;
	printf("Enter Two Integers : ");
	fflush (stdout);
	scanf("%d %d",&x,&i);
	printf("\n\r Sum: %d",x+i);
	return 0;
}
