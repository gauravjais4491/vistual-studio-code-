#include<iostream>
using namespace std;
class student
{
	protected:
		int marks;
	public:
		void getdata()
		{
			cout<<"enter marks=";
			cin>>marks;
		}
};
class test:public student
{
	protected:
		int m;
	public:
		void accept()
		{
		
		if(marks>60)
		{
			m=1;
		}
	}
};
class result:public test
{
	public:
		void check()
		{
		
		if(m==1)
		{
			cout<<"you have pass";
		}
		else
		{
			cout<<"you have not passed";
		}
	}
};
int main()
{
	result r;
	r.getdata();
	r.accept();
	r.check();
	return 0;
}
