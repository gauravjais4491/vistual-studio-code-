#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value");
	scanf("%d%d%d", &a,&b,&c);
	d=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d is greatest",d);
}
