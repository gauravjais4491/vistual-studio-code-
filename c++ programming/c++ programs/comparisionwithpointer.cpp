#include<iostream>
using namespace std;
class student
{
	int rollno;
	float marks;
	public:
		void getdata(int x,float y)
		{
			rollno=x;
			marks=y;
		}
		student greater(student ob)
		{
			if(ob.marks>+marks)
			return ob;
			else
			return *this;
		}
		void display()
		{
			cout<<rollno<<"  "<<marks;
		}
};
int main()
{
	student ob1,ob2,ob3;
	ob1.getdata(10,30.5);
	ob2.getdata(20,9.5);
	ob3=ob1.greater(ob2);
	ob3.display();
	return 0;
}
