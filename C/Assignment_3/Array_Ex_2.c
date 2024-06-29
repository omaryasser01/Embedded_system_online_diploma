/*
 ============================================================================
 Name        : Array_Ex_2.c
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
	int n;
	float sum=0,avg;
	printf("enter number of data\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	float a[n];
	for (int i=0;i<n;i++)
	{
		printf("enter number ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	avg=sum/n;
	printf("average = %f",avg);
}
