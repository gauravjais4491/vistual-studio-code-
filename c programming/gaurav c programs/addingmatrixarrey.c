#include<stdio.h>
main()
{
	int i,j;
	int a[2][2]={{1,2},{2,4}};
	int b[2][2]={{3,4},{6,3}};
    int c[i][j];

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
			c[i][j]=a[i][j]+b[i][j];	
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",c[i][j]);
				
		}
			printf("\n");
	}
	return 0;
}
