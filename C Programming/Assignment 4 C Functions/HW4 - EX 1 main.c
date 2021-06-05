/*
 * main.c
 *
 *  Created on: Jun 3, 2021
 *      Author: Mahmoud Mohamed
 */


#include "stdio.h"
#include "string.h"

int findprime(int x);  //function in another file function.c
int main ()
{
	int a,b; //variables to be scanned in
	int i,m; //variables for iteration and passing values
	printf("Enter two numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);
	for(i=a;i<b;i++)    //for loop to loop the whole interval and determine the prime numbers
	{
		m=findprime(i); //pass the value to m of either i is true or false as a prime number
		if(m==1&&i!=1) //conditional that m is true then i will be printed
			printf("%d\t",i);
	}
	return 0;
}
