/*
 * HW3-EX5-main.c
 *
 *  Created on: May 22, 2021
 *      Author: Mahmoud Mohamed
 */

/*
 * HW3-EX5 main.c
 *
 *  Created on: May 22, 2021
 *      Author: Mahmoud Mohamed
 */

/* C Program to search an element in an Array*/

#include "stdio.h"

int main (void)
{
	float arr1[10];
	int x,i,s;

	printf("enter number of elements: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%f",&arr1[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&s);
	for(i=0;i<x;i++)
	{
		if(arr1[i]==s)
		{
			printf("Number for in location %d ",i+1);
		}
	}
	return 0;
}

