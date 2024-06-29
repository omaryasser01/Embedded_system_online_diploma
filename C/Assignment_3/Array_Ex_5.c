/*
 ============================================================================
 Name        : Array_Ex_5.c
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
	 int n,s;
	    printf("enter number of elements\n");
	    fflush(stdin); fflush(stdout);
	    scanf("%d",&n);
	    int a[n];
	    for(int x=0;x<n;x++)
	    {
	        a[x]=x+1;
	        printf("%d\t",a[x]);
	    }
	    printf("enter element to be searched\n");
	    fflush(stdin); fflush(stdout);
	    scanf("%d",&s);
	    for(int y=0;y<n;y++)
	    {
	        if (a[y]==s)
	        {
	            printf("number found at location %d\n",y+1);
	            break;
	        }
	    }
}
