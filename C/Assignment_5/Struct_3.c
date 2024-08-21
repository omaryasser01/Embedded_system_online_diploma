/*
 ============================================================================
 Name        : Struct_3.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Scmp{
	float real;
	float img;
}num1,num2,s;

struct Scmp read(struct Scmp);
struct Scmp sum(struct Scmp,struct Scmp);

int main(void)
{
	printf("for the 1st complex number\n");
	num1=read(num1);
	printf("for the 2nd complex number\n");
	num2=read(num2);
	s=sum(num1,num2);
	printf("Sum=%f+%f\i",s.real,s.img);
}

struct Scmp read(struct Scmp x)
{
	printf("enter real and imaginary: ");
		fflush(stdin);  fflush(stdout);
		scanf("%f",&x.real);
		scanf("%f",&x.img);
		return x;
}

struct Scmp sum(struct Scmp a,struct Scmp b)
{
    struct Scmp c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}
