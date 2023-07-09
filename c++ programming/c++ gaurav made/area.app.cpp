#include<iostream>
#include<math.h>
using namespace std;
void area(float);
void area(int);
void area(int,int);
void area(int,int,int);
main()
{
	float r=10.5;
	int a=2;
	int x=4,y=5,z=6;
	int length=20,breadth=30;
    area( r);
	area(length,breadth);
	area(x,y,z);
	area(a);
	return 0;	
}
void area(float r)
{
	cout<<"area of circle is: "<<3.14*r*r<<endl;
}
void area(int a)
{
	cout<<"area of squre is: "<<a*a<<endl;
}
void area(int length,int breadth)
{
    cout<<"area of rectangle is: "<<length*breadth<<endl;
}
void area(int a,int b,int c)
{
	float s;
	s=(a+b+c)/2;
	float area=s*(s-a)*(s-b)*(s-c);
	cout<<"area of traingle is: "<<sqrt(area)<<endl;
}
