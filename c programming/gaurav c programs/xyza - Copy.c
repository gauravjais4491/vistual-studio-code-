#include<stdio.h>
#include<string.h>
int main(void)
{
	int temp=4;
	int *my_pointer=&temp;
	*my_pointer=9;
	printf("the value is: %d",temp);
	return 0;
}