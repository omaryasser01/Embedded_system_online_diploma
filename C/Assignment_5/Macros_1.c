/*
 ============================================================================
 Name        : Macros_1.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main(void)
{
	int r;
	printf("enter the radius \n");
	fflush (stdin);  fflush(stdout);
	scanf("%d",&r);
	printf("Area = %.2f",r*pi*r);

}
