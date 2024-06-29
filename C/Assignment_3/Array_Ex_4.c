/*
 ============================================================================
 Name        : Array_Ex_4.c
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
	int n,i,l;
	printf("enter number of elements\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	int a[100];
	for(int x=0;x<n;x++)
	{
		a[x]=x+1;
		printf("%d\t",a[x]);
	}
	printf("\n");
	printf("enter element to be inserted\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i);
	printf("enter the location\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&l);
	for (int y=n;y>=l;y--)
	{
		a[y]=a[y-1];
	}
	a[l-1]=i;
	for(int z=0;z<n+1;z++)
	{
		printf("%d\t",a[z]);
	}

}


