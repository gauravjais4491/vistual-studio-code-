#include<iostream>
using namespace std;
class search
{
	int a[100],n;
	public:
	void getdata()
	{
		cout<<"enter no of elements: ";
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"enter value: ";
			cin>>a[i];
		}
	}
	void display()
	{
		cout<<"elements of array\n";
		for(int i=0;i<n;i++)
		    cout<<a[i]<<" ";
	}
	void linear();
	
};   
void search::linear()
{
	int key,i;
	cout<<"\nenter elements to search: ";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		cout<<"\nelement found at "<<i+1;
			break;
		}
	}
	if(i==n) cout<<"\nelement not found";
}
int main()
{
     search ob;
     ob.getdata();
     ob.linear();
     return 0;
}
 

