/*
 * Ex5 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX5:
// check if a character is an alphabet or not


#include "stdio.h"

int main ()
{
	char m;
	printf("enter char : ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&m);
	if(m>64&&m<90)
	{
		printf("\n\r%c is an Alphabet ",m);
	}
	else if (m>96&&m<123)
	{
		printf("\n\r%c is an Alphabet ",m);
	}
	else
	{
		printf("\n\r%c is Not an Alphabet ",m);
	}
	return 0;
}
