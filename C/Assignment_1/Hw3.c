/*
 ============================================================================
 Name        : Hw3.c
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
	int x,y,sum=0;
	printf("enter two integers");
	fflush(stdin);  fflush(stdout);
	scanf("%d\n%d",&x,&y);
	sum=x+y;
	printf("sum : %d",sum);
	return 0;
}
