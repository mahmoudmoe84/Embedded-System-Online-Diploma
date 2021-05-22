/*
 * Ex5 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */

//EX5:
//
//Write C Program to Find ASCII Value of a Character
//
//#########Console_output######
//Enter a character: G
//ASCII value of G = 71
//#############################
//
//
//########################################################################



#include "stdio.h"

int main ()
{

	char c;
	printf("Enter a Character : ");
	fflush (stdout);
	scanf("%c",&c);
	printf("\n\rASCII value of G = %d",c);
	return 0;
}
