#include<iostream>
using namespace std;
int max(int,int);
int main()
{
    int a=30,b=30,c;
    c=max(a,b);
    cout<<"greatest no is "<<c;
    return 0;
}
int max(int x, int y)
{
    if(x>y)
        return x;
    if(x=y)
        return(x+y);
    else
        return(y);
}

