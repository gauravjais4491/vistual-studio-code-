#include<stdio.h>
#include<string.h>
main()
{
	char a[6]="hello";
	int i=0,j,b[6];
	while(a[i]!='\0')
	{
		i++;
	}
	i=i-1;
	
	for(j=0;j<6;j++)
	{
		b[j]=a[i];
		i--;
	}
	printf("%s",b);
}
