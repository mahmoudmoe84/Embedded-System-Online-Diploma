/*
 * HW4- EX3 Function.c

 *
 *  Created on: Jun 3, 2021
 *      Author: Mahmoud Mohamed
 */

/* to reverse a sentence an array will be declared to store the sentence. another array will be
 * declared to put the function in reverse order then end the sentence by 0 to
 * terminate garbage value
 */

#include "stdio.h"
extern void reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		reverse();
		printf("%c",c);
	}
}
