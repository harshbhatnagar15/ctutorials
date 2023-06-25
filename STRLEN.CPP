#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
clrscr();

char name[10];
int i=0;

printf("Enter name: ");
scanf("%s", &name);

i=strlen(name);

printf("length is: %d", i);

getch();
}