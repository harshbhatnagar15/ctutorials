#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

char name[10];
int i=0, flag=0, j,k;

printf("Enter name: ");
scanf("%s", &name);

while(name[i]!='\0')
{
i++;
}
i=i-1;

j=i;

for(k=0; k<=i; k++)
{
	if(name[k]!=name[j])
	{
	flag=1;
	break;
	}
j--;
}

if(flag==0)
printf("Palindrome");
else
printf("not palindrome");

getch();
}