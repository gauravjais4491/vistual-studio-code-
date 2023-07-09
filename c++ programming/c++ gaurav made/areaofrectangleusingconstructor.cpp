//PARAMETERIZED CONSTRUCTOR
#include<iostream>
using namespace std;
class Rectangle
{
	int length,breadth;
	public:
	Rectangle(int a,int b)
	{
		length=a;
		breadth=b;
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
	Rectangle r1(5,7);
	Rectangle r2(9,3);
	Rectangle r3(9,9);
	r1.area();
	r2.area();
    r3.area();
}
