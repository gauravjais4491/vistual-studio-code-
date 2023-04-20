#include<iostream>
using namespace std;
void sum(int x=10,int y=20);
int main()
{
	sum(1,2);
	sum(1);
	sum();
		cout<<"sum is: "<<sum;
	
	
}
void sum(int x,int y)
{
	int z;
	z=x+y;

	//return 0;
}
