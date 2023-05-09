#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

int num;

printf("Enter number: ");
scanf("%d", &num);

if(num==10)
{
printf("welcome");
}
else
{
printf("invalid");
}

getch();
}