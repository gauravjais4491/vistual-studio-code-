#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1("12345");
	string s2("abcde");
	
	cout<<s1<<"  "<<s2<<endl;
	s1.insert(4,s2);         //s1=1234abcde5
	cout<<s1<<"  "<<s2<<endl;
	s1.erase(3,4);         //S1=1235
	cout<<s1<<"  "<<s2<<endl;
	s2.replace(1,3,s1);       
	cout<<s1<<"  "<<s2<<endl;
	s2.append(s1,2,3);
	cout<<s1<<"  "<<s2<<endl;
}
