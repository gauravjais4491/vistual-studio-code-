#include<iostream>
#include<math.h>
using namespace std;
void area(float);
void area(int);
void area(int,int);
void area(int,int,int);
int main()
{
	float r=2.3;
	int side=5;
	int length=4,breath=8;
	int a=3,b=5,c=4;
	area(r);
	area(side);
	area(length,breath);
	area(a,b,c);
	return 0;
	
}
void area(float r)
{
	cout<<"area of circle"<<3.14*r*r<<endl;
}
void area(int side)
{
   cout<<"area of squre"<<side*side<<endl;	
}
void area(int a,int b,int c)
{
	float s;
	s=(a+b+c)/2;
	float area=s*(s-a)*(s-b)*(s-c);
	cout<<"area of traingle"<<sqrt(area)<<endl;
}
void area(int length,int breath)
{
	cout<<"area of rctangle"<<length*breath<<endl;
}
