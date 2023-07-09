#include<iostream>
using namespace std;
class complex
{
	float x;
	float y;
	public:
		complex()
		{
			x=0;
			y=0;
		}
    void getdata(float real,float image);
    complex operator+(complex );
    void display();
    	friend void operator+(complex);
};

void complex::getdata(float real,float image)
{
	x=real;
	y=image;
}
void complex::display()
{
	cout<<x<<"+j"<<y<<endl;


};

complex complex::operator+(complex c)
{
	complex temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	return temp;
}
int main()
{
	complex c1,c2,c3;
	c1.getdata(2.5,7.6);
	c2.getdata(2.9,5.7);
	c1.display();
	c2.display();
	c3=c1+c2;                    //c3=c1.operator+(c2);
	c3.display();
	return 0;
}
