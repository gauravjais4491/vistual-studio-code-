#include<stdio.h>
main()
{
	char a[5],ch,i,c=0;
	printf("enter string");
	gets(a);
	printf("enter character to be find");
	scanf("%c",&ch);
	for(i=0;i<5;i++)
	{
		if(a[i]==ch)
		c++;
	}
	printf("character %c occured %d times",ch,c);
}
