#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char s[30];
	ifstream ob;
	ob.open("abc.txt",ios::in);
	if(ob.fail()==1)
	{
		cout<<"file not found";
	}
	else
	{
		ob.getline(s,30);
		cout<<s;
	}
	return 0;
}

