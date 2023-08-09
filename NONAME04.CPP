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

pen ob, ob2;

printf("Enter price: ");
scanf("%d",&ob.price);

printf("Enter brand: ");
scanf("%s",&ob.brand);

printf("Enter price2: ");
scanf("%d",&ob2.price);

printf("Enter brand2: ");
scanf("%s",&ob2.brand);


printf("\n---- output -----\n\n");

printf("Price is: %d\n", ob.price);
printf("Brand is: %s\n\n", ob.brand);

printf("Price2 is: %d\n", ob2.price);
printf("Brand2 is: %s\n\n", ob2.brand);

getch();
}
