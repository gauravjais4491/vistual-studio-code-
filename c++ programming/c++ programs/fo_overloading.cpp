#include<iostream>
using namespace std;
void add(int,int);
void add(double,double);
void add(int,int,double);
int main()
{
	int a=10,b=20;
	
	double c=7.52, d=8.14;
	add(a,b);
	add(c,d);
	add(a,b,d);
	
	return 0;
	
}

void add(int x, int y)
{
	cout<<"\n sum is"<<x+y;
	
}

void add(double x, double y)
{
	cout<<"\n sum is "<<x+y;
	
}

void add(int x,int y,double z)
{
	cout<<"\n sum is "<<x+y+z;
	
}


