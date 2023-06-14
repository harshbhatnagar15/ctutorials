#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr [3] [3];
int i,j;
printf("enter the element of matrix \n");
printf("\n----------\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("enter the arr[%d][%d]element:",i,j);
	scanf("%d",&arr[i][j]);
	printf("\n");
	}
}
//printf("the matrix we have \n");
//printf("-------------------------\n");
//for(i=0;i<3;i++)
//{
//	for(j=0;j<3;j++)
//	{
//	printf("%d",arr[i][j]);
//	}
//	printf("\n");
//}
printf("\n--------------------\n");
printf("the diagonal matrix is :\n\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(i+j==2)
		printf("%d",arr[i][j]);
	}
	printf("\n\n");
}
printf("\n\n-----------------\n");
getch();
}







