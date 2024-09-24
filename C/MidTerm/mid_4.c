/*
 ============================================================================
 Name        : mid_4.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void rev();
int main(void)
{
   rev();
}

void rev()
{
	char n[100];
	int a[100];
	printf("enter the number ");
	fflush(stdin);  fflush(stdout);
	scanf("%s",n);
	int z=strlen(n);
	for (int i=0;i<z;i++)
	{
		a[i]=n[i]-'0';
	}

	for(--z;z>=0;z--)
		printf(" %d",a[z]);
}
