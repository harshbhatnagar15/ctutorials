//write a programme to calculate the sum of 2 number by using pointer

#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int a,b,c;
a=10;
b=20;

int *p1, *p2;

p1=&a;
p2=&b;

c=*p1 + *p2;

printf("sum is : %d", c);

getch();
}

