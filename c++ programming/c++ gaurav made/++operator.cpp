#include<iostream>
using namespace std;
class space
{
	int x,y,z;
	public:
		void getdata(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<x<<"    "<<y<<"    "<<z<<endl;
		}
		friend void operator++(space &ob);
	
};
	void operator++(space &ob)
		{
	++ob.x;
	++ob.y;
	++ob.z;
		}
int main()
{
	space s;
	s.getdata(10,-20,4);
	s.display();
	++s;
	s.display();
}
