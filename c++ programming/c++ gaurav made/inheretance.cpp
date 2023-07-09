#include<iostream>
using namespace std;
class base
{
	
	public:
		int num1;
	    int num2;4
		void getdata()
		{
			num1=10;
			num2=20;
		}
		void display()
		{
			cout<<"  "<<num1<<"  ";
			cout<<"  "<<num2<<endl;
		}
};
class derived:public base
{
	int num3;
	public:

		void get()
		{
			num2=30;
			num3=40;
		}
		void disp()
		{
		    cout<<"  "<<num1<<"  ";	
			cout<<"  "<<num2<<"  ";
			cout<<"  "<<num3<<endl;
		}
};

int main()
{
	derived d;
	d.getdata();
	d.display();
	d.get();
	d.disp();
	return 0;
}
