// function file - using recursion i will be writing a function to calculate factorial (finite recursion)

#include "stdio.h"

extern int fact_Rec(int x)
{
	if(x>0)
	{
		return x*fact_Rec(x-1);
	}
	else
		return 1;

}
