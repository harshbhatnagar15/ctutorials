#include<stdio.h>
#include<conio.h>

struct pen
{
int price;
char brand[10];
};

void main()
{
clrscr();
int i;
pen ob[3];

for(i=0; i<3; i++)
{
printf("Enter price: ");
scanf("%d",&ob[i].price);

printf("Enter brand: ");
scanf("%s",&ob[i].brand);
}

printf("\n---- output -----\n\n");

for(i=0; i<3; i++)
{
printf("Price is: %d\n", ob[i].price);
printf("Brand is: %s\n\n", ob[i].brand);
}

getch();
}
