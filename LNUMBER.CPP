#include<stdio.h>
#include<conio.h>

viod main()

{
clrscr ();
int a,b,c;
printf("enter bthree different number\n ");
scanf("%d%d%d%d", &a,&b,&c );
if (a>b&&a>c)
{
printf("%d is largest number \n" ,a);

}
else if (b>a&&b>c)
{
printf("%d is largest number",b );

}
else
{
printf("%d is largest number \n",c );

}

getch();



}