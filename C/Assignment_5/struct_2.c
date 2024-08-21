/*
 ============================================================================
 Name        : struct_2.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Sdistance{
	int x;
	float y;
}first,sec,sum;

int main(void)
{
	printf("enter information for 1st distance\n");
	printf("enter feet: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&first.x);
	printf("enter inch: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&first.y);
	printf("enter information for 2nd distance\n");
	printf("enter feet: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&sec.x);
	printf("enter inch: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&sec.y);
	sum.x=first.x+sec.x;
	sum.y=first.y+sec.y;
	while(sum.y>=12)
	{
		++sum.x;
		sum.y-=12;
	}
	printf("sum of distance =%d'-%f\"",sum.x,sum.y);

}
