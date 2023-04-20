#include<stdio.h>
main()
{
	int a,b,c;
	float sum,sub,div,mult;
	printf("enter the value\n");
	scanf("%d%d",&a,&b);
	printf("enter the case number\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		{
	    	sum=a+b;
			printf("sum is %f\n",sum);
			break;
		}
		
		case 2:
		{
			sub=a-b;
			printf("sub is %f\n",sub);
				break;
		}
		case 3:
		{
		
			div=a/b;
			printf("div is %f\n",div);
			break;
		}
		
		case 4:{
			
		
			mult=a*b;
			printf("mult is %f\n",mult);
			break;
		}
	}
			
    
    return 0;
}
