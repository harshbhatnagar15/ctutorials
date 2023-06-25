#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

int arr[]={52,63,14,41,25,36,69};

int *ptr;

ptr=&arr[0];

for(int i=1; i<=7; i++)
{
printf("%d\n", *ptr);
}

getch();
}



