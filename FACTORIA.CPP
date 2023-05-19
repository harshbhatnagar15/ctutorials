#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int a,b,c,i,num;
a=1;
b=2;

printf("Enter repeatition: ");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
c=a+b;
printf("%d\t", c);
a=b;
b=c;
}
getch();
}