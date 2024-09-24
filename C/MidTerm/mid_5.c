/*
 ============================================================================
 Name        : mid_5.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void ones();
int main(void)
{
	ones();
}


void ones()
{
	int n,a[32],i=0,flag=0;
	printf("enter the number ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%2;
		i++;
		n/=2;
	}
	for (int z=0;z<i;z++)
	{
		if(a[z]==1)
			flag++;
	}
	printf("output: %d",flag);
}
