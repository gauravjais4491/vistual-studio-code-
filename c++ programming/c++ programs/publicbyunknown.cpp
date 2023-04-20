#include<iostream>
using namespace std;
class sample
{
	private:
		int a;
		int b;
    public:
    	void getdata()
    	{
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    
		}
		void putdata()
		{
			cout<<a<<"\t"<<b<<"\t";
		}
};
int main()
{
	sample ob1,ob2,ob3;
	ob1.getdata();
	ob2.getdata();
	ob3.getdata();
	
	ob1.putdata();
	ob2.putdata();
	ob2.putdata();
	return 0;
	
}
