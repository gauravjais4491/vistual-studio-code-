#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=200,b=400;
	cout<<setfill(*)<<a<<setfill(5)<<b<<endl;
	cout<<setfill(6)<<a<<setfill(6)<<b<<endl;
	cout<<setfill(7)<<a<<setfill(7)<<b<<endl;
	cout<<setfill(8)<<a<<setfil(8)<<b<<endl;
	return 0;
}
