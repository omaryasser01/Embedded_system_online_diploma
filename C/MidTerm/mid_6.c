/*
 ============================================================================
 Name        : mid_6.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void uni();
int main(void)
{
	uni();
}

void uni()
{
	int n,flag=1;
	printf("enter number of elements ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	int a[n];
	printf("enter elements ");
	for(int i=0;i<n;i++)
	{
		fflush(stdin);  fflush(stdout);
		scanf("%d",&a[i]);
	}
	for (int z=0;z<n;z++)
	{
		if(a[z]==a[z+1])
		{
			flag=0;
		}
	}

}
