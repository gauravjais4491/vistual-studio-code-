#include<stdio.h>
int fact(int n);
main()
{
     int a,b;
     printf("enter a:");
     scanf("%d",&a);
     b=fact(a);
     printf("\n fact is : %d",b);
     
     
}
int fact(int n)
{

if(n>=1)
{
	return(n*fact(n-1));
}
else
{
	return(1);
}
}
