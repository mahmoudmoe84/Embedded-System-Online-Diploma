/*
 * HW3-EX4 main.c
 *
 *  Created on: May 22, 2021
 *      Author: Mahmoud Mohamed
 */

/* EX4 C Program to insert an element in the array*/

#include "stdio.h"

int main (void)

{
	float arr1[10],arr2[10];
	int x,i,m;
	float j;

	printf("enter number of elements : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%f",&arr1[i]);
	}
	for (i=0;i<x;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("\n\rEnter the element to be inserted: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&j);

	printf("\n\rEnter the location: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&m);

	for (i=(m-1);i<=(x+1);i++)
	{
		arr2[i+1]=arr1[i];
	}
	arr2[m-1]=j;

	for(i=0;i<=x;i++)
	{
		printf("%0.1f\t",arr2[i]);
	}


	return 0;
}
