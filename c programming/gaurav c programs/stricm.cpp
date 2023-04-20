#include<stdio.h>
#include<string.h>
main()
{
	int a;
	char str[6]="HELLO";
	char str1[6]="Hello";
	a=strcmp(str,str1);
	printf("%d",a);
}
