#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

FILE *fp;

fp=fopen("changu.txt", "w");

for(int i=1; i<=500; i++)
{
fprintf(fp,"%d\t",i);
printf("%d\t",i);
}

fclose(fp);
printf("writing done..");

getch();
}
