#include<iostream.h>
#include<conio.h>

class test
{
int a,b;
public:
	test()
	{
	}

	test(int x, int y)
	{
	a=x;
	b=y;
	}

	void show()
	{
	cout<<a<<"x + "<<b<<endl;
	}

	test operator+(test t)
	{
	test temp;
	temp.a=a+t.a;
	temp.b=b+t.b;
	return temp;
	}
};

void main()
{
clrscr();

test ob1, ob2, ob3;

ob1=test(2,1);
ob2=test(3,2);

ob1.show();
ob2.show();

ob3=ob1+ob2;
cout<<"------\n";
ob3.show();

getch();
}
