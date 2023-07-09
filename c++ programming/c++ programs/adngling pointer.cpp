//adngling pointer
 
#include<iostream>
using namespace std;
main()
{
int a=10;
int *p;
p=&a;
cout<<*p<<"\n";
delete p;
*p=20;
cout<<*p;
}
