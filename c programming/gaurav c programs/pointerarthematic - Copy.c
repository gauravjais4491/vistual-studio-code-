#include<stdio.h>
main()
{
	int a[5]={2,5,3,8,5};
	int *p,*p1;
	p=a;
	p1=&a[4];
	printf("%p%p",p,p1);
	printf("%p",(p+2));
	printf("%d\n",*(p+2));
	p=a;
	printf("%d \n",++*(p+2));
	printf("%d",*(p+2));
	
}
