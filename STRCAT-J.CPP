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

printf("Enter name2: ");
scanf("%s", &name2);

strcat(name, name2);

printf("output is: %s", name);

getch();
}