#include<stdio.h>
main()
{
	int pass,i;
int	a[8]={1,7,4,9,5,62,86,26};
	for(pass=1;pass<8;pass++)
	{
		for(i=0;i<8;i++)
		{
			if(a[i]>a[i+1])
			{
			
			int temp;
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;}
		
		}
	}
	for(i=0;i<8;i++)
	{
	printf("%d\t",a[i]);	
	}
	
	
}
