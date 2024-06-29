/*
 ============================================================================
 Name        : Hw5.c
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
	char x;
	printf("enter character\n");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c=%d",x,x);
	return 0;
}
