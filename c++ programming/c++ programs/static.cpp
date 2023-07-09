#include<iostream>
using namespace std;
class test
{
	int data;
	static int count;
	public:
		void setdata()
		{
			data=++count;
		}
		void showdata()
		{
			cout<<"object number:"<<data<<endl;
		}
		static void showcount()
		{
			cout<<"count:"<<count<<endl;
		}
};
int test::count;
int main()
{
	test t1,t2;
	t1.setdata();
	t2.setdata();
	test::showcount();
	test t3;
	t3.showdata();
	test::showcount();
	t1.showdata();
	t2.showdata();
	t3.showdata();
	return 0;
}
