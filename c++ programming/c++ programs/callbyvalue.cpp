#include<iostream>
using namespace std;
void sum(int x=10,int y=20);
int main()
{
	 sum(1,2);
	 sum(1);
	 sum();
	 return 0;
}             
void sum(int x,int y)
{
	int z;
	z=x+y;
	cout<<"sum is:"<<z<<"\n"; 
}                                              
