/*
 ============================================================================
 Name        : String_Ex_3.c
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
	printf("enter the string\n");
	fflush(stdin); fflush(stdout);
	gets(text);
	char rev[100];
	int i,j=0;
	for(i=sizeof(text);i>=0;i--)
	{
		rev[j]=text[i];
		j++;
	}
	for(int x=0;x<=sizeof(rev);x++)
	{
		fflush(stdin); fflush(stdout);
		printf("%c",rev[x]);

	}
}
