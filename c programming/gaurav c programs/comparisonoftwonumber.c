#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greatest");
		}	
	}
	 else if(b>c)
	 {
	 	printf("b is greatest");
	 }
	 else
	 {
	 	printf("c is greatest");
     }
}

