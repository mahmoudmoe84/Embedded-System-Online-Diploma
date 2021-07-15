/*
 * HW5-EX2-main.c
 *
 *  Created on: Jul 15, 2021
 *      Author: Mahmoud Mohamed
 *      EX2 C program to Add two distances in inch-feet using structure
 */

#include "stdio.h"

typedef struct SFt_In{
	double feet;
	double inch;
}SFt_In;


SFt_In ReadSt()
{
	SFt_In dis1;
	printf("Enter information for the distance:\n\r");
	printf("Enter feet: ");
	scanf("%lf",&dis1.feet);
	printf("Enter Inch: ");
	scanf("%lf",&dis1.inch);
	return dis1;

}

SFt_In add_ft_in (SFt_In dis1,SFt_In dis2 )
{
	SFt_In sum;
	sum.feet =dis1.feet+dis2.feet;
	if(dis1.inch+dis2.inch>12)
	{
		sum.feet+=1;
		sum.inch=(dis1.inch+dis2.inch)-12;
	}
	else
		sum.inch=dis1.inch+dis2.inch;
	return sum;
}


int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	SFt_In X,Y,Z;
	X=ReadSt();
	Y=ReadSt();
	Z=add_ft_in(X,Y);
	printf("summation is %0.0lf'-%0.1lf\"",Z.feet,Z.inch);
}
