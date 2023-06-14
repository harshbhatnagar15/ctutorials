
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[5],i,ser,flag=0;
for(i=0;i<5;i++)
{
printf("enter the element;");
scanf("%d",&arr[i]);
}
printf("enter the ser number;");
scanf("%d",&ser);
for(i=0;i<5;i++)
{
	if(ser==arr[i])
	{
	flag=1;
	break;
	}
}
if(flag==1)
{
printf("the number found");
}
	else
	{
	printf("number not found" ) ;
	}
getch();
}

