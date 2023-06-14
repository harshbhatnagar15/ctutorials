#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[5],i,sum=0;
for (i=0;i<5;i++)
{
printf("enter element:");
scanf("%d",&arr[i]);
}
printf("\n--------- space ---------\n");
	for (i=0; i<5; i++)
	{
	printf("%d\n",arr[i]);
	sum=sum+arr[i];
	}
	printf("sum of array is= %d",sum);

getch();
}