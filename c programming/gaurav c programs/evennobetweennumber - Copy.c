#include <stdio.h>

int main()
{
	int i;
	printf("Even numbers between 50 to 150\n");
	for (i = 50; i <= 150; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
	return 0;
}

