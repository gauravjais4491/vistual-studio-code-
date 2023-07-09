#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char s[300];
	ofstream fileout;
	ifstream filein;
	fileout.open("data",ios::app);
	fileout<<"hello world";
	fileout.close();
	filein.open("data",ios::in);
	filein.getline(s,300);
	cout<<s;
}
