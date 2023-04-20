#include<iostream>
using namespace std;
struct employee
{
	int code;
	char name[25];
	char dept[15];
	float salary;
};
int main()
{
	employee e;
	cout<<"enter code:";
	cin>>e.code;
	cout<<"enter name:";
	cin>>e.name;
	cout<<"enter dept:";
	cin>>e.dept;
	cout<<"enter salary:";
	cin>>e.salary;
	cout<<"code="<<e.code<<"\n";
	cout<<"name="<<e.name<<"\n";
	cout<<"dept="<<e.dept<<endl;
	cout<<"salary="<<e.salary<<endl;
	return 0;
}
