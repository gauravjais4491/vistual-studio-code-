#include<stdio.h>
main()
{
	int i,sume=0,sumo=0;
	int a[10]={1200,33,79,96,2,9,5,33,77,56};
	for(i=0;i<=10;i++)
	{
		if(a[i]%2==0)
		{
			sume=sume+a[i];
	    }
		else
		
			sumo=sumo+a[i];
	
	}
	printf("%d\n",sume);
	printf("%d\n",sumo);
	
}
