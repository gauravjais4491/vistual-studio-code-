#include<stdio.h>
int callref(int b[], int c);
main()
{


  {
	int a[5]={2,4,6,8,10};
	callref(a,5);
  }  
    
	int callref(int b[],int c)
	{
		int d;
		for(d=0;d<c;d++)
	    {
			b[d]=b[d]*2;

		}

	}
	printf("b[d]");
}
	
