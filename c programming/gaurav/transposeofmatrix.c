#include<stdio.h>
main()
{	
    int i,j,m,n;	
	int a[i][j],c[i][j];

	printf("enter the no. of row and column");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the value of matrix");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
    }
	{
	for(i=0;i<m;i++)
	 {
		for(j=0;j<n;j++)
		{
		   c[j][i]=a[i][j];	
		}	
	  }
	  
    }
		printf("enter transpose of matrix:\n");
	{
	for(i=0;i<m;i++)
	  {
		for(j=0;j<n;j++)
		{
			printf("%d",c[i][j]);

		}  
		
	  } printf("\n");

	  
    }
}
