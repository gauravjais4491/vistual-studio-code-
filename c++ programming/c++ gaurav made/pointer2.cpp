#include<iostream>
using namespace std;
int main()
{
	 int x;
	 int *ptr;

	 x = 10;
	 ptr = &x;

    cout<<x<<endl;

    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;

	 *ptr = *ptr + 1;
	 cout<< x;

   return 0;
}

