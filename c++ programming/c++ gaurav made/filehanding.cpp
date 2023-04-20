#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
//	clrscr();
	ifstream fin;
	char ch;
	fin.open("file.data");
	//ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();

}
    fin.close();
	getch();
}
