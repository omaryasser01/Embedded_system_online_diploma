/*
 ============================================================================
 Name        : Hw4.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x,y,pro;
		printf("Enter two numbers");
		fflush(stdin);  fflush(stdout);
		scanf("%f %f",&x,&y);
		pro= x*y;
		printf("Product : %f",pro);
		return 0;
}
