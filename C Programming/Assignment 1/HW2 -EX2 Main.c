/*
 * Ex1 Main.c
 *
 *  Created on: May 14, 2021
 *      Author: Mahmoud Mohamed
 */


//EX2:
// Check Vowels


#include "stdio.h"

int main ()
{
	char vowl;
	printf("\r\nEnter an Alphabet: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&vowl);
	switch (vowl)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	{
		printf("\n\r%c is a vowel",vowl);
	}
	break;
	default :
		printf("\n\r%c is a consonant",vowl);
	}
}
