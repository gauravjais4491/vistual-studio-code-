#include<iostream>
#include<conio.h>
using namespace std;
int fun(int &anotherref);
int main()
{
	int a=20,&refval=a;
	cout<<refval++;
	cout<<fun(refval);
	getch();
	
}
int fun(int &anotherref)
{
	return anotherref++;
}
