#include<stdio.h>
int fact(int a);
main()
{
	int a,b;
	printf("enter the value of a ");
	scanf("%d%d",&a);
	b=fact(a);
	printf("\n fact is:%d",b);
	
	
	if(a>=1)
	{
		b=a*fact(a-1);
		printf("fact is %d",b);
		
	}
	
	else
	{
		printf("fact is",a);
	}
}
