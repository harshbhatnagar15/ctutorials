#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int i,j,arr[5],temp;

for(i=0; i<5; i++)
{
printf("enter the number :");
scanf("%d",&arr[i]);
}

for (i=0; i<5; i++)
{
	for (j=0; j<4-i; j++)
	{
		if(arr[j] > arr[j+1])
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		}
	}
}
printf("\n------- sorted array --------\n\n");

for(i=0; i<5; i++)
{
printf("%d\n", arr[i]);
}


getch();
}

