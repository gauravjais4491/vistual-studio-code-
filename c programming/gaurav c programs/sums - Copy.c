#include<stdio.h>
#include<conio.h>
main()
{
	
	int a,b,c;
	printf("enter the values of principal amount,rate,time in year\n");
	scanf("%d %d %d", &a, &b, &c);
	int sum;
	sum=a*b*c;
	printf("sum is %d",sum);
	float simple_interest;
	simple_interest=sum/100;
	printf("simple_interest is  %f", simple_interest);
	getch();
}
