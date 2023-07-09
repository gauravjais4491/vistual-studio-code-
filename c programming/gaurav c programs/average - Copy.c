#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter the values of a,b,c");
	scanf("%d %d %d", &a,&b,&c);
	int sum;
	sum=a+b+c;
	float average;
	average=(sum)/3;
	printf(" average is  %f", average);
	getch();
	
}
