/*
 ============================================================================
 Name        : Hw7.c
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
	float a,b;
	printf("enter value of a ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&a);
	printf("enter value of b ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a after swapping %f \n", a);
	printf("value of b after swapping %f", b);
	return 0;
}
