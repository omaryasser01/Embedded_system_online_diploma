/*
 ============================================================================
 Name        : Function_3.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse();

int main(void)
{
	printf("enter a sentence: ");
	fflush(stdin);  fflush(stdout);
	reverse();
	return 0;
}

void reverse()
{
	char c;
	scanf("%c",&c);
	if (c!='\n')
	{
		reverse();
		printf("%c",c);
	}
}
