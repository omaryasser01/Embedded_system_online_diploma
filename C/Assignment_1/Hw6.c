/*
 ============================================================================
 Name        : Hw6.c
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
	float a,b,temp;
	printf("enter value of a ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&a);
	printf("enter value of b ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);
	return 0;
}
