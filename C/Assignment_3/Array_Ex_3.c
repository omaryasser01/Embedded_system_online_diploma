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
	int r,c;

	printf("enter rows and columns of the matrix ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("enter elements of the matrix\n ");
	for (int i=0;i<r;i++)
	{
		for (int y=0;y<c;y++)
		{
			printf("enter element a%d%d ",i+1,y+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i][y]);
		}
	}
	printf("entered matrix: \n");
	for (int q=0;q<r;q++)
	{
		for (int w=0;w<c;w++)
		{
			printf("%d\t",a[q][w]);
		}
		printf("\n");
	}
	printf("\n");
	int b[c][r];
	printf("transpose of matrix: \n");
	for (int k=0;k<c;k++)
	{
		for (int l=0;l<r;l++)
		{
			b[k][l]=a[l][k];
			printf("%d\t",b[k][l]);
		}
		printf("\n");
	}
}
