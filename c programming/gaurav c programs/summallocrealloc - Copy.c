#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,*p;
	int sum=0;
	p=(int*)malloc(5*sizeof(int));
	for(i=0;i<5;i++)
	{
		scanf("%d",p+i);
	}
	p=(int*)realloc(p,8*sizeof(int));
	for(i=5;i<8;i++)
	{
    scanf("%d",p+i);
    }
    for(i=0;i<8;i++)
    {
    	sum=sum+*(p+i);
    	
	}
	printf("%d",sum);

    
}
