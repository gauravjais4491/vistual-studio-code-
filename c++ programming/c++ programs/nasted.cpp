#include<iostream>
using namespace std;
struct date
{
	int dd;
	int mm;
	int yy;
};
struct student
{
	char name[20];
	int rollno;
	date dob;
};
int main()
{
	student s;
	cout<<"enter name :";
	cin>>s.name;
	cout<<"enter rollno:";
	cin>>s.rollno;
	cout<<"enter dob dd mm yy";
	cin>>s.dob.dd>>s.dob.mm>>s.dob.yy;
	cout<<"name="<<s.name<<"\n";
	cout<<"rollno="<<s.rollno<<"\n";
	cout<<"dob="<<s.dob.dd<<"  "<<s.dob.mm<<"  "<<s.dob.yy;
	return 0;
	
};
