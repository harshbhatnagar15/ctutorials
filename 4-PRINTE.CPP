#include<stdio.h>
#include<conio.h>

void cashback(int *amt)
{
	*amt=* amt+30;
}

void main ()
{
clrscr();

int num;

num=100;

cashback(&num);

printf("num is: %d", num);

getch();
}