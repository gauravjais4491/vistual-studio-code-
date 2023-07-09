#include<iostream>
using namespace std;
class sample
{ 
  		int a;
 		int b;
 	public:  

  		void setval()
   { 
     a=25;    b=40;
    }
 		friend float mean(sample s);
};
 float mean(sample s)
{         
     return (s.a+s.b)/2.0;
}

int main()
{	
	sample X;
    X.setval();
		cout<<mean(X);
    return 0;
}

