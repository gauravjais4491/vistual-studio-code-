#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the three value");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is greatest");
    }
    else if(b>a && b>c)
    {
    	printf("b is greatest");
	}
	else
	{
		printf("c is greatest");
	}
}
