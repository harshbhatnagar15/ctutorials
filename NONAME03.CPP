#include<iostream.h>
#include<conio.h>

class pen
{
private:
	int a,b;
public:
	void get()
	{
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	}

	void show()
	{
	cout<<"a is: "<<a<<endl;
	cout<<"b is : "<<b<<endl;
	}
};

void main()
{
clrscr();

pen ob;

ob.get();
cout<<"\n----- output -----\n\n";
ob.show();

getch();
}