#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
	ofstream fout;
	fout.open("file.data");
	fout<<"hello world";
	getch();
}
