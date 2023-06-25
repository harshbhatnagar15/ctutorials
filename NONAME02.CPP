#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

char name[20];
int i, temp;
printf("Enter alphabet: ");
scanf("%s", &name);
i=0;

while(name[i]!='\0')
{
	temp=(int)name[i];

	if(temp>=65 && temp<=90)
	{
	temp=temp+32;
	name[i]=(char)temp;
	}
i++;
}

printf("name is: %s", name);


getch();
}
