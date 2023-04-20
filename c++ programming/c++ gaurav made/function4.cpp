#include<iostream>
using namespace std;
int sum();
int main()
{
    int a=10,b=20;
    int c=sum();	                                                //actual arguments
    cout<<"sum is "<< c;
    return 0;
}
int sum()		                                                   //formal arguments
{
    int x=10,y=30;
    return(x+y);                                                    //return value
}

