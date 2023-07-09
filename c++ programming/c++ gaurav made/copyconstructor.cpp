#include<iostream>
using namespace std;
class counter
{
	int c;
	public:
		counter(int a)
		{
			c=a;
		}
		counter(counter &ob)
		{
			cout<<"copy constructor invoked: "<<endl;
			c=ob.c;
		}
		void display()
		{
			cout<<c<<endl;
		}
};
int main()
{
	counter ob1(10);
	counter ob2(ob1);
	ob1.display();
	ob2.display();
	return 0;
}
