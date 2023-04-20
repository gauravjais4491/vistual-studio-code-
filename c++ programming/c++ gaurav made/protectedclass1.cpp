#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	void getdata(int m)
	{
		x=m;
	}
	void putdata()
	{
		cout<<x<<"  ";
	}
};
class B:protected A
{
	protected:
		int y;
		public:
		void get(int n)
		{
		   y=n;
		   getdata(8);
		}
		void put()
		{
		   cout<<y<<"  ";
		   putdata();
		   	
		}
		void sum()
		{
			int z;
			z=x+y;
			cout<<"sum is:"<<z;
			}	
			
};
int main()
{
	B b1;
	b1.get(10);
	b1.put();
	b1.sum();
	return 0;
}
