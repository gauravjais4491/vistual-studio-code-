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
			void operator++()
		{
         	++x;
         	++y;      
	        ++z;
		}
			void operator++(int t)
		{
	        x++;
	        y++;      
	        z++;
		}
	
};

int main()
{
	space s;
	s.getdata(10,-20,4);
	s.display();
	++s;
	s.display();
	s++;
	s.display();
}
