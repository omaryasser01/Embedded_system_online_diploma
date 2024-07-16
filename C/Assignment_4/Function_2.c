/*
 ============================================================================
 Name        : Function_2.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fac(int x);

int main(void)
{
	int n;
	printf("enter a positive integer ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	printf("factorial of %d = %d",n,fac(n));
}

int fac(int x)
{
	int i=x-1;

	for (;i>=1;i--)
	{
		x*=i;
		fac(i);
	}
	return x;
}
