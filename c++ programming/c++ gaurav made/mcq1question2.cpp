#include<iostream>
#include<fstream>
using namespace std;
int main()
{  
    ofstream of("result");
    of<<"data1"<<" ";
    of<<350;
    of.close();
    cout<<"data saved\n";
    return 0;
} 
