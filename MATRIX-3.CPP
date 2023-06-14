#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int i,j, mat1[3][3], mat2[3][3];

printf("\n--------- input matrxi 1 --\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
	{
	printf("enter element:");
	scanf("%d",&mat1[i][j]);
	}
}

printf("\n--------- input matrxi 2 --\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
	{
	printf("enter element:");
	scanf("%d",&mat2[i][j]);
	}
}

printf("\n----------output----------\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
      {
	printf("%d\t", mat1[i][j] + mat2[i][j]);
       }
printf("\n\n");
}
getch();
}






