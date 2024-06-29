/*
 ============================================================================
 Name        : EX5.c
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
	char i;
	for (int z=0;z<3;z++)
	{
		printf("enter a character\n");
		fflush(stdout);fflush(stdin);
		scanf("%c",&i);
		if (i>='A'&&i<='Z')
			printf("%c is an alphabet\n",i);
		else if (i>='a'&&i<='z')
			printf("%c is an alphabet\n",i);
		else
			printf("%c is not an alphabet\n",i);
	}
}
