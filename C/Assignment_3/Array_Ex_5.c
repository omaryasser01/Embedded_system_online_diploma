/*
 ============================================================================
 Name        : Array_Ex_5.c
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
	int n,s;
		printf("enter number of elements ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
		int a[n];
		for(int x=0;x<n;x++)
		{
			a[x]=(x+1)*11;
			printf("%d\t",a[x]);
		}
		printf("enter element to be searched ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&s);
		for (int i=0;i<n;i++)
		{
			if (a[i]==s)
			{
				printf("number found at location = %d ",i+1);

			}
			else printf("number not found");
			break;
		}
}
