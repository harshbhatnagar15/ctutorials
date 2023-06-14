#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int arr[5],i,max;
for(i=0; i<5; i++)
{
printf("enter the element;");
scanf("%d",&arr[i]);
}
printf("\n-------output-------");
max=arr[0];
for(i=0;i<5;i++)
	{if(max<arr[i])
	max=arr[i];
	}
printf("\n the max value is" ,max);
}
getch();








