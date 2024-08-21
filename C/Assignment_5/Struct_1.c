/*
 ============================================================================
 Name        : Struct_1.c
 Author      : omar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct Sstudent {
	char name[50];
	int roll;
	float marks;
}x;

int main(void)
{
	printf("enter information of students\n");
	printf("enter name: ");
	fflush(stdin);  fflush(stdout);
	gets(x.name);
	printf("enter roll number: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x.roll);
	printf("enter marks: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&x.marks);
	printf("Displaying information\nName: %s\nRoll: %d\nMarks: %f\n",x.name,x.roll,x.marks);

}
