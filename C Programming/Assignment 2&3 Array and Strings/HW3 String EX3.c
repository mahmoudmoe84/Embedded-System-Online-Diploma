/*
 * HW3 String EX3.c
 *
 *  Created on: May 22, 2021
 *      Author: Mahmoud Mohamed
 */


/* C program to reverse a string*/

#include "stdio.h"
#include "string.h"

int main (void)
{
	char str1[10];
	char str2[10];
	int i,x,m,z;
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(str1);
	x=strlen(str1)-1;
	z=x;
	for(i=0;i<=z;i++)
	{
		m=str1[x];
		x--;
		str2[i]=m;
	}
	str2[i+1]=0;

	printf("\n\rReverse String is %s",str2);

	return 0;
}
