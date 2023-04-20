#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=200,b=400;
	cout<<setfill('*');
	cout<<setfill('+');
	cout<<setw(10)<<"Name"<<setw(10)<<"Rollno"<<endl;
	cout<<setw(10)<<"abcd"<<setw(10)<<10<<endl;
	cout<<setw(10)<<"john"<<setw(10)<<20<<endl;
	cout<<setw(10)<<"sohan"<<setw(10)<<30<<endl;
	return 0;
}
