/*
 * HW3-String EX2.c
 *
 *  Created on: May 22, 2021
 *      Author: Mahmoud Mohamed
 */

/* without using strlen find the lenght of a string*/

#include "stdio.h"
#include "string.h"

int main (void)
{
	char freq[100];
	int i=0,x=0;
	printf("Enter a string : ");
	fflush(stdout);fflush(stdin);
	gets(freq);

	for(i=0;freq[i]!=0;i++)
	{
			x=x+1;

	}
	/*while(freq[i]!=0)
	{
		x=x+1;
		i++;
	}*/
	printf("Length of string is %d",x);
	fflush(stdout);
	return 0;
}
