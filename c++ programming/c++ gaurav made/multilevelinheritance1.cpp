#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
		public:
			void get_no(int a)
			{
				roll_no=a;
			}
			void put_roll_no()
			{
				cout<<"roll number is="<<roll_no<<endl;
			}
};
class test:public student
{
	protected:
        float a,b;
    public:
    	void get_marks(float x,float y)
    	{
    		a=x;
    		b=y;
		}
		void put_marks()
		{
			cout<<"marks of a is="<<a<<endl;
			cout<<"marks of b is="<<b<<endl;
		}
        
};
class result:public test
{
	float total;
	public:
		void display();
};
void result::display()
{
	total=a+b;
	put_roll_no();
	put_marks();
	cout<<"total is="<<total;
}
int main()
{
	result student1;
	student1.get_no(20);
	student1.get_marks(20.3,30.5);
	student1.display();
	return 0;
}
