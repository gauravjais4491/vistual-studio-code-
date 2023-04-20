#include<iostream>
using namespace std;
main()
{
	int num,*intptr;
	float x,*floptr;
	char ch,*cptr;
	num=123;
	x=12.34;
	ch='a';
	intptr=&num;
	cptr=&ch;
	floptr=&x;
	cout<<"Num  "<<*intptr<<"\n"<<" stored at address  "<<intptr<<endl;
	cout<<"clo"<<*floptr<<"\n"<<"kilo"<<floptr<<endl;
	cout<<"Character "<<*cptr<<"\n"<<"stored at address"<<cptr<<endl;
}








