

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=0,sum=0;
	printf("enter positive number\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&i);
	for (int x=1;x<=i;x++)
		sum+=x;
	printf("sum = %d",sum);
}
