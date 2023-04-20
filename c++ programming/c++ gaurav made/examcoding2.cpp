#include<iostream>
using namespace std;
int  main()
{
    int a=5,c;
    void *p=&a;
    double b=3.14;
    p=&b;
    c=a+b;
    cout<<c<<"\n"<<p;
    return 0;
}
