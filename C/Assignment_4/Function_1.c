/*
 ============================================================================
 Name        : Function_1.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime(int q);

int main(void)
{
	int a,b,check;
	printf("enter two numbers(intervals): ");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("prime numbers between %d and %d are: \t",a,b);
	for (int i=a+1;i<b;i++)
	{
		check=prime(i);
		if(check==0)
			printf("%d\t",i);
	}
	return 0;
}


int prime(int q)
{
	int flag=0;
	if(q%q==0)
	{
		for(int c=2;c<q;c++)
		{
			if(q%c==0)
			{
				flag=1;
				break;
			}
		}
	}
	else
		flag=1;
	return flag;
}
