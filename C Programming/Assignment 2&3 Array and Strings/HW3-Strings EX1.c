/*
 * HW3-Strings EX1.c
 *
 *  Created on: May 22, 2021
 *      Author: Mahmoud Mohamed
 */

/* EX1 program to find a frequency of a character in a string */

#include "stdio.h"
#include "string.h"

int main (void)
{
	char freq[100];
	int i,j=0;
	char x;
	printf("Enter a String: ");
	fflush(stdout);fflush(stdin);
	gets(freq);
	printf("\n\r%s",freq);
	fflush(stdout);
	printf("Enter a character to find the frequency : ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&x);
	for (i=0;i<=strlen(freq);i++)
	{
		if(freq[i]==x)
		{
			j=j+1;
		}

	}
	printf("frequency is %d",j);
	return 0;
}
