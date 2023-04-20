//pointer to areey
#include<iostream>
using namespace std;
main()
{
	int i;
	int a[5]={10,20,30,40,50};
	int *p; 
	p=&a[0];   
	for(i=0;i<5;i++)
	{
		cout<<p+i<<endl;
	}
	for(i=0;i<5;i++)
	{
	      cout<<*(p+i)<<endl;	
	}
	
}
