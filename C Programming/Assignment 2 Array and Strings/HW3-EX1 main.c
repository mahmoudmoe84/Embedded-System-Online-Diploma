/*
 * HW3-EX1 main.c
 *
 *  Created on: May 22, 2021
 *      Author: Mahmoud Mohamed
 */

#include "stdio.h"

int main()
{
	float Arr1[2][2];
	float Arr2[2][2];
	float sum[2][2];
	int x,m;

	printf("enter elements of the first matrix \r\n");
	fflush(stdout);
	for(x=0;x<2;x++)
	{
		for(m=0;m<2;m++)
		{
			printf("Enter element Arr1-%d%d : ",x,m);
			fflush(stdout);fflush(stdin);
			scanf("%f",&Arr1[x][m]);
		}

	}


	printf("\n\renter elements of the Second matrix \r\n");
	fflush(stdout);
	for(x=0;x<2;x++)
	{
		for(m=0;m<2;m++)
		{
			printf("Enter element Arr2-%d%d : ",x,m);
			fflush(stdout);fflush(stdin);
			scanf("%f",&Arr2[x][m]);
		}
	}

	for(x=0;x<2;x++)
	{
		for(m=0;m<2;m++)
		{
			sum[x][m]=Arr1[x][m]+Arr2[x][m];
		}
	}
	printf("\nSum of Arr1 and Arr2 :\n\r");
	for(x=0;x<2;x++)
	{
		for(m=0;m<2;m++)
		{
			printf("%0.1f\t",sum[x][m]);
		}
		printf("\n");
	}

	return 0;
}
