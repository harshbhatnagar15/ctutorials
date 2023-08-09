#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
clrscr();

char name[10], name2[10];
int i=0;

printf("Enter name: ");
scanf("%s", &name);

printf("output is: %s", strupr(name));

getch();
}