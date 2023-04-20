#include<stdio.h>
main()
{
    int a[2][2]={{2,4},{1,0}};
	 int b[2][2]={{2,5},{6,0}};
	 int sum=0, i, j, k;
	 int c[i][j];
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          sum=0;
            for(k=0; k<2; k++)
			{
			     
                sum = sum + a[i][k] * b[k][j];
		}
		
            c[i][j] = sum;
           
       }
    	
    }
    printf("multiplication result of the two given matrix\n ");
    
   
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
		{
		
            printf("%d\t", c[i][j]);	
		
      }
        printf("\n");
    
    }
    
    return 0;
}
