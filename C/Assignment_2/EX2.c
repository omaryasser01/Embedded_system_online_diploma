/*
 ============================================================================
 Name        : EX2.c
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
	char z;
	for (int i=0;i<2;i++)
	{

	printf("enter an alphabet\n");

	fflush(stdout);fflush(stdin);
	scanf("%c",&z);
	if (z=='a' || z=='i' || z=='e' || z=='o' || z=='u')
		printf("%c is vowel\n",z);
	else
		printf("%c is consonant\n",z);
}
}
