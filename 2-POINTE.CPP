#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

int num=10;
int *ptr;

printf("value of num is: %d\n", num);
printf("address of num is: %u\n", &num);

ptr=&num;

printf("value of num in ptr is: %d\n", *ptr);
printf("address of num in ptr is: %u\n", ptr);
printf("address of ptr is: %u\n", &jptr);

getch();
}



