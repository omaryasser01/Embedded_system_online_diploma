/*
 ============================================================================
 Name        : EX8.c
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
	char x; float a,b;
	printf("enter operator\n");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	printf("enter two operands\n");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&a,&b);
	switch(x)
	{
	case '+' :
		printf("%f+%f=%f",a,b,a+b);
		break;
	case '-':
		printf("%f-%f=%f",a,b,a-b);
		break;
	case '*':
		printf("%f*%f=%f",a,b,a*b);
		break;
	case '/':
		printf("%f/%f=%f",a,b,a/b);
		break;
	}
}
