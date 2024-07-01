/*
 ============================================================================
 Name        : Array_EX_1.c
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
	float a[2][2],b[2][2],sum[2][2];
	printf("enter elements of first matrix \n");
	for (int x=0;x<2;x++)
	{
		for (int y=0;y<2;y++)
		{
			printf("Enter a%d%d ",x+1,y+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&a[x][y]);
		}
	}
	printf("enter elements of second matrix \n");
	for (int w=0;w<2;w++)
	{
		for (int z=0;z<2;z++)
		{
			printf("Enter b%d%d ",w+1,z+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&b[w][z]);
		}
	}
	printf("sum of matrix: \n");
	for (int c=0;c<2;c++)
	{
		for(int v=0;v<2;v++)
		{
			sum[c][v]=a[c][v]+b[c][v];
			printf("%f\t",sum[c][v]);
		}
		printf("\n");
	}
}
