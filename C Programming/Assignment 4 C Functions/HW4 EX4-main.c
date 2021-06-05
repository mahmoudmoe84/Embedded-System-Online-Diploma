/*
 * HW4 EX4-main.c
 *
 *  Created on: Jun 5, 2021
 *      Author: Mahmoud Mohamed
 */

#include "stdio.h"
int pwr_x(int x,int i);

int main ()
{
	int x , i;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("\r\nEnter power number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	printf("%d^%d =%d",x,i,pwr_x(x,i));
	return 0;
}
