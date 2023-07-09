#include<stdio.h>
#include<string.h>
main()
{
	int a;
	char str[6]="HELLO";
	char str1[6]="Hello";
	a=strncmp(str,str1,3);
	printf("%d",a);
}
