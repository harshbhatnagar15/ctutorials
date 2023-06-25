#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

char name[20];
int i;
printf("Enter name: ");
scanf("%s", &name);
i=0;

while(name[i]!='\0')
{
printf("%c\n", name[i]);
i++;
}

printf("length of name is: %d", i);

getch();
}



