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

class pqr:public xyz
{
public:
	void f3()
	{
	cout<<"this is class pqr\n";
	}
};
void main()
{
clrscr();

pqr ob;

ob.f1();
ob.f2();
ob.f3();
getch();
}
