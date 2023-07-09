#include<stdio.h>
main()
{
	int a,*p;
	a=5;
	p=&a;
	printf("%d\t%d\n",a,*p);
	printf("adress of %p%p",&a,p);
	printf("%p",*&p);
	printf("%p\n",&*p);
}
