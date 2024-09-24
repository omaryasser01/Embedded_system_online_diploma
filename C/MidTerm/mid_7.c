/*
 ============================================================================
 Name        : mid_7.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int);
int main(void)
{
	int i=100,s;
	s=sum(i);
	printf("%d",s);
	return 0;
}


int sum(int x)
{
	if (x==1)
		return 1;
	else
		return x+sum(x-1);

}
