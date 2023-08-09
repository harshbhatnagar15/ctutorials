#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
{
clrscr();
char ch;

ifstream fr("demo.txt");

while(fr)
{
fr.get(ch);
cout<<ch;
}

fr.close();

cout<<"\n\nreading done...";

getch();
}
