#include<stdio.h>
main()
{
	int a,b,s;
	printf("enter the value");
	scanf("%d%d%", &a,&b);
	swap(a,b);
	printf("%d%d",a,b);	
}
int swap(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("%d%d",a,b);
	//return(a,b);
}
