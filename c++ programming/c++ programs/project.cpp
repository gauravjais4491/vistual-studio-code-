#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void add();
void del();
void display();
void search();
class student
{
	char name[30];
	float marks;
   public:
	int roll_no;
	void getdata()
	{
		cout<<"enter rollno";
                  cin>>roll_no;
		cout<<"enter name";
                  cin>>name;
		cout<<"enter marks";
                  cin>>marks;			
	}
	void putdata()
	{
		cout<<setw(10)<<roll_no;
		cout<<setw(10)<<name;
		cout<<setw(10)<<marks;
		cout<<endl;
	}
};

int main()
{
	ofstream ob("data");
	ob.close();
    int x;
    //ofstream obj("data");    obj.close();
    while(1){
     cout<<"1 Add\n";
	 cout<<"2 Delete\n";
	 cout<<"3 Display\n";
	 cout<<"4 Search\n";
	 cout<<"5 Exit\n\n";
     cout<<"Enter choice :"; cin>>x;
     switch(x)
     {
     	case 1: add(); break;
     	case 2: del(); break;
     	case 3: display(); break;
     	case 4: search(); break;
     	case 5: exit(0);
    	
	 }
   }    	
    return 0;
}
void add(){
	student ob; ob.getdata();
	fstream file;
	file.open("data",ios::ate|ios::binary|ios::in|ios::out);
	file.write((char*)&ob,sizeof(ob));
    file.close();
}
void display(){
	student ob;
	fstream file;
	file.open("data",ios::in);
	file.seekg(0,ios::beg);
			cout<<setw(10)<<"ROLLNO";
		cout<<setw(10)<<"NAME";
		cout<<setw(10)<<"MARKS";
		cout<<endl;
	while(file.read((char*) &ob,sizeof(ob)))
    ob.putdata();
    file.close();
}
void search(){
	int roll; cout<<"\nEnter roll no to search: ";
	cin>>roll;
	student ob;
	fstream file;
	file.open("data",ios::in);
	file.seekg(0,ios::beg);	
	while(file.read((char*) &ob,sizeof(ob))){
	if(ob.roll_no==roll)
	{
		cout<<setw(10)<<"ROLLNO";
		cout<<setw(10)<<"NAME";
		cout<<setw(10)<<"MARKS";
		cout<<endl;
		ob.putdata();
	}}
    file.close();
}
void del()
{


}
