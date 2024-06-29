/*
 ============================================================================
 Name        : EX7.c
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
	int x,f=1;
	for (int a=1;a<3;a++)
	{
		printf("enter an integer\n ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&x);
		if (x<0)
			printf("Error!! factorial of negative number doesn't exist\n");
		else
		{
			for (int i=1;i<=x;i++)
				f=f*i;
			printf("factorial = %d",f);
		}
	}
}
