#include<iostream>
using namespace std;
class baseclass
{
	protected:
		int x;
		int y;
		public:
			void getdata(int a,int b)
			{
				x=a;
				y=b;
			}
			void show()
			{
				cout<<"x is"<<x<<endl;
				cout<<"y is"<<y<<endl;
			}
};
class DerivedClass:public baseclass
{
	protected:
		int z;
	public:
		void getdata(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void show()
		{
			cout<<"x is"<<x<<endl;
			cout<<"y is"<<y<<endl;
			cout<<"z is"<<z;		
		}
};
int main()
{
	baseclass ob1;
	DerivedClass ob2;
	ob1.getdata(10,20);
	ob2.getdata(20,25,30);
	ob1.show();
	ob2.show();
	return 0;
	
}

