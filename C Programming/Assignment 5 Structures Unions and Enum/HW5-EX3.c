/*
 * main.c
 *
 *  Created on: Jul 13, 2021
 *      Author: Mahmoud Mohamed
 */


#include "stdio.h"
#include "string.h"
#include "conio.h"

typedef struct Scomplex {
	float R_C; //real number
	float I_C; // imaginary number
}Scomplex;

Scomplex ReadC (char name[])
{
	Scomplex R;
	printf("Enter %s complex value ex( 5,-3): ",name);
	scanf(" %f, %f",&R.R_C,&R.I_C);
	return R;
}

Scomplex AddC (Scomplex A, Scomplex B)
{
	Scomplex C;
	C.R_C=A.R_C+B.R_C;
	C.I_C=A.I_C+B.I_C;
	return C;
}

void prntC(char name [],Scomplex C)
{
	printf("\n\r%s = %0.2f + i(%0.2f)",name,C.R_C,C.I_C);
}

void main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	Scomplex X,Y,Z;
	X=ReadC("X");
	Y=ReadC("Y");
	Z=AddC(X,Y);
	prntC("Z",Z);
}
