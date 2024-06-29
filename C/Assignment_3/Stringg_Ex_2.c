/*
 ============================================================================
 Name        : String_Ex_2.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char text[100];
	int i,j=0;
	printf("enter a string\n");
	fflush(stdin); fflush(stdout);
	gets(text);
	for(i=0;i<100;i++)
	{
		if (text[i]==0)
			break;
		else
			j++;
	}
	printf("length of string = %d",j);
}
