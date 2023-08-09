#include<iostream.h>
#include<conio.h>

class xyz;

class abc
{
public:
int a;
	friend void sum(abc, xyz);
};

class xyz
{
public:
int x;
	void sum(abc, xyz);
};

void sum(abc t1, xyz t2)
{
int s;
s=t1.a + t2.x;
cout<<"sum is: "<<s;
}

void main()
{
clrscr();

abc ob1;
ob1.a=10;

xyz ob2;
ob2.x=20;

sum(ob1, ob2);

getch();
}
