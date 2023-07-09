#include<iostream>
using namespace std;
void mul(int,int);
int main()
{
    int a=10,b=20;
    mul(a,b);	 	                                                      //actual arguments
    return 0;
}
void mul(int x, int y)		                               //formal arguments
{
    int s;
    s=x*y;
    cout<<"mul is "<<s;
}

