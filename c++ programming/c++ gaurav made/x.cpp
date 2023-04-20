// Create a class named Visitor. Include 3 private data members named name (string), gender (char) and 
// age (int).
// Include functions named initializeData – In this function, get the values of all the 3 data members from the 
// user.
// displayData() – In this function, display the personalized welcome message displaying name of the visitor 
// along with his/her age.
// countVisiters() – how many visitor objects have been created
// compareNames() – compare the names of two visitors


#include<iostream>
#include<string>
using namespace std;
class Visitor
{
   

    string name;
    char gender;
    int age;
    public:
    
    void initializeData()
 {
     cout<<"enter your name: ";
     cin >> name;
     cout<<endl;

     cout<<"enter your gender: ";
     cin >> gender;
     cout<<endl;

     cout<<"enter your age: ";
     cin>>age;
      cout<<endl;
 }
 void displaydata()
 {
 cout<<"wellcome"<<name<<"your age is"<<age;
 }    
};

int main(){
Visitor a;
a.initializeData();
a.displaydata();
return 0;
}