#include<stdio.h>
main()
{
	int m,n,i,j;
	printf("enter the no. of row");
	scanf("%d",&m);
	printf("enter the no. of column");
	scanf("%d",&n);
	 int a[m][n],b[m][n],c[i][j];
	 {
	 	
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 	  printf("enter the value of matrix a\t");	
	 	  scanf("%d",&a[i][j]);
		}
		printf("\n");
	 }
	 
	 
     }
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("enter the value of matrix b\t");
	 		scanf("%d",&b[i][j]);
	 		
		 }
	
   
		 printf("\n");
	 }
	 printf("Sum of entered matrices:-\n");
	
   
	  for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 	   c[i][j]= a[i][j]+b[i][j];	
	 	}
	 }
	 
	  for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d\t",c[i][j]);
	 	}
	 	printf("\n");
	 }
	 return 0;
	 
	 
}
/*for (i= 0; i < m; i++) 
      {
      for (j= 0 ; j < n; j++)
	   {
         c[i][j] = a[i][j] + b[i][j];
       }
	 
	  }
	  for (i= 0; i < m; i++) 
      {
      for (j= 0 ; j < n; j++)
	   {
         printf("%d\t", c[i][j]);
     }
      
      printf("\n");
  }
   
 
   return 0;
}*/
