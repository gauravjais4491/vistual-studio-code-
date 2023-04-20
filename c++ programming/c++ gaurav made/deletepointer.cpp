#include<iostream>
using namespace std;
 int main()
{
    int *p;
    p=new int;

    *p=10;
    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;
    return 0;
}

