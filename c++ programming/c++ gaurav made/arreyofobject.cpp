#include<iostream>
using namespace std;
class student
{
    char name[16];
    int roll_no;
    public:
        void getdata()
        {
            cout<<"enter name: ";
            cin>>name;
            cout<<"enter roll no: ";
            cin>>roll_no;
            cout<<endl;
        }
        void display()
        {
            cout<<"the name of the student = "<<name<<endl;
            cout<<"the roll no is=           "<<roll_no<<endl;
        }
};
int main()
{
    student a[5];
    int i;
    for(i=0;i<5;i++)
        a[i].getdata();

    for(i=0;i<5;i++)
        a[i].display();
    return 0;

}
