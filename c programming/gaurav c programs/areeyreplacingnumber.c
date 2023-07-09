#include<stdio.h>
main()
{
	int array[10]={2,4,5,7,4,9,3,76,83,45};
	int position,c,n,value;
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);}
		printf("enter the location where you wish to insert an element:\n");
		scanf("&d",&position);
		printf("enter the value to insert:\n");
		scanf("%d",&value);
		
		for(c=n-1;c>=position-1;c--)
		{
			array[c+1]=array[c];
			array[position-1]=value;
			printf("resultant array is:\n");
        }
		for(c=0;c<=n;c++)
		{
			printf("%d\n",array[c]);	
		}
		
	}
	return0;
}
