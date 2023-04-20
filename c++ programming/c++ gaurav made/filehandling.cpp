#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    char s[10];
    ifstream inf("result");
    inf>>s;
    inf.close();
    cout<<s;
    return 0;
}

