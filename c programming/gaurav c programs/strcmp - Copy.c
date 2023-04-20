#include<stdio.h>
#include<string.h>
main()
{
	int a;
	char str[6]="HELLO";
	char str1[6]="HEllo";
	a=strcmp(str,str1);
	printf("%d",a);
}
