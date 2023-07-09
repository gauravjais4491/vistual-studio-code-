#include<stdio.h>
main()
{
	int a=2;
	int b=4;
	int sum;
	printf("the value of a and b : %d\t%d",a,b);
	sum=add(a,b);
	printf("\n the sum is: %d",sum);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

