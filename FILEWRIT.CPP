#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
{
clrscr();

ofstream fw("demo.txt");

fw<<"hello to c++ file handling...";
fw.close();

cout<<"writing done.";

getch();
}
