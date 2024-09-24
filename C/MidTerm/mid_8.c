/*
 ============================================================================
 Name        : mid_8.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev();
int main(void)
{

	rev();
	return 0;
}

void rev()
{
	char c[100];
	printf("enter text: ");
	fflush(stdin); fflush(stdout);
	gets(c);
	for (int i=0;i<strlen(c);i++)
	{
		if (c[i]==' ')
		{
			for (++i;i<=strlen(c);i++)
			{

				printf("%c",c[i]);

			}

		}

	}
	for (int z=0;z<strlen(c);z++)
	{
		if (c[z]!=' ')
			printf("%c",c[z]);
		else if (c[z]==' ')
			break;
	}
}
