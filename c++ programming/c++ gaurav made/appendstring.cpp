#include<iostream>
using namespace std;
main()
{
	string s1("12345");
	string s2("abcde");
	string s3;
	s3=s1.append(s2);
	cout<<"s3 is: "<<s3;
	s3=s1.append(s2,1,3);
	cout<<"s3 is: "<<s3;
}
