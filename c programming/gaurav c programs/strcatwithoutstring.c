#include<stdio.h>
#include<string.h>
main()
{
	char str[6]="hello";
    char str1[3]="hi";
	char i=0,j=0;
	while(str!='\0')
	{
		i++;
	}
	while(str1[j]!='\0');
	{
	   str[i]=str1[j];
	   
	   i++;	
	   j++;
	}
	printf("%s",str);
}
