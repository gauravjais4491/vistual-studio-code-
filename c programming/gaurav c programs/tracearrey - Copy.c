#include<stdio.h>
main()
{
	int a[2][2]={{2,4},{3,4}};
	int sum=0,i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		if (i==j)
		{
			sum = sum+ a[i][j];
		}
		
		}
	}
	printf("%d",sum);
}
