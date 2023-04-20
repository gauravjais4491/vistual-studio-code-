#include<iostream>
using namespace std;
class student
{
	char name[30];
	int rollno;
	float marks;
	public:
		void getdata()
		{
			cout<<"enter name:";
			cin>>name;
			cout<<"\nenter rollno:";
			cin>>rollno;
			cout<<"\nenter marks:";
			cin>>marks;
		}
		void putdata()
		{
			cout<<name<<"\n"<<rollno<<"\n"<<marks<<"\n";
		}
};
		int main()
		{
			student s1,s2,s3;
			s1.getdata();
			s2.getdata();
			s3.getdata();
			
			s1.putdata();
			s2.putdata();
			s3.putdata();
			return 0;
		}


