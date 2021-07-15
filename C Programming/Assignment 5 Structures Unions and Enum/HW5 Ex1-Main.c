/*
 * Ex1-Main.c
 *
 *  Created on: Jul 15, 2021
 *      Author: Mahmoud Mohamed
 *      EX1 C program to store information (name,roll and marks) of a student  using structure
 */

#include "stdio.h"

typedef struct SStudent {
	char name[50];
	int Roll_Num;
	float Marks;
}Sstudent;

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	Sstudent Stud;
	printf("*****Welcome to the program******\n\r");
	printf("Please Enter Student Information:\n\r");
	printf("Name: ");
	scanf(" %s",&Stud.name);
	printf("Roll Number: ");
	scanf(" %d",&Stud.Roll_Num);
	printf("Marks: ");
	scanf(" %f",&Stud.Marks);
	printf("Display information\n\rname: %s\n\rRoll Number: %d\n\rMarks: %0.2f",
			Stud.name,Stud.Roll_Num,Stud.Marks);
	return 0;

}
