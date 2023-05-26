#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int num,remi=0;
printf("enter the number" );
scanf("%d",&num);
while(num>0)
{
remi=num%10;
num=num/10;
printf("%d\n",remi);

}
getch();
}