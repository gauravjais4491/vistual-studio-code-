#include<stdio.h>
main()
{
	int ar[5]={2,4,6,8,10};
	int i,loc=-1,a;
	printf("enter the number that we search in arrey");
	scanf("%d",&a);
	for(i=0;i<5;i++)
	{
		
			if(ar[i]==a)
			{
					loc=i+1;
		            break;
			}
		}
            if(loc!=-1)
            {
            	printf("element found at %d",loc);
			}
		
		
	
	
}
