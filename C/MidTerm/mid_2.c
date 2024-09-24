#include <stdio.h>
#include <stdlib.h>
float sqr(int);
int main(void)
{
	int n;
	float result;
	printf("enter the number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	result=sqr(n);
	printf("output: %f",result);


}

float sqr(int x)
{
	float z,y;
	float i=0.1;
	for( i;i<x;i+=0.1)
	{
		z=i*i;
		if ((int)z==x)
		{
			y=i;
			break;
		}



	}

	return y;
}
