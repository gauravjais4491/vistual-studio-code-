#include<iostream>
using namespace std;
class data
{
	public:
		int a;
		void print()
		{
			cout<<"a="<<a;
		}
};
int main()
{
	data ob;
	int data::*ptr;
	ptr=&data::a;
	ob.*ptr=23;
	void(data::*p)();
	p=&data::print;
	(ob.*p)();
	
}
