#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	
	
	printf("enter the value of matrix a[2][2]");

	for(i=0;i<2;i++)
	
		for(j=0;j<2;j++)
		{
			scanf("%d\t",&a[i][j]);
		}
	
   
   
   
    printf("enter the value of matrix b[21][2]\n");
	for(i=0;i<2;i++)
     
     	for(j=0;j<2;j++)
     	{
     		scanf("%d\t",&b[i][j]);
		}
	 
  

	 
	 
	 for(i=0;i<2;i++)
	 
	
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		
		}
	printf("\nTHE VALUES OF MATRIX C ARE:\n");
	for(i=0;i<2;i++)
        {
		for(j=0;j<3;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	   }
}

		
	



        
	

