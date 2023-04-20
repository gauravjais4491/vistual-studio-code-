#include<iostream>
using namespace std;
class M
{
	public:
		void display()
		{
			cout<<"m";
		}
};
class N
{
	public:
		void display()
		{
			cout<<"n";
		}
};
class P:public M,public N
{
	public:
		void show()
		{
			cout<<"p";
		}
};
int main()
{
	P ob;
	ob.show();
	ob.display();      //we write this then it write ob.M:display();     or ob.N:display()     then it will run
	return 0;
}
