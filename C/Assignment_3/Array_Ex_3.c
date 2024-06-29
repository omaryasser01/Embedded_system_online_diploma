/*
 ============================================================================
 Name        : Array_Ex_3.c
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
	int i,j;
	printf("enter rows and columns of matrix\n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&i,&j);
	int a[i][j];

	for (int x=0;x<i;x++)
	{
		for (int z=0;z<j;z++)
		{
			printf("enter elements of matrix\n");
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[x][z]);
		}
	}
	printf("entered matrix: \n");
	for (int x=0;x<i;x++)
		{
			for (int z=0;z<j;z++)
			{
				printf("%d\t",a[x][z]);
			}
			printf("\n");
		}
	printf("\n");
	int b[j][i];
	printf("transpose of matrix:\n");
	for (int q=0;q<j;q++)
			{
				for (int w=0;w<i;w++)
				{
					b[q][w]=a[w][q];
					printf("%d\t",b[q][w]);
				}
				printf("\n");
			}
}
