#include<stdio.h>
#include<string.h>
main()
{
	char str[6],str1[6];
	int i,j;
	int count=0;
	gets(str);
	gets(str1);
	for(i=0;i<6;i++)
	{
	   if(str[i]==str1[i])
	   {
	      continue;
	   }

	
	else{
	     count++;
	    }
	}
	if(strlen(str)==strlen(str1)&&count==0)
	{
		printf("string are identicle");
	}
		else{
			printf("string are not identicle");
	     	}
	
}
