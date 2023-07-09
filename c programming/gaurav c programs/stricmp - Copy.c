#include<stdio.h>
#include<string.h>
main()
{
	int a;
	char str[5]="HELLO";
	char str1[5]="hello";
	a=stricmp(str,str1);
	printf("%d",a);
}
