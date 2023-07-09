#include<iostream>
using namespace std;
class sample
{
	static int count;
	int number;
	public:
		void getdata(int a)
		
		{
			number=a;
			count++;
		}
		void getcount()
		{
			cout<<"  "<<"count="<<count;
		}
	
};
int sample::count;
int main()
{
	sample a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();
	a.getdata(28);
	b.getdata(37);
	c.getdata(23);
	cout<<"\n"<<"after reading data"<<"\n"<<"*****";

	a.getcount();
	b.getcount();
	c.getcount();
		cout<<"   "<<"*****";
}
