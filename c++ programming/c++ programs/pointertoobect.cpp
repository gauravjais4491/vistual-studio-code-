#include<iostream>
using namespace std;
class Distance
{
 	private:
 		int feet;
 		float inches;
 		
 	public:
	    void getdist()
		{
			cout<<"\nenter feet:";
			cin>>feet;
			cout<<"enter inches:";
			cin>>inches;
		}
		
		void showdist()
		{
			cout<<feet<<" feet"<<"\n"<<inches<< " inches\n";
		}	 
};
int main()
{
	Distance dist;
	dist.getdist();
	dist.showdist();
	Distance *distptr;
	distptr=&dist;
	
	distptr->getdist();
	distptr->showdist();
	cout<<endl;
	return 0;
}
