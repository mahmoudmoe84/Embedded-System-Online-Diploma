/*
 * HW5-EX4-main.c
 *
 *  Created on: Jul 15, 2021
 *      Author: Mahmoud Mohamed
 *      EX4 program to store students information using a structure
 */
#include "stdio.h"

typedef struct Sstud{
	char name[100];
	int roll;
	float mark;
}Sstud;


Sstud stuinf (Sstud inf[])
{
	int i;
	printf("Enter the information for the students\n\r");
	for(i=0;i<10;i++)
	{
		printf("For roll number %d: ",i+1);
		scanf("%d",&inf[i].roll);
		printf("Enter Name: ");
		scanf(" %s",&inf[i].name);
		printf("Enter Mark: ");
		scanf("%f",&inf[i].mark);
	}
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i;
	Sstud inf[10];
	stuinf(inf);
	printf("Displaying information for the students: \n\r");
	for(i=0;i<10;i++)
	{
		printf("information for roll number %d is %d\n\r",i+1,inf[i].roll);
		printf("Name: %s\n\r",inf[i].name);
		printf("Mark: %0.1f\n\r",inf[i].mark);
	}
}
