/*
 ============================================================================
 Name        : Function_4.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int a,int b);

int main(void)
{
	int b,p;
	printf("enter base number: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&b);
	printf("enter power number(positive integer): ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&p);
	printf("%d^%d = %d",b,p,power(b,p));
}

int power(int a,int b)
{
	if (b!=1)
	return (a*power(a,b-1));
}
