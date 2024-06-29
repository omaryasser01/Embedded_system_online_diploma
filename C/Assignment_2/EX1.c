/*
 ============================================================================
 Name        : EX1.c
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
	int x=0;
	for (int i=1;i<3;i++)
	{
		printf("please enter an integer number\n");
		fflush(stdout);
		scanf("%d",&x);
		if(x%2==0)
			printf("the number is even\n");
		else
			printf("the number is odd\n");
	}
}


