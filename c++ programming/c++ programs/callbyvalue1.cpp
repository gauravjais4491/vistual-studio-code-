#include<iostream>
using namespace std;
void sum(int y=20,int x=10,int z=30);
int main()
{
	 sum(1,2,3);
	 sum(1,2);
	 sum(1);
	 sum();
	 return 0;
}             
void sum(int x,int y,int z)
{
	int a;
	a=x+y+z;
	cout<<"sum is:"<<a<<"\n"; 
}                                       
