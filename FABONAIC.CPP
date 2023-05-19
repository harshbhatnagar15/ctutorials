#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,num;
for(i=0; i<=10; i++) {
printf("%d\n",i);
}
num=i+(i--);
printf("%d\n",num);

getch();
}