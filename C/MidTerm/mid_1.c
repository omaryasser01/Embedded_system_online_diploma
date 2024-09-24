/*
 ============================================================================
 Name        : mid_1.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sum();
int main(void)
{
	sum();
}

void sum ()
{
	char n[100];
	int a[100],s=0;
	printf("enter the number ");
	fflush(stdin);  fflush(stdout);
	scanf("%s",n);
	for (int i=0;i<strlen(n);i++)
	{
		a[i]=n[i]-'0';
	}
	for(int z=0;z<strlen(n);z++)
		s+=a[z];
	printf("output: %d",s);
}
