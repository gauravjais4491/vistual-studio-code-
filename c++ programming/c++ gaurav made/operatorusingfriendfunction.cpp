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
    void display();
    	friend complex operator+(complex,complex);
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

complex operator+(complex c1,complex c2)
{
	complex temp;
	temp.x=c1.x+c2.x;
	temp.y=c1.y+c2.y;
	return temp;
}
int main()
{
	complex c1,c2,c3;
	c1.getdata(2.5,7.6);
	c2.getdata(2.9,5.7);
	c1.display();
	c2.display();
	c3=c1+c2;                    //c3=operator+(c1,c2)
	c3.display();
	return 0;
}
