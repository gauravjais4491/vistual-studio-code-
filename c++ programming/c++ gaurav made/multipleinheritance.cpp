#include<iostream>
using namespace std;
class A
{
	protected:
		
	     int num1;
	public:
	
		void get_num1(int x)
		{
			num1=x;
		}
		
};
class B
{
	protected:
		int num2;
	public:
		void get_num2(int y)
		{
			num2=y;
		}	
};
class P:public A,public B
{
	public:
		void display();
};
void P::display()
{
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
	cout<<"num1*num2="<<num1*num2<<endl;
}
int main()
{
	P p;
	p.get_num1(20);
	p.get_num2(30);
	p.display();
	return 0;
}
