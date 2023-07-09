#include<iostream>
using namespace std;
int main()
{
	int i=6;
	char c='a';
	void *ptr;
	ptr=&i;
	cout<<"\n data points to the integer value  "<<*(int*)ptr;
	ptr=&c;
	cout<<"\n data now points to the character "<<*(char*)ptr;
	return 0;
}
