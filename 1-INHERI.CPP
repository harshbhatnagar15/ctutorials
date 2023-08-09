#include<iostream.h>
#include<conio.h>

class abc
{
public:
	void f1()
	{
	cout<<"this is class abc\n";
	}
};

class xyz:public abc
{
public:
	void f2()
	{
	cout<<"this is class xyz\n";
	}
};

void main()
{
clrscr();

xyz ob;

ob.f1();
ob.f2();

getch();
}
