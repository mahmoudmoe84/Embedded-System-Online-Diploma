/*
 * Ex2 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX2:
//
//Write C Program to Print a Integer Entered by a User
//i should see the Console as following:
//##########Console-output###
//Enter a integer: 25
//You entered: 25
//###########################
//
//########################################################################

#include "stdio.h"

int main ()
{
	int x;
	printf("Enter Integer : ");
	fflush (stdout);
	scanf("%d",&x);
	printf("\n\rYou Entered : %d",x);
	return 0;
}
