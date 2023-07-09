#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swipping\n a= %d,\nb= %d", a,b);
}
