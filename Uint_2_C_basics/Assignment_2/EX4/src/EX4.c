/*
 ============================================================================
 Name        : EX4.c
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
	float i;
	for (int k=0;k<2;k++)
	{
		printf("enter the number\n");
		fflush(stdout); fflush(stdin);
		scanf("%f",&i);
		if (i>0)
			printf("%f is positive\n",i);
		else if (i<0)
			printf("%f is negative\n",i);
		else
			printf("you entered zero\n");


	}
}
