#include<iostream>
using namespace std;
int main()

{
    int i = 6;
	char c = ‘a’;
    void *data;

    data = &i;
	cout<<"\n data points to the integer value  "<<*(int*)data;
    
    data = &c;
    cout<<"\n data now points to the character "<<*(char*)data;
    return 0;
 }
