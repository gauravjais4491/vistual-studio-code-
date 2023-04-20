#include<iostream>
using namespace std;
void print();	                                               //func declaration
int main()
{
    cout<<"no parameter and no return value\n";
    print();		                                                //func calling
    return 0;
}
void print()	                                             //func defination
{
    for(int i=1;i<=30;i++)
    {
        cout<<"*";
    }
}

