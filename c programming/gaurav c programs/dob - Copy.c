#include<stdio.h>
main()
{
	int dob,days,month,d;
	printf("enter your year");
	scanf("%d",&dob);
	scanf("%d%d",&month,&d);
	days=(2019-dob)*365+(9-month)*30+d;
	printf("days %d",days);
}
