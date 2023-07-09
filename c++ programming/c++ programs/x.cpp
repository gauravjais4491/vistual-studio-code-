#include<iostream>
using namespace std;
int sum(int x,int y);   //function declaration
int main()
{
	int a=20;
	int b=30;
	int c;
	c=sum(a,b);       //function calling   //
	cout<<c;     
	return 0;
	
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
