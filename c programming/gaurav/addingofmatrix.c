#include<stdio.h>
#include<conio.h>
main()
{
	int a[2][2]={{2,4},{3,4}};
	int b[2][2]={{2,6},{8,5}};
	int c[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		//	int sum=0;
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
		for(i=0;i<2;i++)
	    {
	    	
		for(j=0;j<2;j++)
		
		   {
			printf("%d\t",c[i][j]);
		   }
		   printf("\n");
	
	    }
	
	return 0;
}
	
