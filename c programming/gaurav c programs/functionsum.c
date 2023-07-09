#include<stdio.h>
int sum(int x, int y);
main()
{
	int a,b,s;
	printf ("enter the value");
	scanf("%d%d", &a,&b);
	s=sum(a,b);
	printf("sum is %d",s);
	
}
    int sum(int x, int y)
{
    	
    int h;
    h=x+y;
    return h;
    
    
}
