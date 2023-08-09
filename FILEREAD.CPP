#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

FILE *fp;
char ch;

fp=fopen("changu.txt", "r");

while(!feof(fp))
{
ch=getc(fp);

printf("%c", ch);
}

fclose(fp);
printf("\n\nreading done..");

getch();
}
