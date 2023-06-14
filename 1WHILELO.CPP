//write a programme to display the digit of given no and
// reverse & vertical order

#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int num;
num=100;
printf("enter the number;");
scanf("%d",&num);
while(num>0)
{
num=num--;
printf("%d",num);
}
getch();
}