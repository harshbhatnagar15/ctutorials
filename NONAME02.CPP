#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int cci,tab,num;
printf("enter number :");
scanf("%",&num);

for(i=1;i<=10;i++)
{
tab=i*num;

printf("%d x %d=%d\n",i,num,tab);
}

getch();
}