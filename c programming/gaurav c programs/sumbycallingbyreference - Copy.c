#include<stdio.h>
int sum(int *x, int *y);
main()
{
	int x,y,res;
	printf("enter the value");
	scanf("%d%d",&x,&y);
	printf("address is:%d",&x);
	res=sum(&x,&y);
	printf("result is %d",res);
	
}
int sum( int *x, int *y)
{
	int z;
	z=*x+*y;
	return(z);
   }   
