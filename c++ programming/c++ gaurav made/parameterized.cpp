//PARAMETERIZED CONSTRUCTOR
#include<iostream>
using namespace std;
class Rectangle
{
	int length,breadth;
	public:
	Rectangle()
	{
		length=7;
		breadth=2;
	}
	void area()
	{
		int area;
		area=length*breadth;
		cout<<"area is: "<<area<<endl;
	}
};
int main()
{
	Rectangle r1;
	Rectangle r2;
	Rectangle r3;
	r1.area();
	r2.area();
    r3.area();
}
