#include<stdio.h>
main()
{
	int *str="His";
	int i;
	for(i=0;i<strlen(str);i++)
	{
		printf("%s",str++);
		
	}
	
	

}
