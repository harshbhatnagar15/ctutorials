#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

char name[20];
int i, count=0;
printf("Enter name: ");
scanf("%s", &name);
i=0;

while(name[i]!='\0')
{
	if(name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u')
	 {
	count++;
	}
i++;
}

printf("vowels is: %d", count);

getch();
}
