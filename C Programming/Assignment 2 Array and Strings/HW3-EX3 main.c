/*
 * HW3-EX3 main.c
 *
 *  Created on: May 22, 2021
 *      Author: Mahmoud Mohamed
 */

/* EX3 Program to transpose a matrix*/


#include "stdio.h"

int main (void)
{
	int x,i,raw,col;
	float Arr1[5][5];
	float Arr2[5][5];

	printf("Enter rows and column of a  Matrix : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&i);

	for(raw=0;raw<x;raw++)
	{
		for(col=0;col<i;col++) /*storage of the first matrix loop*/
		{
			printf("Enter element of the Matrix %d%d ",raw,col);
			fflush(stdin);fflush(stdout);
			scanf("%f",&Arr1[raw][col]);
		}
	}
	printf("Entered Matrix is: \n\r"); /*printing first matrix*/

	for(raw=0;raw<x;raw++)
	{
		for(col=0;col<i;col++)
		{
			printf("%0.2f\t",Arr1[raw][col]);
		}
		printf("\n");
	}

	for(raw=0;raw<i;raw++) /*copying first matrix to second matrix*/
	{
		for(col=0;col<x;col++)
		{
			Arr2[raw][col]=Arr1[col][raw];
		}
	}
	printf("\n\rTranspose Matrix is \n\r"); /* printing second matrix*/

	for(raw=0;raw<i;raw++)
	{
		for(col=0;col<x;col++)
		{
			printf("%0.2f\t",Arr2[raw][col]);
		}
		printf("\n");
	}
	return 0;
}


