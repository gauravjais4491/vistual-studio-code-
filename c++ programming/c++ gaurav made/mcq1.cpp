#include<iostream>
using namespace std;
static int x=5;
int main()
{
	x=9;
	{
		int x=4;
	}
	cout<<x;
	return 0;
}
