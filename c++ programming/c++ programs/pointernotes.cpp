#include<iostream>
using namespace std;
int main()
{
	int a;
	int *aptr;	
	a=7;
	aptr=&a;
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%p\n",aptr);
	printf("%p\n",&aptr);
	printf("%d\n",*aptr);
	*aptr=10;
	printf("%d\n",a);
    return 0;	
}

