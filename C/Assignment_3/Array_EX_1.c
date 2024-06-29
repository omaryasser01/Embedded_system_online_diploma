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
	float a[2][2],b[2][2], sum [2][2] ;
	printf("enter elements of first array\n");
	for(int i=0; i<2;i++)
	{ for (int j=0;j<2;j++)
		{fflush(stdin); fflush(stdout);
		scanf("%f",&a[i][j]);}
	}
	printf("enter elements of second array\n");
	for(int e=0; e<2;e++)
		{ for (int q=0;q<2;q++)
			{fflush(stdin); fflush(stdout);
			scanf("%f",&b[e][q]);}
		}
	for(int z=0; z<2;z++)
	{
			 for (int x=0;x<2;x++)
				{sum[z][x]=a[z][x]+b[z][x];
			    printf("%f\n",sum[z][x]);
			  }
	}
}
