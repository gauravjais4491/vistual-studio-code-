#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	
	
	printf("enter the value of matrix a[3][3]");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d\t",&a[i][j]);
		}
	}
   
   
   
    printf("enter the value of matrix b[3][3]\n");
	for(i=0;i<2;i++)
     {
     	for(j=0;j<2;j++)
     	{
     		scanf("%d\t",&b[i][j]);
		}
	 }
  

	 
	 
	 for(i=0;i<2;i++)
	 
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
		
		
	}



        
	
}
