#include<iostream>
using namespace std;
void add(int x,int y);   //function declaration
int main()
{
	int a=5;
	int b=6;
	add(a,b);     //function calling    //add(10,20) or  add(10+20,2+4)
	return 0;
	
}
void add(int x,int y)
{
	int z;
	z=x+y;
	cout<<z;
}
