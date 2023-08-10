/*
 ============================================================================
 Name        : EX3.c
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
	float a,b,c;
	printf("enter three numbers\n");
	fflush(stdout); fflush(stdin);
	scanf("%f%f%f",&a,&b,&c);
	if (a>b&&a>c)
		printf("%f is the largest",a);
	else if (b>a&&b>c)
		printf("%f is the largest",b);
	else
		printf("%f is the largest",c);
}
