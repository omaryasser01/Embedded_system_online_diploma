/*
 * main.c
 *
 *  Created on: Aug 7, 2024
 *      Author: Mohamed2
 */

#include <stdio.h>
#define PI 3.14

int main()
{

	int radius;
	float area;
	printf("Enter the Radius :");
	fflush(stdout); fflush(stdin);
	scanf("%d",&radius);

	area=radius*radius*PI;
	printf("Area = %.2f",area);

	return 0;
}
