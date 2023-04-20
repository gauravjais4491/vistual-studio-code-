#include<stdio.h>
int sum(int *x, int *y);
main()
{
	int x,y,res;
	printf("enter the value\n");
	scanf("%d%d",&x,&y);
	printf("address is:%d\n",&x);
	printf("address is %d\n",&y);
	res=sum(&x,&y);
	printf("result is %d\n",res);
	
}
int sum( int *x, int *y)
{
	int z;
	z=*x+*y;
	return(z);
   }   
