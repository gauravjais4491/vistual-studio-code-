#include<iostream>
using namespace std;
float SI(float p,float r=6.0,float t=1.0);
int main()
{
	float result;
	result=SI(100.0,5.0,3.0);
	cout<<"simple interst is"<<result<<"\n";
	result=SI(10000.0,5.5);
		cout<<"simple interst is"<<result<<"\n";
	result=SI(100);
	cout<<"simple interst is"<<result<<"\n";
	return 0;
	
}
float SI(float p,float r,float t)

{
	return (p*r*t)/100;
}
