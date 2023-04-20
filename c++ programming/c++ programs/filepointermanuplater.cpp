#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
	char s[30];                                        // in fstream no new file is create 
	ofstream fileout;                                  //in ifstream no new file is create
	fstream file;                                      //in ofstream a new file is create
	fileout.open("hello",ios::out);
	fileout<<"hello world";
	fileout.close();
	file.open("hello",ios::in|ios::out);
	cout<<file.tellg()<<endl;        //tellg says the position of get pointer
	cout<<file.tellp()<<endl;        //tellp says the position of put pointer
	file.seekp(3);
	file.seekg(4);
	cout<<file.tellg()<<endl;
	cout<<file.tellp()<<endl;
	
	file>>s;      //exersion operator
	cout<<s<<endl;   //insertion operator
}

