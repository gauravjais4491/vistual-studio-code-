#include<stdio.h>
#include<string.h>
main()
{
	char str[6];
	int i;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
				
		str[i]=str[i]-32;
	}
	printf("%s",str);
}
