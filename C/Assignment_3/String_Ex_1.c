/*
 ============================================================================
 Name        : String_Ex_1.c
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
	char a, text[100];
	int i,j=0;
	printf("enter a string\n");
	fflush(stdin); fflush(stdout);
	gets(text);
	printf("enter a character\n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	for (i=0;i<100;i++)
	{
		if(text[i]==a)
			j++;
		if(text[i]==0)
			break;
	}
	printf("Frequency of %c = %d",a,j);

}
